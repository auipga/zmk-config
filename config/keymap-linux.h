// U = User defined key press
// u = User defined key codes

// OS default
#define u_UNDO     LC(DE_Z)         // Undo
#define U_UNDO     &kp u_UNDO       // Undo
#define u_REDO     LS(LC(DE_Z))     // Redo
#define U_REDO     &kp u_REDO       // Redo
#define u_FIND     LC(F)            // Find
#define U_FIND     &kp u_FIND       // Redo
#define u_TAB_NXT  LC(TAB)          // Next Tab      (for sensor-bindings)
#define u_TAB_PRV  LS(LC(TAB))      // Previous Tab  (for sensor-bindings)
#define U_TAB_NXT  &kp u_TAB_NXT    // Next Tab
#define U_TAB_PRV  &kp u_TAB_PRV    // Previous Tab
#define u_BACK     C_AC_BACK        // Browser back
#define u_FWD      C_AC_FORWARD     // Browser forward

// Browser
#define U_ADRBAR   &kp LC(L)        // focus address bar (Nautilus too)
#define U_DEVTOG   &kp LC(LS(I))    // Inspect Element (toggle dev tools)

// YouTube website
#define YT_FASTER  &kp LS(DE_DOT)
#define YT_SLOWER  &kp LS(DE_COMMA)

// gnome
#define U_CONSOL  &kp LG(T)         // gnome-terminal (custom)
#define U_SYSMON  &kp LC(LS(ESC))   // gnome-system-monitor

// gnome-shell extension | Custom Hot Corners - Extended
#define U_DARK     &kp LG(K_PP)     // Light/Dark Gtk Theme toggle
#define U_ZOOM     &kp LG(LS(DE_Z)) // Large Text toggle (Zoom)
#define U_PROMPT   &kp LA(F2)       // Alt-F2 prompt (+LG=restart gnome shell)
#define U_SWI_POP  &kp LG(W)        // Window Switcher Popup (like Alt-Tab, but stays open), LG(W) again closes!! xD

// gnome-shell extension | Brightness control using ddcutil
// https://extensions.gnome.org/extension/2645/brightness-control-using-ddcutil/
#define u_BRI_UP  LC(C_BRI_UP)      // bash -c "ddcutil setvcp 10 +10"
#define u_BRI_DN  LC(C_BRI_DN)      // bash -c "ddcutil setvcp 10 -10"

// gnome-shell extension | ArcMenu
#define U_RUN     &kp LG(DE_COMMA)  // arc menu runner
