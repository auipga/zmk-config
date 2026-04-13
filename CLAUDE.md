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
just build all           # Build all targets from build.yaml
just build <target>      # Build a specific board (e.g., planck, zen, glove80)
just list                # List all available build targets
just draw                # Generate SVG keymap visualization (draw/base.svg)
just test <testpath>     # Run tests for a specific test directory
just clean               # Clear build cache
just update              # Update ZMK and modules per west.yml
just flash <name> [side] # Copy UF2 firmware to /run/media/<name>
```

## Repository Structure

- `config/` — All user-facing files: keymaps, combos, behaviors, board configs
- `config/base.keymap` — Primary 34-key layout shared across all boards; board-specific files (`*zen.keymap`, `*glove80.keymap`, etc.) include it and add overrides
- `config/combos.dtsi` — All combo definitions (symbols, shortcuts, layer toggles)
- `config/leader.dtsi` — Leader key sequences (German umlauts, Greek letters, system commands)
- `config/mouse.dtsi` — Mouse layer behavior
- `config/west.yml` — West manifest pinning ZMK v0.3 and custom modules
- `build.yaml` — Board/shield matrix for CI and `just build all`
- `modules/` — Custom ZMK behavior modules: auto-layer, adaptive-key, tri-state, unicode, leader-key, smart-toggle (gitignored, fetched by `just init`)
- `draw/` — Keymap visualization config and output SVG

## Keymap Architecture

Layers (defined in board keymap files):
- `DEF 0` — Base (Dvorak-variant with homerow mods)
- `NAV 1` — Navigation + mouse scroll
- `FN 2` — Function keys
- `NUM 3` — Number pad (with numword smart-layer)
- `MOUSE 5` — Mouse control (auto-toggled)

**Homerow mods** use the `MAKE_HRM` macro in `base.keymap`: balanced flavor, 280ms tapping-term, `require-prior-idle-ms`, and positional hold-tap (left-hand HRMs only trigger on right-hand keys and vice versa). This is the "timeless HRM" approach — see `readme.md` for the full rationale.

**Symbol layer** is implemented entirely via vertical combos (key pairs) rather than a dedicated layer, defined in `combos.dtsi`.

**Magic thumb** (right inner thumb): tap-after-alpha = repeat, tap-after-other = sticky-shift, double-tap = caps-word, hold = shift. Implemented via `zmk-adaptive-key` module.

**Smart num**: single-tap = numword (auto-exits on non-numeric), double-tap = sticky num, hold = num layer.

## Key Files for Editing Keymaps

- To change key assignments on the base layer → `config/base.keymap`
- To change combos → `config/combos.dtsi` and `config/combos.h`
- To change leader sequences → `config/leader.dtsi`
- To add board-specific overrides → the relevant `config/*<board>.keymap`
- To add a new board to the build matrix → `build.yaml`
- Private/secret config (gitignored) → `config/_private.dtsi`

## Device Tree / ZMK Syntax Notes

- `.keymap` and `.dtsi` files use Zephyr Device Tree overlay syntax
- `.conf` files use Kconfig syntax (key=value pairs)
- `.h` files use C preprocessor macros; included via `#include` in `.keymap`/`.dtsi`
- Key codes use ZMK's `&kp`, `&mt`, `&lt`, `&hml`, `&hmr`, `&mo`, etc.
- The `MAKE_HRM` macro generates a hold-tap behavior node; parameters are documented in `base.keymap`
