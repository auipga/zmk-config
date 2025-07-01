/*
 * Aliases for outer keys
*/

/*
 *    numbering   ┼───┐              ┌───┼
 *                L2_1│              │R2_1
 * ┬───┬─┬─┴─┬─┴─┬┴──┬┴──┐        ┌──┴┬──┴┬──┴┬──┴┬─┬───┬
 * │   │ │ L4│ L3│ L2│ L1│        │ R1│ R2│ R3│ R4│ │   │
 * └───┘ └───┴───┴───┴───┘        └───┴───┴───┴───┘ └───┘
 *
 *   Encoders Pos ┼───┐              ┌───┼
 *                │ . │              │ . │
 * ┬───┬─┬┴──┬┴──┬┴──┬┴──┐        ┌──┴┬──┴┬──┴┬──┴┬─┬───┬
 * │ . │ │ ð │   │   │   │        │   │   │   │ ð │ │ . │
 * └───┘ └───┴───┴───┴───┘        └───┴───┴───┴───┘ └───┘
 *
 *    tap         ┼───┐              ┌───┼
 *                │   │              │   │
 * ┬───┬─┬┴──┬┴──┬┴──┬┴──┐        ┌──┴┬──┴┬──┴┬──┴┬─┬───┬
 * │   │ │ ð │ESC│SPC│TAB│        │ENT│BSP│DEL│ ð │ │   │
 * └───┘ └───┴───┴───┴───┘        └───┴───┴───┴───┘ └───┘
 *
 *    hold        ┼───┐              ┌───┼
 *                │   │              │   │
 * ┬───┬─┬┴──┬┴──┬┴──┬┴──┐        ┌──┴┬──┴┬──┴┬──┴┬─┬───┬
 * │   │ │ ð │PHP│NAV│NUM│        │   │SYM│FUN│ ð │ │   │
 * └───┘ └───┴───┴───┴───┘        └───┴───┴───┴───┘ └───┘
*/


// Left Outer Pinky
#define LOP_1   &kp ESC       // ✔
#define LOP_2   &hm LSHFT TAB // ✔
#define LOP_3   &kp LCTRL

// Right Outer Pinky (1 and 2 are already defined by the keymap)
//#define ROP_1   &kp BSPC
//#define ROP_2   &kp ENTER
#define ROP_3   &kp RSHFT


// Left Arrow Area
#define LAR_1   &kp C_MUTE
#define LAR_2   &mo MED_L
#define LAR_3   &kp K_PP

// Right Arrow Area ✔
#define RAR_0   &kp UP    // ✔
#define RAR_1   &kp LEFT  // ✔
#define RAR_2   &kp DOWN  // ✔
#define RAR_3   &kp RIGHT // ✔


// Left Thumb Keys
#define LTK_1    RET   // ✔
#define LTK_2    SPACE // ✔
#define LTK_3    ESC   // ✔
//#define LTK_4    L_ENC  ✔
#define LTK_2_1  &a_ret

// Right Thumb Keys
#define RTK_1    RET   // ✔
#define RTK_2    BSPC  // ✔
#define RTK_3    DEL   // ✔
//#define RTK_4    R_ENC  ✔
#define RTK_2_1  ________ //todo


// Left Thumb Layer switching
#define LTL_1    NUM_L  // ✔
#define LTL_2    NAV_L  // ✔
#define LTL_3    PHP_L  //
//#define LTL_4    L_ENC   ✔
//#define LTL_2_1  L_DISPL ✔

// Right Thumb Layer switching
#define RTL_1    SYM_L  //
#define RTL_2    SYM_L  // EDIT_L
#define RTL_3    FUN_L  // ✔
//#define RTL_4    R_ENC   ✔
//#define RTL_2_1  R_TRKPD ✔


//----------------------------------------------------------------
#define LT_1    &lt LTL_1    LTK_1
#define LT_2    &lt LTL_2    LTK_2
#define LT_3    &lt LTL_3    LTK_3
#define L_ENC   &none
#define LT_2_1               LTK_2_1
//
#define RT_1    &lt RTL_1    RTK_1
#define RT_2    &lt RTL_2    RTK_2
#define RT_3    &lt RTL_3    RTK_3
#define R_ENC   &none
#define RT_2_1               RTK_2_1
