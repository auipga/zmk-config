// Letters
// https://zmk.dev/docs/codes/keyboard-keypad#letters
#define DE_AE     APOS              // Ä
#define DE_OE     SEMI              // Ö
#define DE_UE     LBKT              // Ü
#define DE_SS     MINUS             // ß
#define DE_Z      Y                 // Z
#define DE_Y      Z                 // Y

// Symbols / Punctuation
// https://zmk.dev/docs/codes/keyboard-keypad#symbols--punctuation
#define DE_EXCL   LS(N1)            // ! EXCL, EXCLAMATION
#define DE_AT     RA(Q)             // @ AT, AT_SIGN
#define DE_HASH   NON_US_HASH       // # HASH, POUND
#define DE_DLLR   LS(N4)            // $ DLLR, DOLLAR
#define DE_PRCNT  LS(N5)            // % PRCNT, PERCENT
#define DE_CARET  GRAVE             // ^ (dead) CARET
#define DE_AMPS   LS(N6)            // & AMPS, AMPERSAND
#define DE_STAR   LS(RBKT)          // * STAR, ASTRK, ASTERISK
#define DE_LPAR   LS(N8)            // ( LPAR, LEFT_PARENTHESIS
#define DE_RPAR   LS(N9)            // ) RPAR, RIGHT_PARENTHESIS
#define DE_EQUAL  LS(N0)            // = EQUAL
#define DE_PLUS   RBKT              // + PLUS
#define DE_MINUS  FSLH              // - MINUS
#define DE_UNDER  LS(FSLH)          // _ UNDER, UNDERSCORE
#define DE_FSLH   LS(N7)            // / FSLH, SLASH
#define DE_QMARK  LS(MINUS)         // ? QMARK, QUESTION
#define DE_BSLH   RA(MINUS)         // (backslash) BSLH, BACKSLASH
#define DE_PIPE   RA(NON_US_BSLH)   // | PIPE
#define DE_SEMI   LS(COMMA)         // ; SEMI, SEMICOLON
#define DE_COLON  LS(DOT)           // : COLON
#define DE_SQT    LS(NON_US_HASH)   // ' SQT, SINGLE_QUOTE, APOS, APOSTROPHE
#define DE_DQT    LS(N2)            // " DQT, DOUBLE_QUOTES
#define DE_COMMA  COMMA             // , COMMA
#define DE_LT     NON_US_BSLH       // < LT, LESS_THAN
#define DE_DOT    DOT               // . DOT, PERIOD
#define DE_GT     LS(NON_US_BSLH)   // > GT, GREATER_THAN
#define DE_LBKT   RA(N8)            // [ LBKT, LEFT_BRACKET
#define DE_LBRC   RA(N7)            // { LBRC, LEFT_BRACE
#define DE_RBKT   RA(N9)            // ] RBKT, RIGHT_BRACKET
#define DE_RBRC   RA(N0)            // } RBRC, RIGHT_BRACE
#define DE_GRAVE  LS(EQUAL)         // ` (dead) GRAVE
#define DE_TILDE  RA(RBKT)          // ~ TILDE

// Other
#define DE_DEG    LS(GRAVE)         // °
#define DE_SUP2   RA(N2)            // ²
#define DE_SUP3   RA(N3)            // ³
#define DE_SECT   LS(N3)            // §
#define DE_ACUT   EQUAL             // ´ (dead)
#define DE_EURO   RA(E)             // €
#define DE_MICR   RA(M)             // µ

// fix most common mistake
#define ENT RET

// more seeable aliases
#define XXX      &none
#define ___      &trans
#define XXXXXXXX &none
#define ________ &none
#define P_       SPACE // temp
