# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## What This Is

A personal ZMK keyboard firmware configuration for multiple boards (Planck, Corneish Zen v2, Glove80, Hillside52). ZMK config files use Zephyr Device Tree syntax (`.keymap`, `.dtsi`, `.conf`) plus C preprocessor macros (`.h` files).

## Build Environment

Requires Nix + direnv. The nix flake provides all tooling automatically when entering the directory.

One-time setup:
```bash
just init        # Initialize west workspace (downloads ZMK, zephyr, modules)
```

## Common Commands

```bash
just init                # Prepare build environment
just build <target>      # Build a specific board (e.g. hillside52)
just build <target> -p   # Pristine (clean) build for a target
just list                # List all available build targets
just draw                # Generate SVG keymap visualization (draw/base.svg)
just clean               # Clear build cache and firmware output
just update              # Update ZMK and modules per west.yml
just flash <name> [side] # Copy UF2 firmware to /run/media/<name>
```

## Repository Structure

- `config/` — All user-facing files: keymaps, combos, behaviors, board configs
- `config/my-hillside52.keymap` — Older revision Hillside52 config (use this to migrate)
- `config/base-auipga.keymap` — Active primary layout (included by hillside52)
- `config/base.keymap` — Upstream urob layout (included by planck, glove80, corneish_zen)
- `config/combos-auipga.dtsi` — Active combo definitions for the auipga layout
- `config/combos.dtsi` — Upstream urob combo definitions (copy, kept in sync separately)
- `config/leader.dtsi` — Leader key sequences (German umlauts, Greek letters, system commands)
- `config/mouse.dtsi` — Mouse layer behavior
- `config/west.yml` — West manifest pinning ZMK v0.3 and custom modules
- `build.yaml` — Board/shield matrix for CI and `just build all`
- `modules/` — Custom ZMK behavior modules: auto-layer, adaptive-key, tri-state, unicode, leader-key, smart-toggle (gitignored, fetched by `just init`)
- `draw/` — Keymap visualization config and output SVG

## Keymap Architecture

### Layers (defined in `base-auipga.keymap`)

- `DEF 0` — Base (Dvorak-variant with homerow mods)
- `NAV 1` — Navigation: arrows, clipboard, smart swappers
- `FN 2` — Function keys, Bluetooth selectors, system reset/bootloader
- `NUM 3` — Number pad right hand, modifiers on left
- `SYM 4` — Dedicated symbols layer
- `MOUSE 5` — Mouse movement/scroll/buttons (auto-toggled via `smart_mouse` tri-state)
- `VIM_NAV 6` — Vim motion layer: line nav, word nav, jump, search
- `VIM_HJKL 7` — Vim hjkl cursor keys with left-hand modifiers
- `VIM_WS 8` — Vim window split navigation (Ctrl-W + hjkl)
- `VIM_RS 9` — Vim results scrolling (PgUp/PgDn, Alt-F/K)
- `VIM_PS 10` — Vim preview scrolling (Ctrl-U/D/F/K)

### Board-specific wrapper pattern

Each board keymap (e.g. `hillside52.keymap`) optionally defines a `ZMK_BASE_LAYER` macro before including the shared base keymap. This macro wraps each layer definition to inject board-specific outer keys (e.g. ESC, encoder bindings, media keys).

### Key behaviors

**Homerow mods** use `MAKE_HRM` in `base-auipga.keymap`: balanced flavor, 280ms tapping-term, `require-prior-idle-ms = 150`, positional hold-tap with `hold-trigger-on-release`. Left HRMs (`hml`) trigger only on right-hand + thumb keys and vice versa. See `readme.md` for the full "timeless HRM" rationale.

**HRM combo hack**: combos overlapping HRM positions are declared with 8-argument `ZMK_COMBO` which generates a tap-only hold-tap instance per combo, working around ZMK issue #544.

**Symbols** are implemented via vertical combos (key pairs) defined in `combos.dtsi` and the `SYM` layer.

**Magic thumb** (right inner thumb): tap-after-alpha = repeat, tap-after-other = sticky-shift, double-tap = caps-word, hold = shift. Implemented via `zmk-adaptive-key` module.

**Smart num**: single-tap = numword (auto-exits on non-numeric), double-tap = sticky num, hold = num layer.

## Key Files for Editing Keymaps

- To change key assignments → `config/base-auipga.keymap`
- To change combos → `config/combos-auipga.dtsi`
- To change leader sequences → `config/leader.dtsi`
- To add board-specific overrides → the relevant `config/*<board>.keymap`
- To add a new board to the build matrix → `build.yaml`
- Private/secret config (gitignored) → `config/_private.dtsi`

## Device Tree / ZMK Syntax Notes

- `.keymap` and `.dtsi` files use Zephyr Device Tree overlay syntax
- `.conf` files use Kconfig syntax (key=value pairs)
- `.h` files use C preprocessor macros; included via `#include` in `.keymap`/`.dtsi`
- Key codes use ZMK's `&kp`, `&mt`, `&lt`, `&hml`, `&hmr`, `&mo`, etc.
- The `MAKE_HRM` macro generates a hold-tap behavior node; parameters are documented in `base[-auipga].keymap`
