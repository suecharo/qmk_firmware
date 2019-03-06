#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

#define _QWERTY 0
#define _LOWER  1
#define _RAISE  2
#define _FN     3

#define KC_LOWER  MO(_LOWER)
#define KC_RAISE  MO(_RAISE)
#define KC_FN     MO(_FN)
#define _______ KC_TRNS
#define XXXXXXX KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY] = LAYOUT( \
    KC_TAB   , KC_Q     , KC_W     , KC_E     , KC_R     , KC_T     , KC_MINUS ,                               KC_EQUAL , KC_Y     , KC_U     , KC_I     , KC_O     , KC_P     , KC_BSPACE,\
    KC_LCTL  , KC_A     , KC_S     , KC_D     , KC_F     , KC_G     , KC_LBRC  ,                               KC_RBRC  , KC_H     , KC_J     , KC_K     , KC_L     , KC_SCOLON, KC_ENTER ,\
    KC_LSFT  , KC_Z     , KC_X     , KC_C     , KC_V     , KC_B     , KC_SPACE ,                               KC_SPACE , KC_N     , KC_M     , KC_COMMA , KC_DOT   , KC_UP    , KC_RSFT  ,\
    KC_ESC   , KC_FN    , KC_LALT  , KC_LANG2 ,            KC_LGUI  , KC_SPACE , KC_LOWER ,         KC_RAISE , KC_SPACE , KC_RGUI  ,            KC_LANG1 , KC_LEFT  , KC_DOWN  , KC_RIGHT\
  ),

  [_LOWER] = LAYOUT( \
    _______  , KC_EXLM  , KC_AT    , KC_HASH  , KC_DLR   , KC_PERC  , KC_GRAVE ,                               KC_QUOTE , KC_CIRC  , KC_AMPR  , KC_ASTR  , KC_LPRN  , KC_RPRN  , _______  ,\
    _______  , KC_1     , KC_2     , KC_3     , KC_4     , KC_5     , KC_BSLASH,                               KC_SLASH , KC_6     , KC_7     , KC_8     , KC_9     , KC_0     , _______  ,\
    _______  , _______  , _______  , _______  , _______  , KC_BSPACE, KC_ENTER ,                               KC_ENTER , KC_BSPACE, _______  , _______  , _______  , _______  , _______  ,\
    _______  , _______  , _______  , _______  ,            _______  , KC_ENTER , _______  ,         _______  , KC_ENTER , _______  ,            _______  , _______  , _______  , _______  \
  ),

  [_RAISE] = LAYOUT( \
    _______  , KC_EXLM  , KC_AT    , KC_HASH  , KC_DLR   , KC_PERC  , S(KC_GRAVE),                           S(KC_QUOTE), KC_CIRC  , KC_AMPR  , KC_ASTR  , KC_LPRN  , KC_RPRN  , _______  ,\
    _______  , _______  , _______  , _______  , _______  , _______  , S(KC_BSLASH),                          S(KC_SLASH), KC_LEFT  , KC_DOWN  , KC_UP    , KC_RIGHT , _______  , _______  ,\
    _______  , _______  , _______  , _______  , _______  , KC_BSPACE, KC_ENTER ,                               KC_ENTER , KC_BSPACE, _______  , _______  , _______  , _______  , _______  ,\
    _______  , _______  , _______  , _______  ,            _______  , KC_ENTER , _______  ,         _______  , KC_ENTER , _______  ,            _______  , _______  , _______  , _______  \
  ),

  [_FN] = LAYOUT( \
    _______  , _______  , _______  , _______  , _______  , _______  , _______  ,                               _______  , _______  , _______  , _______  , _______  , _______  , _______  ,\
    _______  , KC_F1    , KC_F2    , KC_F3    , KC_F4    , KC_F5    , KC_F6    ,                               KC_F7    , KC_F8    , KC_F9    , KC_F10   , KC_F11   , KC_F12   , _______  ,\
    _______  , _______  , _______  , _______  , _______  , _______  , _______  ,                               _______  , _______  , _______  , _______  , _______  , _______  , _______  ,\
    _______  , _______  , _______  , _______  ,            _______  , _______  , _______  ,         _______  , _______  , _______  ,            _______  , _______  , _______  , _______  \
  )
};
