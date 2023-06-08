#include QMK_KEYBOARD_H

#include "led_groups.h"
#include "unicode_map.h"
#include "colors.h"

enum custom_keycodes {
    M_EML = SAFE_RANGE
};

enum layers {
    BL, // 0: Base layer US/QWERTY
    CL, // 1: Control layer + unicode characters ç,Ç, œ,Œ, €
    AL, // 2: Unicode layer for ACUTE (') accents
    GL, // 3: Unicode layer for GRAVE (`) accents
    PL, // 4: Unicode layer for CIRCUMFLEX (^) accents
    TL  // 5: Unicode layer for TREMA (") accents
};

bool KC_LGUI_pressed = false;
// bool KC_LSFT_pressed = false;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch(keycode) {
        case M_EML:
            if (record->event.pressed) {
                SEND_STRING("mail@fmgjcoppens.nl");
            }
            break;
        case KC_LGUI:
            if (record->event.pressed) {
                KC_LGUI_pressed = true;
            }
            else {
                KC_LGUI_pressed = false;
            }
            break;
        // case KC_LSFT:
        //     if (record->event.pressed) {
        //         KC_LSFT_pressed = true;
        //     }
        //     else {
        //         KC_LSFT_pressed = false;
        //     }
        //     break;    
    }
    return true;
}

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [BL] = LAYOUT(
        KC_ESC,     KC_F1,      KC_F2,      KC_F3,  KC_F4,          KC_F5,      KC_F6,      KC_F7,          KC_F8,          KC_F9,          KC_F10,     KC_F11,     KC_F12,     KC_DEL,                 KC_MUTE,
        KC_GRV,     KC_1,       KC_2,       KC_3,   KC_4,           KC_5,       KC_6,       KC_7,           KC_8,           KC_9,           KC_0,       KC_MINS,    KC_EQL,     KC_BSPC,                KC_HOME,
        KC_TAB,     KC_Q,       KC_W,       KC_E,   KC_R,           KC_T,       KC_Y,       KC_U,           KC_I,           KC_O,           KC_P,       KC_LBRC,    KC_RBRC,    KC_BSLS,                KC_PGUP,
        KC_CAPS,    KC_A,       KC_S,       KC_D,   LT(AL,KC_F),    KC_G,       KC_H,       LT(GL,KC_J),    LT(PL,KC_K),    LT(TL,KC_L),    KC_SCLN,    KC_QUOT,                KC_ENT,                 KC_PGDN,
        KC_LSFT,                KC_Z,       KC_X,   KC_C,           KC_V,       KC_B,       KC_N,           KC_M,           KC_COMM,        KC_DOT,     KC_SLSH,                KC_RSFT,    KC_UP,      KC_END,
        KC_LCTL,    KC_LALT,    KC_LGUI,                                        KC_SPC,                                                     MO(CL),     KC_RALT,    KC_RCTL,    KC_LEFT,    KC_DOWN,    KC_RGHT
    ),

    [CL] = LAYOUT(
        RGB_TOG,    RGB_HUD,    RGB_HUI,    RGB_SAD,    RGB_SAI,                RGB_VAD,    RGB_VAI,    _______,    _______,    NK_TOGG,                KC_MPRV,    KC_MPLY,    KC_MNXT,    _______,                _______,
        _______,    _______,    M_EML,      _______,    X(EUROSGN),             _______,    _______,    _______,    _______,    _______,                _______,    _______,    _______,    _______,                _______,
        _______,    _______,    _______,    _______,    _______,                _______,    _______,    _______,    _______,    XP(L_OELIG,U_OELIG),    _______,    _______,    _______,    QK_BOOT,                _______,
        _______,    _______,    _______,    _______,    _______,                _______,    _______,    _______,    _______,    _______,                _______,    _______,                _______,                _______,
        _______,                _______,    _______,    XP(LC_CDIL,UC_CDIL),    _______,    _______,    _______,    _______,    _______,                _______,    _______,                _______,    RGB_MOD,    _______,
        _______,    _______,    _______,                                                    _______,                                                    _______,    _______,    _______,    RGB_SPD,    RGB_RMOD,   RGB_SPI
    ),

	[AL] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, XP(LE_ACUT,UE_ACUT), _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    ),

	[GL] = LAYOUT(
        _______, _______, _______, _______,_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______,_______, _______, XP(LE_GRAV,UE_GRAV), _______, _______, _______, XP(LU_GRAV,UU_GRAV), _______, _______, _______, _______, _______, _______, _______,
        _______, XP(LA_GRAV,UA_GRAV), _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    ),

	[PL] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, XP(LE_CIRC,UE_CIRC), _______, _______, _______, XP(LU_CIRC,UU_CIRC), XP(LI_CIRC,UI_CIRC), XP(LO_CIRC,UO_CIRC), _______, _______, _______, _______, _______,
        _______, XP(LA_CIRC,UA_CIRC), _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    ),

	[TL] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, XP(LE_TREM, UE_TREM), _______, _______, _______, XP(LU_TREM, UU_TREM), XP(LI_TREM, UI_TREM), _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    )
};
// clang-format on

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [BL] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [CL] = { ENCODER_CCW_CW(_______, _______) },
    [AL] = { ENCODER_CCW_CW(_______, _______) },
    [GL] = { ENCODER_CCW_CW(_______, _______) },
    [PL] = { ENCODER_CCW_CW(_______, _______) },
    [TL] = { ENCODER_CCW_CW(_______, _______) }
};
#endif

///////// Set RGB Matrix colors /////////

// Set colors only on the layer-modifier keys and the keys they affect
bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {

    // Set default RGB colors for all layers: GOLD sidelights and faint GOLD keylights
    for (uint8_t led = led_min; led < led_max; ++led) {
        if (g_led_config.flags[led] & LED_FLAG_UNDERGLOW)
            rgb_matrix_set_color(led, RGB_GOLD);
    }

    // Set color of ALPHA LEDs to BLUE when CAPSLOCK is ON
    if (host_keyboard_led_state().caps_lock) {
        for (uint8_t led = 0; led < ALPHA_LEDS; ++led) {
            rgb_matrix_set_color(alpha_leds[led], RGB_CAPSL);
        }
        rgb_matrix_set_color(3, RGB_CAPSL);
    }

    // Set color of i3 modifier LEDs to WHITE when i3 MOD is ON
    if (KC_LGUI_pressed) {
    // if (KC_LGUI_pressed && KC_LSFT_pressed) {
        rgb_matrix_set_color(i3_leds[0], RGB_RB_1);
        rgb_matrix_set_color(i3_leds[1], RGB_RB_2);
        rgb_matrix_set_color(i3_leds[2], RGB_RB_3);
        rgb_matrix_set_color(i3_leds[3], RGB_RB_4);
        rgb_matrix_set_color(i3_leds[4], RGB_RB_5);
        rgb_matrix_set_color(i3_leds[5], RGB_RB_6);
        rgb_matrix_set_color(i3_leds[6], RGB_RB_7);
        rgb_matrix_set_color(i3_leds[7], RGB_RB_8);
        for (uint8_t led = 8; led < I3_LEDS; ++led) {
            rgb_matrix_set_color(i3_leds[led], RGB_I3);
        }
    }

    // Set color of KEY LEDs based on the active layer
    switch(get_highest_layer(layer_state|default_layer_state)) {
        case 5:
            for (uint8_t led = 0; led < TL_LEDS; ++led) {
                rgb_matrix_set_color(TL_leds[led], RGB_LAYER);
            }
            break;
        case 4:
            for (uint8_t led = 0; led < PL_LEDS; ++led) {
                rgb_matrix_set_color(PL_leds[led], RGB_LAYER);
            }
            break;
        case 3:
            for (uint8_t led = 0; led < GL_LEDS; ++led) {
                rgb_matrix_set_color(GL_leds[led], RGB_LAYER);
            }
            break;
        case 2:
            for (uint8_t led = 0; led < AL_LEDS; ++led) {
                rgb_matrix_set_color(AL_leds[led], RGB_LAYER);
            }
            break;
        case 1:
            for (uint8_t led = 0; led < CL_LEDS; ++led) {
                rgb_matrix_set_color(CL_leds[led], RGB_LAYER);
            }
            break;
        default:
            break;
    }

    return false;
}

// Set RGB Matrix default effect and color
void keyboard_post_init_user(void) {
    rgb_matrix_mode(RGB_MATRIX_SOLID_COLOR);
    rgb_matrix_sethsv(HSV_GOLD_25);
}
