#include QMK_KEYBOARD_H
#include "version.h"

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {


    /*
     * ,--------------------------------------------------.    ,--------------------------------------------------.
     * |    0   |   1  |   2  |   3  |   4  |   5  |  6   |    |  38  |  39  |  40  |  41  |  42  |  43  |   44   |
     * |--------+------+------+------+------+------+------|    |------+------+------+------+------+------+--------|
     * |    7   |   8  |   9  |  10  |  11  |  12  |  13  |    |  45  |  46  |  47  |  48  |  49  |  50  |   51   |
     * |--------+------+------+------+------+------|      |    |      |------+------+------+------+------+--------|
     * |   14   |  15  |  16  |  17  |  18  |  19  |------|    |------|  52  |  53  |  54  |  55  |  56  |   57   |
     * |--------+------+------+------+------+------|  26  |    |  58  |------+------+------+------+------+--------|
     * |   20   |  21  |  22  |  23  |  24  |  25  |      |    |      |  59  |  60  |  61  |  62  |  63  |   64   |
     * `--------+------+------+------+------+-------------'    `-------------+------+------+------+------+--------'
     *   |  27  |  28  |  29  |  30  |  31  |                                |  65  |  66  |  67  |  68  |  69  |
     *   `----------------------------------'                                `----------------------------------'
     *                                       ,-------------.  ,-------------.
     *                                       |  32  |  33  |  |  70  |  71  |
     *                                ,------+------+------|  |------+------+------.
     *                                |      |      |  34  |  |  72  |      |      |
     *                                |  35  |  36  |------|  |------|  74  |  75  |
     *                                |      |      |  37  |  |  73  |      |      |
     *                                `--------------------'  `--------------------'
     */

[0] = LAYOUT_ergodox_pretty(
       KC_CAPS,    KC_1,    KC_2,         KC_3,           KC_4,            KC_5,       KC_MINS,      KC_EQL        , KC_6           , KC_7   , KC_8   , KC_9  , KC_0   , KC_LBRC,
        KC_TAB,    KC_Q,    KC_W,         KC_E,           KC_R,            KC_T,         TG(2),      KC_ENT        , KC_Y           , KC_U   , KC_I   , KC_O  , KC_P   , KC_RBRC,
LCTL_T(KC_ESC),    KC_A,    KC_S,         KC_D,           KC_F,            KC_G,                                     KC_H           , KC_J   , KC_K   , KC_L  , KC_SCLN, KC_QUOT,
       KC_LSFT,    KC_Z,    KC_X,         KC_C,           KC_V,            KC_B,         TG(1),      KC_LT         , KC_N           , KC_M   , KC_COMM, KC_DOT, KC_SLSH, KC_NUHS,
 LSFT(KC_LCTL), KC_LGUI, KC_LALT, LSFT(KC_TAB),         LT(1,KC_TAB),                                                                LT(2,KC_ENT) , KC_LALT, KC_RALT, KC_RGUI, LSFT(KC_LCTL),

                                                                         KC_DEL,         TG(3),      OSM(MOD_HYPR), OSM(MOD_MEH) ,
                                                                                       KC_PGDN,      KC_PGUP       ,
                                                LSFT_T(KC_SPC),  LT(2,KC_TAB), LCTL_T(KC_DOWN),     LSFT_T(KC_UP), LT(1,KC_ESC)  , LCTL_T(KC_BSPC)
),

[1] = LAYOUT_ergodox_pretty(
KC_TRNS,      KC_F1,      KC_F2,      KC_F3,        KC_F4,        KC_F5,   KC_F6,      KC_F7  , KC_F8     , KC_F9     , KC_F10       , KC_F11 , KC_F12    , KC_TRNS,
KC_TRNS,       KC_8, RALT(KC_0), RALT(KC_4), RALT(KC_EQL),      KC_PPLS, KC_TRNS,      KC_TRNS, RALT(KC_6), RALT(KC_7), LSFT(KC_NUBS), KC_NUBS, RALT(KC_8), KC_TRNS,
KC_TRNS, RALT(KC_3),    KC_RBRC,       KC_5,      KC_MINS,      KC_PAST,                        KC_LEFT   , KC_DOWN   , KC_UP        , KC_RGHT, KC_1      , KC_TRNS,
KC_TRNS, RALT(KC_2),    KC_LBRC, RALT(KC_5),   RALT(KC_MINS), LSFT(KC_DOT), KC_TRNS,      KC_TRNS, LSFT(KC_QUOT)   , KC_EQL   , KC_TRNS      , KC_TRNS, KC_TRNS   , KC_TRNS,
KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,      KC_TRNS,                                                  KC_TRNS   , KC_TRNS      , KC_TRNS, KC_TRNS   , KC_TRNS,

                                                                KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS   ,
                                                                         KC_TRNS,      KC_TRNS,
                                                  KC_TRNS,      KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS   , KC_TRNS
),

[2] = LAYOUT_ergodox_pretty(
KC_TRNS, KC_EXLM, KC_AT, KC_HASH,  KC_DLR, KC_PERC,   KC_NO,      KC_NO  , KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_NO,
  KC_NO,   KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_TRNS,      KC_TRNS, KC_NO  , KC_AMPR, KC_ASTR, KC_LPRN, KC_NO  , KC_NO,
  KC_NO,   KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,                        KC_NO  , KC_DLR , KC_PERC, KC_CIRC, KC_NO  , KC_NO,
  KC_NO,   KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_TRNS,      KC_TRNS, KC_NO  , KC_EXLM, KC_AT  , KC_HASH, KC_NO  , KC_NO,
  KC_NO,   KC_NO, KC_NO,   KC_NO,   KC_NO,                                          KC_RPRN, KC_RPRN, KC_LT  , KC_NO  , KC_NO,

                                           KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS,
                                                    KC_TRNS,      KC_TRNS,
                                  KC_TRNS, KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS
),

[3] = LAYOUT_ergodox_pretty(
KC_TRNS, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_TRNS,      KC_TRNS, KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO, KC_NO,
  KC_NO, KC_NO,   KC_NO,   MS_UP,   KC_NO,   KC_NO, KC_TRNS,      KC_TRNS, KC_NO  , KC_NO  , MS_UP  , KC_NO  , KC_NO, KC_NO,
  KC_NO, KC_NO, MS_LEFT, MS_DOWN, MS_RGHT,   KC_NO,                        KC_NO  , MS_LEFT, MS_DOWN, MS_RGHT, KC_NO, KC_NO,
  KC_NO, KC_NO, MS_BTN1, MS_BTN2, MS_BTN3,   KC_NO, KC_TRNS,      KC_TRNS, KC_NO  , MS_BTN1, MS_BTN2, MS_BTN3, KC_NO, KC_NO,
  KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,                                          MS_ACL0, MS_ACL1, MS_ACL2, KC_NO, KC_NO,

                                           KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS,
                                                    KC_TRNS,      KC_TRNS,
                                  KC_TRNS, KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS
)
};
// clang-format on

// Runs just one time when the keyboard initializes.
void keyboard_post_init_user(void) {
#ifdef RGBLIGHT_COLOR_LAYER_0
    rgblight_setrgb(RGBLIGHT_COLOR_LAYER_0);
#endif
};

// Runs whenever there is a layer state change.
layer_state_t layer_state_set_user(layer_state_t state) {
    ergodox_board_led_off();
    ergodox_right_led_1_off();
    ergodox_right_led_2_off();
    ergodox_right_led_3_off();

    uint8_t layer = get_highest_layer(state);
    switch (layer) {
        case 0:
#ifdef RGBLIGHT_COLOR_LAYER_0
            rgblight_setrgb(RGBLIGHT_COLOR_LAYER_0);
#endif
            break;
        case 1:
            ergodox_right_led_1_on();
#ifdef RGBLIGHT_COLOR_LAYER_1
            rgblight_setrgb(RGBLIGHT_COLOR_LAYER_1);
#endif
            break;
        case 2:
            ergodox_right_led_2_on();
#ifdef RGBLIGHT_COLOR_LAYER_2
            rgblight_setrgb(RGBLIGHT_COLOR_LAYER_2);
#endif
            break;
        case 3:
            ergodox_right_led_3_on();
#ifdef RGBLIGHT_COLOR_LAYER_3
            rgblight_setrgb(RGBLIGHT_COLOR_LAYER_3);
#endif
            break;
        case 4:
            ergodox_right_led_1_on();
            ergodox_right_led_2_on();
#ifdef RGBLIGHT_COLOR_LAYER_4
            rgblight_setrgb(RGBLIGHT_COLOR_LAYER_4);
#endif
            break;
        case 5:
            ergodox_right_led_1_on();
            ergodox_right_led_3_on();
#ifdef RGBLIGHT_COLOR_LAYER_5
            rgblight_setrgb(RGBLIGHT_COLOR_LAYER_5);
#endif
            break;
        case 6:
            ergodox_right_led_2_on();
            ergodox_right_led_3_on();
#ifdef RGBLIGHT_COLOR_LAYER_6
            rgblight_setrgb(RGBLIGHT_COLOR_LAYER_6);
#endif
            break;
        case 7:
            ergodox_right_led_1_on();
            ergodox_right_led_2_on();
            ergodox_right_led_3_on();
#ifdef RGBLIGHT_COLOR_LAYER_7
            rgblight_setrgb(RGBLIGHT_COLOR_LAYER_7);
#endif
            break;
        default:
            break;
    }

    return state;
};
