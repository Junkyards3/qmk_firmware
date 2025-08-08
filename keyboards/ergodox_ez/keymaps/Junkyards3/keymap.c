#include QMK_KEYBOARD_H
#include "version.h"

uint16_t get_quick_tap_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LSFT_T(KC_SPC):
            return 0;
        default:
            return QUICK_TAP_TERM;
    }
}

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
  KC_NO,         KC_1,         KC_2,         KC_3,         KC_4,         KC_5,      KC_NO,      KC_NO  , KC_6         , KC_7         , KC_8        , KC_9        , KC_0           , TG(5)  ,
  TG(6),         KC_Q,         KC_W,         KC_E,         KC_R,         KC_T, RALT(KC_0),      KC_ENT , KC_Y         , KC_U         , KC_I        , KC_O        , KC_P           , KC_LBRC,
 KC_ESC, LGUI_T(KC_A), LALT_T(KC_S), LCTL_T(KC_D), LSFT_T(KC_F),         KC_G,                           KC_H         , RSFT_T(KC_J) , RCTL_T(KC_K), LALT_T(KC_L), RGUI_T(KC_SCLN), KC_QUOT,
KC_LSFT,         KC_Z,         KC_X,         KC_C,         KC_V,         KC_B, RALT(KC_8),      KC_LT  , KC_N         , KC_M         , KC_COMM     , KC_DOT      , KC_SLSH        , CW_TOGG ,
KC_LCTL,      KC_LGUI,      KC_LALT, LSFT(KC_TAB),LT(7, KC_TAB),                                                        KC_ENT       , LSFT(KC_ENT), KC_RALT     , QK_AREP        , QK_REP  ,

                                                                        KC_COPY,   KC_PSTE,     DT_UP  , DT_PRNT        ,
                                                                                   KC_UNDO,     DT_DOWN  ,
                                                   LT(1,KC_SPC), LT(2,KC_LT),    CW_TOGG,     KC_CAPS, LT(4,KC_PSLS), LT(3,KC_BSPC)
),

[1] = LAYOUT_ergodox_pretty(
KC_NO,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,      KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 , KC_F12 , KC_NO ,
KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_TRNS,      KC_TRNS, KC_INS , KC_HOME, KC_COPY, KC_PSTE, KC_CUT , KC_NO ,
KC_NO, KC_LGUI, KC_LALT,   KC_LCTL, KC_LSFT,   KC_NO,                      KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT, KC_UNDO, KC_NO ,
KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_TRNS,      KC_TRNS, KC_DEL , KC_PGDN, KC_PGUP, KC_NO  , KC_NO  , QK_REP,
KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                                          KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO ,

                                           KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS,
                                                    KC_TRNS,      KC_TRNS,
                                  KC_TRNS, KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS
),

[2] = LAYOUT_ergodox_pretty(
KC_TRNS, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC,   KC_NO,      KC_NO  , KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_NO ,
  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_TRNS,      KC_TRNS, KC_PPLS, KC_AMPR, KC_ASTR, KC_LPRN, KC_PMNS, KC_NO ,
  KC_NO, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT,   KC_NO,                        KC_PEQL, KC_DLR , KC_PERC, KC_CIRC, KC_PAST, KC_NO ,
  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_TRNS,      KC_TRNS, KC_RPRN, KC_EXLM, KC_AT  , KC_HASH, KC_PSLS, QK_REP,
  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                                          KC_NO  , KC_RPRN, KC_NO  , KC_NO  , KC_NO ,

                                             KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS,
                                                      KC_TRNS,      KC_TRNS,
                                    KC_TRNS, KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS
),

[3] = LAYOUT_ergodox_pretty(
KC_NO,      KC_NO,      KC_NO,         KC_NO,      KC_NO,      KC_NO,   KC_NO,      KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO ,
KC_NO,       KC_1, RALT(KC_0),       KC_6,       KC_4,       KC_BSLS,   KC_NO,      KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO ,
KC_NO, RALT(KC_3),    KC_RBRC,       KC_8,       KC_3,    RALT(KC_8),                        KC_NO  , KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, KC_NO ,
KC_NO, RALT(KC_2), RALT(KC_9), RALT(KC_6), RALT(KC_7), LSFT(KC_QUOT),   KC_NO,      KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , QK_REP,
KC_NO,      KC_NO,      KC_NO,         KC_NO,      KC_NO,                                             KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO ,

                                                             KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS,
                                                                      KC_TRNS,      KC_TRNS,
                                                 KC_TRNS,    KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS
),

[4] = LAYOUT_ergodox_pretty(
KC_NO,   KC_NO,         KC_NO,      KC_NO,         KC_NO,   KC_NO,   KC_NO,      KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO ,
KC_NO,   KC_NO,         KC_NO, RALT(KC_4),  RALT(KC_EQL),   KC_NO,   KC_NO,      KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO ,
KC_NO, KC_NUBS, LSFT(KC_NUBS),       KC_5,       KC_MINS,   KC_NO,                        KC_NO  , KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, KC_NO ,
KC_NO,   KC_NO,         KC_NO, RALT(KC_5), RALT(KC_MINS),   KC_NO,   KC_NO,      KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , QK_REP,
KC_NO,   KC_NO,         KC_NO,      KC_NO,         KC_NO,                                          KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO ,

                                                          KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS,
                                                                   KC_TRNS,      KC_TRNS,
                                                 KC_TRNS, KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS
),

[5] = LAYOUT_ergodox_pretty(
 KC_ESC,    KC_1,    KC_2,  KC_3,   KC_4,  KC_5, KC_NO,      KC_NO, KC_6 , KC_7   , KC_8   , KC_9  , KC_0   , KC_TRNS,
 KC_TAB,    KC_Q,    KC_W,  KC_E,   KC_R,  KC_T, KC_NO,      KC_NO, KC_Y , KC_U   , KC_I   , KC_O  , KC_P   , KC_NO  ,
KC_CAPS,    KC_A,    KC_S,  KC_D,   KC_F,  KC_G,                    KC_H , KC_J   , KC_K   , KC_L  , KC_SCLN, KC_NO  ,
KC_LSFT,    KC_Z,    KC_X,  KC_C,   KC_V,  KC_B, KC_NO,      KC_NO, KC_N , KC_M   , KC_COMM, KC_DOT, KC_SLSH, KC_NO  ,
KC_LCTL, KC_LGUI, KC_LALT, KC_NO,  KC_NO,                                  KC_ENT , KC_NO  , KC_NO , KC_NO  , KC_NO  ,

                                          KC_NO, KC_NO,      KC_NO, KC_NO,
                                                 KC_NO,      KC_NO,
                                  KC_SPC, KC_NO, KC_NO,      KC_NO, KC_NO, KC_BSPC
),

[6] = LAYOUT_ergodox_pretty(
  KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_NO,      KC_NO, KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO, KC_NO,
KC_TRNS, KC_NO,   KC_NO,   MS_UP,   KC_NO, MS_WHLU, KC_NO,      KC_NO, MS_WHLU, KC_NO  , MS_UP  , KC_NO  , KC_NO, KC_NO,
  KC_NO, KC_NO, MS_LEFT, MS_DOWN, MS_RGHT, MS_WHLD,                    MS_WHLD, MS_LEFT, MS_DOWN, MS_RGHT, KC_NO, KC_NO,
  KC_NO, KC_NO, MS_BTN1, MS_BTN2, MS_BTN3,   KC_NO, KC_NO,      KC_NO, KC_NO  , MS_BTN1, MS_BTN2, MS_BTN3, KC_NO, KC_NO,
  KC_NO, KC_NO,   KC_NO,   KC_NO,   KC_NO,                                      MS_ACL0, MS_ACL1, MS_ACL2, KC_NO, KC_NO,

                                             KC_NO, KC_NO,      KC_NO, KC_NO  ,
                                                    KC_NO,      KC_NO,
                                    KC_NO,   KC_NO, KC_NO,      KC_NO, KC_NO  , KC_NO
),

[7] = LAYOUT_ergodox_pretty(
KC_TRNS, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC,   KC_NO,      KC_NO  , KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_NO ,
  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_TRNS,      KC_TRNS, KC_PPLS, KC_7, KC_8, KC_9, KC_PMNS, KC_NO ,
  KC_NO, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT,   KC_NO,                        KC_PEQL, KC_4, KC_5, KC_6, KC_PAST, KC_NO ,
  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_TRNS,      KC_TRNS, KC_0,    KC_1, KC_2, KC_3, KC_PSLS, QK_REP,
  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                                          KC_NO  , KC_0, KC_NO  , KC_NO  , KC_NO ,

                                             KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS,
                                                      KC_TRNS,      KC_TRNS,
                                    KC_TRNS, KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS
),
};
const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM =
    LAYOUT_ergodox_pretty(
  'L', 'L',   'L',   'L',   'L', 'L', 'L',      'R', 'R', 'R', 'R', 'R', 'R', 'R',
  'L', 'L',   'L',   'L',   'L', 'L', 'L',      'R', 'R', 'R', 'R', 'R', 'R', 'R',
  'L', 'L', 'L', 'L', 'L', 'L',                      'R', 'R', 'R', 'R', 'R', 'R',
  'L', 'L', 'L', 'L', 'L',   'L', 'L',          'R', 'R', 'R', 'R', 'R', 'R', 'R',
  'L', 'L',   'L',   'L',   'L',                          'R', 'R', 'R', 'R', 'R',

                                 '*', '*',      '*', '*',
                                      '*',      '*',
                          '*',   '*', '*',      '*', '*', '*'
);
// clang-format on

// Runs just one time when the keyboard initializes.
void keyboard_post_init_user(void) {
#ifdef RGBLIGHT_COLOR_LAYER_0
    rgblight_setrgb(RGBLIGHT_COLOR_LAYER_0);
#endif
};

bool caps_word_press_user(uint16_t keycode) {
    // There is a special function to handle dead key accents, so we don't have to apply caps word
    switch (keycode) {
        // Keycodes that continue Caps Word, with shift applied.
        case KC_A ... KC_L:
        case KC_N ... KC_Z:
        case KC_SCLN:
            add_weak_mods(MOD_BIT_LSHIFT); // Apply shift to next key.
            return true;

        // Keycodes that continue Caps Word, without shifting.
        case KC_BSPC:
        case KC_DEL:
        case KC_6:
        case KC_8:
            return true;

        default:
            return false; // Deactivate Caps Word.
    }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LT(2, KC_LT):
            if (record->tap.count && record->event.pressed) {
                tap_code16(KC_LT); // Send KC_DQUO on tap
                return false;      // Return false to ignore further processing of key
            }
            break;
    }
    return true;
}

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
