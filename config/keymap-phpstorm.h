// menus: needs arrows, ent, esc
/*l*/#define P_STRPOP  &kp LA(M)            // string manipulation popup
/*l*/#define P_DIFPOP  &kp LC(LS(D))        // popup: most commonly used diff commands in differences-viewer

// one action
/*l*/#define P_undo    &kp LA(   BSPC )     // Edit: Undo
/*l*/#define P_redo    &kp LA(LS(BSPC))     // Edit: Redo
/*l*/#define p_LOCPRV  LC(LS(PG_UP))        // Navigate: Last Edit Location (custom, else C(S(BSPC)))
/*l*/#define P_LOCPRV  &kp p_LOCPRV         // Navigate: Last Edit Location (custom, else C(S(BSPC)))
/*l*/#define p_LOCNXT  LC(LS(PG_DN))        // Navigate: Next Edit Location (custom)
/*l*/#define P_LOCNXT  &kp p_LOCNXT         // Navigate: Next Edit Location (custom)
/*l*/#define p_CURBAK  LC(LA(LEFT))         // Back    (cursor movement, same as Mouse Buttons)
/*l*/#define P_CURBAK  &kp p_CURBAK         // Back    (cursor movement, same as Mouse Buttons)
/*l*/#define p_CURFWD  LC(LA(RIGHT))        // Forward (cursor movement, same as Mouse Buttons)
/*l*/#define P_CURFWD  &kp p_CURFWD         // Forward (cursor movement, same as Mouse Buttons)
/*l*/#define P_ACTION  &kp LC(LS(A))        // Find action...
/*l*/#define p_CLPCMP  LA(LS(D))            // compare with clipboard
/*l*/#define P_CLPCMP  &kp p_CLPCMP         // compare with clipboard
/*l*/#define p_DUPLIC  LC(D)                // compare or duplicate line/selection
/*l*/#define P_DUPLIC  &kp p_DUPLIC         // duplicate
/*l*/#define P_COMPAR  &kp p_DUPLIC         // compare
/*l*/#define P_DEL_L   &kp LC(DE_Y)         // delete line
/*_*/#define P_INTENT  &kp LC(LA(I))        // intent
/*_*/#define P_REFORM  &kp LC(LA(L))        // reformat
/*_*/#define P_CAR_UP  &kp LC(LA(PG_UP))    // clone caret above
/*_*/#define P_CAR_DN  &kp LC(LA(PG_DN))    // clone caret below
/*r*/#define P_F_STRK  &kp LC(F12)          // File structure popup :D
/*r*/#define P_TEMPL   &kp LC(J)            // Insert live template (awesome!!!), postfix completion (awesome!)

/*_*/#define P_RENAME  &kp LS(F6)           // Rename selected file, function, variable,...
/*_*/#define P_DECLAR  &kp LC(B)            // Goto declaration or usages
/*_*/#define P_PARAMS  &kp LC(P)            // Parameter popup (shiftable)
/*_*/#define P_Q_DOC   &kp LC(Q)            // Quick documentation
/*_*/#define P_Q_DEF   &kp LC(LS(I))        // Quick definition

#define P_SETTIN   &kp LC(LA(S))         // Settings
// Tool windows
#define p_W_GIT    LA(N9)             // GIT
#define P_W_GIT    &kp p_W_GIT        // GIT
#define P_W_TERM   &kp LA(F12)        // Terminal
#define p_W_ReHo   LA(R)              // Browse Remote Host (custom)
#define P_W_ReHo   &kp p_W_ReHo       // Browse Remote Host (custom)
#define P_F_ReHo   &kp LS(LA(R))      // Show [opened file] in Remote Host (custom; used to be 'rerun tests')
#define P_RemoCo   &kp LA(K)          // Compare local file with deployed (custom)
#define P_RemoUp   &kp p_W_ReHo       // Remote Host (custom)


// viel mit arrows danach
/*l*/#define P_COLAPS  &kp LC(KP_MINUS)     // collapse block        (+alt recursive, +LS=all)
/*l*/#define P_EXPAND  &kp LC(KP_PLUS)      // expand block          (+alt recursive, +LS=all)
/*l*/#define P_FOLD    &kp LC(DE_DOT)       // Fold selection

// shiftable
/*l*/#define P_RECENT  &kp LC(E)            // recent files + recent locations
/*l*/#define P_RCNT_F  &kp LC(E)            // recent files
/*l*/#define P_RCNT_L  &kp LS(LC(E))        // recent locations
/*l*/#define p_SELOCC  LA(J)                // select next occurance (+LC+LS=all, auch von der Suche aus)
/*l*/#define P_SELOCC  &kp p_SELOCC         // select next occurance
/*l*/#define p_SELOC_  LS(p_SELOCC)         // unselect last occurance
/*l*/#define P_SELOC_  &kp LS(p_SELOCC)     // unselect last occurance
/*l*/#define p_NEXT    F3               // next occurance (of search or current selection)
/*l*/#define p_PREV    LS(F3)           // prev occurance (of search or current selection)
/*l*/#define P_NEXT    &kp p_NEXT           // next occurance (of search or current selection)
/*l*/#define P_PREV    &kp p_PREV           // prev occurance (of search or current selection)
/*_*/#define p_SELMOR  LC(W)                // extend selection
/*_*/#define P_SELMOR  &kp p_SELMOR         // extend selection
/*_*/#define P_SELMO_  &kp LS(p_SELMOR)     // shrink selection
/*_*/#define P_SELM_l  &lt P_SEL_L p_SELMOR // extend selection
/*r*/#define P_NAVIGT  &kp LC(N)            // Navigate Classes + Files

/*_*/#define P_BOKMRK  &kp F11              // toggle bookmark + show all (+LC=mnemonic)
/*l*/#define P_COMENT  &kp LC(DE_HASH)      // comment current line + selection (custom shortcut, default is with "/")
/*l*/#define P_CMNT_B  &kp LS(LC(DE_HASH))  // block comment selection
/*r*/#define P_FIND    &kp u_FIND           // find
/*r*/#define P_FINDA   &kp LS(u_FIND)       // find overall
/*r*/#define P_FIND_l  &lt P_FIND_L u_FIND  // find & FIND-Layer
/*r*/#define P_REPLAC  &kp LC(R)            // replace + overall
/*r*/#define P_REPLAA  &kp LS(LC(R))        // replace overall

/*l*/#define P_REFACT  &kp LC(LA(LS(T)))    // Refactor this
/*_*/#define P_EX_VAR  &kp LC(LA(V))        // Introduce variable
/*_*/#define P_EX_PAR  &kp LC(LA(P))        // Introduce parameter
/*_*/#define P_EX_CON  &kp LC(LA(C))        // Introduce constant
/*_*/#define P_EX_FLD  &kp LC(LA(F))        // Introduce field
/*_*/#define P_EX_MTD  &kp LC(LA(M))        // Extract method
/*_*/#define P_SURWIT  &kp LC(LA(T))        // surround with ...
/*_*/#define P_SURTPL  &kp LC(LA(J))        // surround with Live Template

// git
/*_*/#define P_GITPOP  &kp LA(DE_PLUS)      // VCS Actions Popup (custom, else LA(GRAVE))
/*_*/#define p_G_ComW  LC(K)                // Commit dialog
/*_*/#define P_G_ComW  &kp p_G_ComW         // Commit dialog
/*_*/#define P_G_Comm  &kp LA(I)            // - in dialog: Commit button
/*_*/#define P_G_ComP  &kp LA(p_G_ComW)     // - in dialog: Commit then Push
/*_*/#define P_G_PusW  &kp LS(p_G_ComW)     // Push dialog
/*_*/#define P_G_Push  &kp LA(P)            // - in dialog: Push button

// Comparison window
/*_*/#define P_CMPNXT  &kp LA(LS(RIGHT))    // Compare next file
/*_*/#define P_CMPPRV  &kp LA(LS(LEFT))     // Compare previous file
/*_*/#define p_DIFNXT  F7                   // Go to next difference
/*_*/#define p_DIFPRV  LS(F7)               // Go to previous difference
/*_*/#define P_DIFNXT  &kp p_DIFNXT         // Go to next difference
/*_*/#define P_DIFPRV  &kp p_DIFPRV         // Go to previous difference


