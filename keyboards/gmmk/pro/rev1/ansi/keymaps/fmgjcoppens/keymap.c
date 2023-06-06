#include QMK_KEYBOARD_H

#include "unicode_map.h"

enum layers {
    BL, // 0: Base layer US/QWERTY
    CL, // 1: Control layer + unicode characters ç,Ç, œ,Œ, €
    AL, // 2: Unicode layer for ACUTE (') accents
    GL, // 3: Unicode layer for GRAVE (`) accents
    PL, // 4: Unicode layer for CIRCUMFLEX (^) accents
    TL  // 5: Unicode layer for TREMA (") accents
};

// clang-format off
const uint8_t alpha_leds_s = 26;
const uint8_t alpha_leds[] = {
     8,14,20,25,30,36,41,46,52,58,
     9,15,21,26,31,37,42,47,53,
    10,16,22,27,32,38,43};
// clang-format on

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
        RGB_TOG,    RGB_HUD,    RGB_HUI,    RGB_SAD,    RGB_SAI,    RGB_VAD,    RGB_VAI,    _______,    _______,    NK_TOGG,                KC_MPRV,    KC_MPLY,    KC_MNXT,    _______,                _______,
        _______,    _______,    _______,    _______,    X(EUROSGN), _______,    _______,    _______,    _______,    _______,                _______,    _______,    _______,    _______,                _______,
        _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    XP(L_OELIG,U_OELIG),    _______,    _______,    _______,    QK_BOOT,                _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, XP(LC_CDIL, UC_CDIL), _______, _______, _______, _______, _______, _______, _______, _______, RGB_MOD, _______, _______, _______, _______, _______, _______, _______, _______, RGB_SPD, RGB_RMOD, RGB_SPI
    ),

	[AL] = LAYOUT(
                _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, XP(LE_ACUT,UE_ACUT), _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______),

	[GL] = LAYOUT(
                _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, XP(LE_GRAV,UE_GRAV), _______, _______, _______, XP(LU_GRAV,UU_GRAV), _______, _______, _______, _______, _______, _______, _______, _______, XP(LA_GRAV,UA_GRAV), _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______),

	[PL] = LAYOUT(
                _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, XP(LE_CIRC,UE_CIRC), _______, _______, _______, XP(LU_CIRC,UU_CIRC), XP(LI_CIRC,UI_CIRC), XP(LO_CIRC,UO_CIRC), _______, _______, _______, _______, _______, _______, XP(LA_CIRC,UA_CIRC), _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______),

	[TL] = LAYOUT(
                _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, XP(LE_TREM, UE_TREM), _______, _______, _______, XP(LU_TREM, UU_TREM), XP(LI_TREM, UI_TREM), _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______)
};
// clang-format on

// clang-format off
const uint8_t CL_leds_s = 19;
const uint8_t CL_leds[] = {
    0,6,12,18,23,28,34,50,56,61,66,
    24,52,93,22,94,95,97,79
};
// clang-format on

// clang-format off
const uint8_t AL_leds_s = 1;
const uint8_t AL_leds[] = {
    20
};
// clang-format on

// clang-format off
const uint8_t GL_leds_s = 3;
const uint8_t GL_leds[] = {
    20,41,9
};
// clang-format on

// clang-format off
const uint8_t PL_leds_s = 5;
const uint8_t PL_leds[] = {
    20,41,46,52,9
};
// clang-format on

// clang-format off
const uint8_t TL_leds_s = 3;
const uint8_t TL_leds[] = {
    20,41,46
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

// Set Matrix LEDs RGB colors
bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    // Set color of ALPHA LEDs to BLUE when CAPSLOCK is ON
    if (host_keyboard_led_state().caps_lock) {
        for (uint8_t led = 0; led < alpha_leds_s; ++led) {
            rgb_matrix_set_color(alpha_leds[led], RGB_BLUE);
        }
    }       

    // Set color of KEY LEDs based on the active layer
    switch(get_highest_layer(layer_state|default_layer_state)) {
        case 5:
            for (uint8_t led = 0; led < TL_leds_s; ++led) {
                rgb_matrix_set_color(TL_leds[led], RGB_MAGENTA);
            }
            break;
        case 4:
            for (uint8_t led = 0; led < PL_leds_s; ++led) {
                rgb_matrix_set_color(PL_leds[led], RGB_AZURE);
            }
            break;
        case 3:
            for (uint8_t led = 0; led < GL_leds_s; ++led) {
                rgb_matrix_set_color(GL_leds[led], RGB_GREEN);
            }
            break;
        case 2:
            for (uint8_t led = 0; led < AL_leds_s; ++led) {
                rgb_matrix_set_color(AL_leds[led], RGB_RED);
            }
            break;
        case 1:
            for (uint8_t led = 0; led < CL_leds_s; ++led) {
                rgb_matrix_set_color(CL_leds[led], RGB_CYAN);
            }
            break;
        default:
            break;
    }
    
    return false;
}





// // Set Matrix LEDs RGB colors
// bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max)
// {
//     // Loop over all matrix LEDs
//     for (uint8_t led = led_min; led < led_max; ++led) {

//         // Set color of KEY LEDs to AZURE when CAPSLOCK is ON
//         if (host_keyboard_led_state().caps_lock)
//         {
//             if (g_led_config.flags[led] & LED_FLAG_KEYLIGHT)
//                 rgb_matrix_set_color(led, RGB_AZURE);
//         }       

//         // Set color of KEY LEDs based on the active layer
//         switch(get_highest_layer(layer_state|default_layer_state)) {
//             case 5:
//                 if (g_led_config.flags[led] & LED_FLAG_KEYLIGHT)
//                     rgb_matrix_set_color(led, RGB_MAGENTA);
//                 break;
//             case 4:
//                 if (g_led_config.flags[led] & LED_FLAG_KEYLIGHT)
//                     rgb_matrix_set_color(led, RGB_BLUE);
//                 break;
//             case 3:
//                 if (g_led_config.flags[led] & LED_FLAG_KEYLIGHT)
//                     rgb_matrix_set_color(led, RGB_GREEN);
//                 break;
//             case 2:
//                 if (g_led_config.flags[led] & LED_FLAG_KEYLIGHT)
//                     rgb_matrix_set_color(led, RGB_CYAN);
//                 break;
//             case 1:
//                 if (g_led_config.flags[led] & LED_FLAG_KEYLIGHT)
//                     rgb_matrix_set_color(led, RGB_RED);
//                 break;
//             default:
//                 break;
//         }
//     }
    
//     return false;
// }
