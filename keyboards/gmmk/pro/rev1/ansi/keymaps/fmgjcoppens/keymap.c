#include QMK_KEYBOARD_H

#include "led_groups.h"
#include "unicode_map.h"
#include "colors.h"

#ifdef ENABLE_TEST_CODE
#include "print.h"
#endif // ENABLE_TEST_CODE

enum custom_keycodes {
    M_EMAIL = SAFE_RANGE,
    M_PHONE
};

enum layers {
    _BL, // 0: Base layer US/QWERTY
    _CL, // 1: Control layer + unicode characters ç,Ç, œ,Œ, €
    _AL, // 2: Unicode layer for ACUTE (') accents
    _GL, // 3: Unicode layer for GRAVE (`) accents
    _PL, // 4: Unicode layer for CIRCUMFLEX (^) accents
    _TL  // 5: Unicode layer for TREMA (") accents
};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BL] = LAYOUT(
        KC_ESC,     KC_F1,      KC_F2,      KC_F3,  KC_F4,          KC_F5,      KC_F6,      KC_F7,          KC_F8,          KC_F9,          KC_F10,     KC_F11,     KC_F12,     KC_DEL,                 KC_MUTE,
        KC_GRV,     KC_1,       KC_2,       KC_3,   KC_4,           KC_5,       KC_6,       KC_7,           KC_8,           KC_9,           KC_0,       KC_MINS,    KC_EQL,     KC_BSPC,                KC_HOME,
        KC_TAB,     KC_Q,       KC_W,       KC_E,   KC_R,           KC_T,       KC_Y,       KC_U,           KC_I,           KC_O,           KC_P,       KC_LBRC,    KC_RBRC,    KC_BSLS,                KC_PGUP,
        KC_CAPS,    KC_A,       KC_S,       KC_D,   LT(_AL,KC_F),   KC_G,       KC_H,       LT(_GL,KC_J),   LT(_PL,KC_K),   LT(_TL,KC_L),   KC_SCLN,    KC_QUOT,                KC_ENT,                 KC_PGDN,
        KC_LSFT,                KC_Z,       KC_X,   KC_C,           KC_V,       KC_B,       KC_N,           KC_M,           KC_COMM,        KC_DOT,     KC_SLSH,                KC_RSFT,    KC_UP,      KC_END,
        KC_LCTL,    KC_LALT,    KC_LGUI,                                        KC_SPC,                                                     MO(_CL),    KC_RALT,    KC_RCTL,    KC_LEFT,    KC_DOWN,    KC_RGHT
    ),

    [_CL] = LAYOUT(
        RGB_TOG,    RGB_HUD,    RGB_HUI,    RGB_SAD,    RGB_SAI,                RGB_VAD,    RGB_VAI,    _______,    _______,    NK_TOGG,                KC_MPRV,    KC_MPLY,    KC_MNXT,    _______,                _______,
        _______,    _______,    M_EMAIL,    _______,    X(EUROSGN),             _______,    _______,    _______,    _______,    _______,                _______,    _______,    _______,    _______,                _______,
        _______,    _______,    _______,    _______,    _______,                _______,    _______,    _______,    _______,    XP(L_OELIG,U_OELIG),    M_PHONE,    _______,    _______,    QK_BOOT,                _______,
        _______,    _______,    _______,    _______,    _______,                _______,    _______,    _______,    _______,    _______,                _______,    _______,                _______,                _______,
        _______,                _______,    _______,    XP(LC_CDIL,UC_CDIL),    _______,    _______,    _______,    _______,    _______,                _______,    _______,                _______,    RGB_MOD,    _______,
        _______,    _______,    _______,                                                    _______,                                                    _______,    _______,    _______,    RGB_SPD,    RGB_RMOD,   RGB_SPI
    ),

	[_AL] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, XP(LE_ACUT,UE_ACUT), _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    ),

	[_GL] = LAYOUT(
        _______, _______, _______, _______,_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______,_______, _______, XP(LE_GRAV,UE_GRAV), _______, _______, _______, XP(LU_GRAV,UU_GRAV), _______, _______, _______, _______, _______, _______, _______,
        _______, XP(LA_GRAV,UA_GRAV), _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    ),

	[_PL] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, XP(LE_CIRC,UE_CIRC), _______, _______, _______, XP(LU_CIRC,UU_CIRC), XP(LI_CIRC,UI_CIRC), XP(LO_CIRC,UO_CIRC), _______, _______, _______, _______, _______,
        _______, XP(LA_CIRC,UA_CIRC), _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    ),

	[_TL] = LAYOUT(
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
    [_BL] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [_CL] = { ENCODER_CCW_CW(_______, _______) },
    [_AL] = { ENCODER_CCW_CW(_______, _______) },
    [_GL] = { ENCODER_CCW_CW(_______, _______) },
    [_PL] = { ENCODER_CCW_CW(_______, _______) },
    [_TL] = { ENCODER_CCW_CW(_______, _______) }
};
#endif

///////// Add/modify key-press events /////////
bool lgui_pressed = false;
bool lsft_pressed = false;
bool lctl_pressed = false;
bool grv_pressed  = false;

static uint16_t time;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    const uint8_t mods = get_mods();
    switch(keycode) {
        case M_EMAIL:
            if (record->event.pressed) {
                if (mods & MOD_MASK_SHIFT) {
                    unregister_mods(MOD_MASK_SHIFT);
                    SEND_STRING("francois.coppens@irsamc.ups-tlse.fr");
                    register_mods(mods);
                }
                else {
                    SEND_STRING("mail@fmgjcoppens.nl");
                }
            }
            break;
        case M_PHONE:
            if (record->event.pressed) {
                if (mods & MOD_MASK_SHIFT) {
                    unregister_mods(MOD_MASK_SHIFT);
                    SEND_STRING("+33783417748");
                    register_mods(mods);
                }
                else {
                    SEND_STRING("+33 (0)7 83 41 77 48");
                }
            }
            break;
        case KC_LGUI:
            if (record->event.pressed) {
                lgui_pressed = true;
                time = record->event.time;
            }
            else {
                lgui_pressed = false;
            }
            break;
        case KC_LSFT:
            if (record->event.pressed) {
                lsft_pressed = true;
            }
            else {
                lsft_pressed = false;
            }
            break;    
        case KC_LCTL:
            if (record->event.pressed) {
                lctl_pressed = true;
            }
            else {
                lctl_pressed = false;
            }
            break;
#ifdef ENABLE_TEST_CODE
        case KC_GRV: // My 'test'-key
            if (record->event.pressed) {
                grv_pressed = true;
                time = record->event.time;
            }
            else {
                grv_pressed = false;
            }
            break;
#endif // ENABLE_TEST_CODE
    }
    return true;
}

///////// Set RGB Matrix colors /////////

// Set colors only on the layer-modifier keys and the keys they affect
bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {

#ifdef ENABLE_TEST_CODE
    // A safe test area that only activates if the test-key 'KC_GRV' is pressed.
    // This prevents bricking the board and having to open it up to press the
    // hardware boot-mode button like I did this morning, by activating a never
    // ending while loop on the base layer ;-)
    if (grv_pressed) {
       // test code here
    }
#endif // ENABLE_TEST_CODE

    // Set default RGB colors for all layers: GOLD sidelights
    for (uint8_t led = led_min; led < led_max; ++led) {
        if (g_led_config.flags[led] & LED_FLAG_UNDERGLOW)
            rgb_matrix_set_color(led, RGB_GOLD);
    }

    // Set color of ALPHA LEDs when CAPSLOCK is PRESSED
    if (host_keyboard_led_state().caps_lock) {
        for (uint8_t led = 0; led < ALPHA_LEDS; ++led) {
            rgb_matrix_set_color(alpha_leds[led], RGB_CAPSL);
        }
        rgb_matrix_set_color(3, RGB_CAPSL);
    }

    // Set color of i3 modifier LEDs when i3 MODs are PRESSED
    if (lgui_pressed) { // LGUI pressed
        static const uint16_t delay = 75;
        if (lsft_pressed && lctl_pressed) { // LGUI + LSFT + LCTRL pressed
            // do nothing
        }
        else if (lsft_pressed) { // LGUI + LSFT pressed
            #include "anim/i3_ws_anim_breathe.c"
        
            rgb_matrix_set_color(i3_leds[12], RGB_I3);
            rgb_matrix_set_color(i3_leds[13], RGB_I3);
            rgb_matrix_set_color(i3_leds[14], RGB_I3);
            rgb_matrix_set_color(i3_leds[11], RGB_I3);
            rgb_matrix_set_color(i3_leds[15], RGB_I3);

            rgb_matrix_set_color(i3_leds[21], RGB_I3);
            rgb_matrix_set_color(i3_leds[24], RGB_I3);
            rgb_matrix_set_color(i3_leds[22], RGB_I3);
            rgb_matrix_set_color(i3_leds[23], RGB_I3);

            rgb_matrix_set_color(i3_leds[18], RGB_I3);
            rgb_matrix_set_color(i3_leds[16], RGB_I3);
        }
        else if (lctl_pressed) { // LGUI + LCTL pressed
            rgb_matrix_set_color(i3_leds[21], RGB_I3);
            rgb_matrix_set_color(i3_leds[24], RGB_I3);
            rgb_matrix_set_color(i3_leds[22], RGB_I3);
            rgb_matrix_set_color(i3_leds[23], RGB_I3);

            rgb_matrix_set_color(i3_leds[18], RGB_I3);
            rgb_matrix_set_color(i3_leds[17], RGB_I3);
        }
        else { // only LGUI pressed
            #include "anim/i3_ws_anim_breathe.c"

            rgb_matrix_set_color(i3_leds[8], RGB_I3);
            rgb_matrix_set_color(i3_leds[9], RGB_I3);
            rgb_matrix_set_color(i3_leds[10], RGB_I3);
            rgb_matrix_set_color(i3_leds[11], RGB_I3);

            rgb_matrix_set_color(i3_leds[20], RGB_I3);
            rgb_matrix_set_color(i3_leds[19], RGB_I3);
            rgb_matrix_set_color(i3_leds[21], RGB_I3);
            rgb_matrix_set_color(i3_leds[23], RGB_I3);

            rgb_matrix_set_color(i3_leds[18], RGB_I3);
        }
    }

    // Set color of layer modifier LEDs based on the active layer
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
    rgb_matrix_sethsv(HSV_GOLD_00);
#ifdef ENABLE_TEST_CODE
    debug_enable=true;
    debug_matrix=true;
#endif // ENABLE_TEST_CODE
}
