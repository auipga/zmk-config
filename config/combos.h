// combo with binding to &kp
#define COMBO(KEYPOS1, KEYPOS2, KP) \
    combo_##KEYPOS1##_##KEYPOS2 { \
        timeout-ms = <40>; \
        key-positions = <KEYPOS1 KEYPOS2>; \
        layers = <DK_HRM_L DVORAK_L NUM_L>; \
        bindings = <&kp KP>; \
    };

// combo with custom binding
#define COMBC(KEYPOS1, KEYPOS2, BINDING) \
    combo_##KEYPOS1##_##KEYPOS2 { \
        timeout-ms = <40>; \
        key-positions = <KEYPOS1 KEYPOS2>; \
        layers = <DK_HRM_L DVORAK_L>; \
        bindings = <BINDING>; \
    };
