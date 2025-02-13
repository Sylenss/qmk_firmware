#include QMK_KEYBOARD_H

enum planck_layers {
    _BASE,
    _SYMBOL,
    _MEH,
    _GAME,
    _FKEYS,
    _ADJUST,
    _NAV,
    _VIM,
    _VINSERT,
};

enum planck_keycodes {
    BASE = VIM_SAFE_RANGE,
    BACKLIT,
    CTRL_ESC,
    NAV_SCLN,
    KVM_SWT,
    COPYADDR,
    SYMBOL,
    GAME,
    MEH,
    RMEH,
    LOCK,
};

#define FKEYS MO(_FKEYS)

#define WORD_L LALT(KC_LEFT)
#define WORD_R LALT(KC_RIGHT)

#define LINE_L LGUI(KC_LEFT)
#define LINE_R LGUI(KC_RIGHT)

#define DEL_WRD LALT(KC_BSPC)

#define TAB_L LCTL(LSFT(KC_TAB))
#define TAB_R LCTL(KC_TAB)

#define CUT   LGUI(KC_X)
#define COPY  LGUI(KC_C)
#define PASTE LGUI(KC_V)

#define CAP_IMG LGUI(LSFT(KC_4))        // Capture portion of screen
#define CAP_MOV LGUI(LSFT(KC_5))        // Capture portion of screen

#define XBX_IMG LGUI(LALT(KC_PSCR))     // Capture portion of screen
#define XBX_MOV LGUI(LALT(KC_G))        // Capture portion of screen