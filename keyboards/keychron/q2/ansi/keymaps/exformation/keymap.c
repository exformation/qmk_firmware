// unset LD_LIBRARY_PATH // cuz of my LD_PRELOAD shenanigans for osu??
// nix-shell
// qmk flash -kb keychron/q2/ansi -km exformation

#include QMK_KEYBOARD_H

enum layers{
    WIN_BASE,
    _FN2,
    _FN3
};

#define KC_TASK LGUI(KC_TAB)
#define KC_FLXP LGUI(KC_E)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [WIN_BASE] = LAYOUT_ansi_67(
        _______,                KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,  KC_EQL,   KC_BSPC,          KC_INS,
        KC_TAB,                 KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC,  KC_RBRC,  KC_BSLS,          KC_DEL,
        MT(MOD_LCTL, KC_ESC),   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,            KC_ENT,           KC_HOME,
        OSM(MOD_LSFT),          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,            KC_RSFT, KC_UP,
        _______, OSM(MOD_LGUI), OSM(MOD_LALT),                            KC_SPC,                             KC_RALT, MO(_FN2), MO(_FN3), KC_LEFT, KC_DOWN, KC_RGHT),

    [_FN2] = LAYOUT_ansi_67(
        KC_GRV,  KC_BRID, KC_BRIU, KC_TASK, KC_FLXP, RGB_VAD, RGB_VAI, KC_MPRV, KC_MPLY, KC_MNXT, KC_MUTE, KC_VOLD,  KC_VOLU, _______,          _______,
        KC_GRV,  RGB_MOD, RGB_VAI, RGB_HUI, RGB_SAI, RGB_SPI, _______, _______, _______, _______, _______, _______,  _______, _______,          _______,
        _______, RGB_RMOD,RGB_VAD, RGB_HUD, RGB_SAD, RGB_SPD, _______, _______, _______, _______, _______, _______,           _______,          _______,
        _______,          _______, _______, _______, _______, _______, NK_TOGG, _______, _______, _______, _______,           _______, _______,
        _______, _______, _______,                            _______,                            _______, _______,  _______, _______, _______, _______),

    [_FN3] = LAYOUT_ansi_67(
        KC_TILD, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,   KC_F12,  _______,          _______,
        KC_TILD, RGB_MOD, RGB_VAI, RGB_HUI, RGB_SAI, RGB_SPI, _______, _______, _______, _______, _______, _______,  _______, _______,          _______,
        _______, RGB_RMOD,RGB_VAD, RGB_HUD, RGB_SAD, RGB_SPD, _______, _______, _______, _______, _______, _______,           _______,          _______,
        _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,           _______, _______,
        _______, _______, _______,                            _______,                            _______, _______,  _______, _______, _______, _______)
};
