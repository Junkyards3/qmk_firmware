// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later
#include QMK_KEYBOARD_H

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = LAYOUT(
KC_GRV,          KC_1,            KC_2,            KC_3,            KC_4,            KC_5,                                                               KC_6,            KC_7,            KC_8,            KC_9,            KC_0,            KC_GRV,
KC_NO,           KC_Q,            KC_W,            KC_E,            KC_R,            KC_T,                                                               KC_Y,            KC_U,            KC_I,            KC_O,            KC_P,            KC_LBRC,
KC_ESC,          LGUI_T(KC_A),    LALT_T(KC_S),    LCTL_T(KC_D),    LSFT_T(KC_F),    KC_G,                                                               KC_H,            RSFT_T(KC_J),    RCTL_T(KC_K),    LALT_T(KC_L),    RGUI_T(KC_SCLN), KC_QUOT,
KC_LSFT,         KC_Z,            KC_X,            KC_C,            KC_V,            KC_B,            TG(6),                            CW_TOGG,         KC_N,            KC_M,            KC_COMM,         KC_DOT,          KC_SLSH,         KC_RSFT,
                                  KC_LCTL,         LSFT(KC_TAB),    LT(5,KC_TAB),    LT(1,KC_SPC),    LT(2,KC_LT),                      LT(4,KC_PSLS),   LT(3,KC_BSPC),   KC_ENT,          LSFT(KC_ENT),    KC_RALT
),
    [1] = LAYOUT(
KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,                              KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_INS,  KC_HOME, CW_TOGG, KC_CAPS, KC_NO,   KC_NO,
KC_NO,   KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NO,                              KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_NO,   KC_NO,
KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,            KC_NO,   KC_DEL,  KC_PGDN, KC_PGUP, KC_PSCR, KC_NO,   KC_NO,
                  KC_NO,   KC_NO,   KC_NO,   KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_NO,   KC_NO,   KC_NO
),
    [2] = LAYOUT(
KC_NO,   KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                            KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_NO,
KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_PPLS, KC_AMPR, KC_ASTR, KC_LPRN, KC_PMNS, KC_NO,
KC_NO,   KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NO,                              KC_PEQL, KC_DLR,  KC_PERC, KC_CIRC, KC_PAST, KC_NO,
KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,            KC_NO,   KC_RPRN, KC_EXLM, KC_AT,   KC_HASH, KC_PSLS, KC_NO,
                  KC_NO,   KC_NO,   KC_NO,   KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_NO,   KC_RPRN, KC_NO
),
    [3] = LAYOUT(
KC_NO,         KC_NO,         KC_NO,         KC_NO,         KC_NO,         KC_NO,                                                      KC_NO,         KC_NO,         KC_NO,         KC_NO,         KC_NO,         KC_NO,
KC_NO,         KC_1,          RALT(KC_0),    KC_6,          KC_4,          KC_BSLS,                                                    KC_NO,         KC_NO,         KC_NO,         KC_NO,         KC_NO,         KC_NO,
KC_NO,         RALT(KC_3),    KC_RBRC,       KC_8,          KC_3,          RALT(KC_8),                                                 KC_NO,         KC_LSFT,       KC_LCTL,       KC_LALT,       KC_LGUI,       KC_NO,
KC_NO,         RALT(KC_2),    RALT(KC_9),    RALT(KC_6),    RALT(KC_7),    LSFT(KC_QUOT), KC_NO,                        KC_NO,         KC_NO,         KC_NO,         KC_NO,         KC_NO,         KC_NO,         KC_NO,
                              KC_NO,         KC_NO,         KC_NO,         KC_TRNS,       KC_TRNS,                      KC_TRNS,       KC_TRNS,       KC_NO,         KC_NO,         KC_NO
),
    [4] = LAYOUT(
KC_NO,         KC_NO,         KC_NO,         KC_NO,         KC_NO,         KC_NO,                                                      KC_NO,         KC_NO,         KC_NO,         KC_NO,         KC_NO,         KC_NO,
KC_NO,         KC_NO,         KC_NO,         RALT(KC_4),    RALT(KC_EQL),  KC_NO,                                                      KC_NO,         KC_NO,         KC_NO,         KC_NO,         KC_NO,         KC_NO,
KC_NO,         KC_BSLS,       LSFT(KC_BSLS), KC_5,          KC_MINS,       KC_NO,                                                      KC_NO,         KC_LSFT,       KC_LCTL,       KC_LALT,       KC_LGUI,       KC_NO,
KC_NO,         KC_NO,         KC_NO,         RALT(KC_5),    RALT(KC_MINS), KC_NO,         KC_NO,                        KC_NO,         KC_NO,         KC_NO,         KC_NO,         KC_NO,         KC_NO,         KC_NO,
                              KC_NO,         KC_NO,         KC_NO,         KC_TRNS,       KC_TRNS,                      KC_TRNS,       KC_TRNS,       KC_NO,         KC_NO,         KC_NO
),
    [5] = LAYOUT(
KC_NO,   KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                            KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_NO,
KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_PPLS, KC_7,    KC_8,    KC_9,    KC_PMNS, KC_NO,
KC_NO,   KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NO,                              KC_PEQL, KC_4,    KC_5,    KC_6,    KC_PAST, KC_NO,
KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,            KC_NO,   KC_0,    KC_1,    KC_2,    KC_3,    KC_PSLS, KC_NO,
                  KC_NO,   KC_NO,   KC_NO,   KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_NO,   KC_0,    KC_NO
),
    [6] = LAYOUT(
KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
KC_NO,   MS_WHLL, MS_WHLR, MS_UP,   KC_NO,   MS_WHLU,                            MS_WHLU, KC_NO,   MS_UP,   MS_WHLL, MS_WHLR, KC_NO,
KC_NO,   KC_NO,   MS_LEFT, MS_DOWN, MS_RGHT, MS_WHLD,                            MS_WHLD, MS_LEFT, MS_DOWN, MS_RGHT, KC_NO,   KC_NO,
KC_NO,   KC_NO,   MS_BTN1, MS_BTN2, MS_BTN3, KC_NO,   KC_TRNS,          KC_NO,   KC_NO,   MS_BTN1, MS_BTN2, MS_BTN3, KC_NO,   KC_NO,
                  KC_NO,   KC_NO,   KC_NO,   KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, MS_ACL0, MS_ACL1, MS_ACL2
)
};
const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM =
    LAYOUT(
  'L' , 'L',  'L' ,  'L' , 'L', 'L',                     'R', 'R', 'R', 'R', 'R', 'R',
  'L'  , 'L','L','L','L','L',                     'R', 'R', 'R', 'R', 'R', 'R',
  'L' , 'L','L', 'L',    'L',  'L',                     'R', 'R', 'R', 'R', 'R', 'R',
  'L' , 'L', 'L', 'L',    'L',  'L', '*',     '*', 'R', 'R', 'R', 'R', 'R', 'R',
                   '*', '*', '*', '*', '*',     '*', '*', '*', '*', '*'
);
// clang-format on

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

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    return OLED_ROTATION_270;
}

bool oled_task_user(void) {
    // Host Keyboard Layer Status

    if (is_keyboard_master()) {
        switch (get_highest_layer(layer_state)) {
            case 6:
                oled_write_ln_P(PSTR("MOUSE"), false);
                break;
            case 5:
                oled_write_ln_P(PSTR("HYPR"), false);
                break;
            case 4:
                oled_write_ln_P(PSTR("PAIRS"), false);
                break;
            case 3:
                oled_write_ln_P(PSTR("SPEC"), false);
                break;
            case 2:
                oled_write_ln_P(PSTR("NUM"), false);
                break;
            case 1:
                oled_write_ln_P(PSTR("NAV"), false);
                break;
            case 0:
                oled_write_ln_P(PSTR("BASE"), false);
                break;
            default:
                oled_write_ln_P(PSTR("UNDFND"), false);
        }
        // Host Keyboard LED Status
        oled_write_ln_P(PSTR(""), false);
        led_t led_state = host_keyboard_led_state();
        oled_write_ln_P(led_state.num_lock ? PSTR("NUM") : PSTR(""), false);
        oled_write_ln_P(led_state.caps_lock ? PSTR("CAP") : PSTR(""), false);
        oled_write_ln_P(is_caps_word_on() ? PSTR("CW") : PSTR(""), false);
        oled_write_ln_P(led_state.scroll_lock ? PSTR("SCR") : PSTR(""), false);

        return false;
    } else {
        oled_write_ln_P(get_mods() & MOD_MASK_GUI ? PSTR("GUI") : PSTR(""), false);
        oled_write_ln_P(get_mods() & MOD_MASK_ALT ? PSTR("ALT") : PSTR(""), false);
        oled_write_ln_P(get_mods() & MOD_MASK_CTRL ? PSTR("CTRL") : PSTR(""), false);
        oled_write_ln_P(get_mods() & MOD_MASK_SHIFT ? PSTR("SHIFT") : PSTR(""), false);
        return false;
    }
}
