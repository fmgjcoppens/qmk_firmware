// // Set colors only on ALL keys
// bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {

//     // // Set color of ALPHA LEDs to BLUE when CAPSLOCK is ON
//     // if (host_keyboard_led_state().caps_lock) {
//     //     for (uint8_t led = led_min; led < led_max; ++led) {
//     //         if (g_led_config.flags[led] & LED_FLAG_KEYLIGHT)
//     //             rgb_matrix_set_color(led, RGB_CYAN);
//     //     }
//     // }

//     // Set color of ALPHA LEDs to BLUE when CAPSLOCK is ON
//     if (host_keyboard_led_state().caps_lock) {
//         for (uint8_t led = 0; led < alpha_leds_s; ++led) {
//             rgb_matrix_set_color(alpha_leds[led], RGB_CYAN);
//         }
//         rgb_matrix_set_color(3, RGB_CYAN);
//     }

//     // Set color of KEY LEDs based on the active layer
//     switch(get_highest_layer(layer_state|default_layer_state)) {
//         case 5:
//             for (uint8_t led = led_min; led < led_max; ++led) {
//                 if (g_led_config.flags[led] & LED_FLAG_KEYLIGHT)
//                     rgb_matrix_set_color(led, RGB_MAGENTA);
//             }
//             break;
//         case 4:
//             for (uint8_t led = led_min; led < led_max; ++led) {
//                 if (g_led_config.flags[led] & LED_FLAG_KEYLIGHT)
//                     rgb_matrix_set_color(led, RGB_PURPLE);
//             }
//             break;
//         case 3:
//             for (uint8_t led = led_min; led < led_max; ++led) {
//                 if (g_led_config.flags[led] & LED_FLAG_KEYLIGHT)
//                     rgb_matrix_set_color(led, RGB_GREEN);
//             }
//             break;
//         case 2:
//             for (uint8_t led = led_min; led < led_max; ++led) {
//                 if (g_led_config.flags[led] & LED_FLAG_KEYLIGHT)
//                     rgb_matrix_set_color(led, RGB_RED);
//             }
//             break;
//         case 1:
//             for (uint8_t led = led_min; led < led_max; ++led) {
//                 if (g_led_config.flags[led] & LED_FLAG_KEYLIGHT)
//                     rgb_matrix_set_color(led, RGB_BLUE);
//             }
//             break;
//         default:
//             break;
//     }

//     return false;
// }
