/* Copyright 2023 François Coppens <https://github.com/fmgjcoppens>.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

if (timer_elapsed(time) < delay) {
                rgb_matrix_set_color(i3_leds[0], RGB_RB_1);
            } else
            if (timer_elapsed(time) < 2 * delay) {
                rgb_matrix_set_color(i3_leds[0], RGB_RB_1);
                rgb_matrix_set_color(i3_leds[1], RGB_RB_2);
            } else
            if (timer_elapsed(time) < 3 * delay) {
                rgb_matrix_set_color(i3_leds[0], RGB_RB_1);
                rgb_matrix_set_color(i3_leds[1], RGB_RB_2);
                rgb_matrix_set_color(i3_leds[2], RGB_RB_3);
            } else
            if (timer_elapsed(time) < 4 * delay) {
                rgb_matrix_set_color(i3_leds[0], RGB_RB_1);
                rgb_matrix_set_color(i3_leds[1], RGB_RB_2);
                rgb_matrix_set_color(i3_leds[2], RGB_RB_3);
                rgb_matrix_set_color(i3_leds[3], RGB_RB_4);
            } else
            if (timer_elapsed(time) < 5 * delay) {
                rgb_matrix_set_color(i3_leds[0], RGB_RB_1);
                rgb_matrix_set_color(i3_leds[1], RGB_RB_2);
                rgb_matrix_set_color(i3_leds[2], RGB_RB_3);
                rgb_matrix_set_color(i3_leds[3], RGB_RB_4);
                rgb_matrix_set_color(i3_leds[4], RGB_RB_5);
            } else
            if (timer_elapsed(time) < 6 * delay) {
                rgb_matrix_set_color(i3_leds[0], RGB_RB_1);
                rgb_matrix_set_color(i3_leds[1], RGB_RB_2);
                rgb_matrix_set_color(i3_leds[2], RGB_RB_3);
                rgb_matrix_set_color(i3_leds[3], RGB_RB_4);
                rgb_matrix_set_color(i3_leds[4], RGB_RB_5);
                rgb_matrix_set_color(i3_leds[5], RGB_RB_6);
            } else
            if (timer_elapsed(time) < 7 * delay) {
                rgb_matrix_set_color(i3_leds[0], RGB_RB_1);
                rgb_matrix_set_color(i3_leds[1], RGB_RB_2);
                rgb_matrix_set_color(i3_leds[2], RGB_RB_3);
                rgb_matrix_set_color(i3_leds[3], RGB_RB_4);
                rgb_matrix_set_color(i3_leds[4], RGB_RB_5);
                rgb_matrix_set_color(i3_leds[5], RGB_RB_6);
                rgb_matrix_set_color(i3_leds[6], RGB_RB_7);
            } else
            if (timer_elapsed(time) < 8 * delay) {
                rgb_matrix_set_color(i3_leds[0], RGB_RB_1);
                rgb_matrix_set_color(i3_leds[1], RGB_RB_2);
                rgb_matrix_set_color(i3_leds[2], RGB_RB_3);
                rgb_matrix_set_color(i3_leds[3], RGB_RB_4);
                rgb_matrix_set_color(i3_leds[4], RGB_RB_5);
                rgb_matrix_set_color(i3_leds[5], RGB_RB_6);
                rgb_matrix_set_color(i3_leds[6], RGB_RB_7);
                rgb_matrix_set_color(i3_leds[7], RGB_RB_8);
            } else
            if (timer_elapsed(time) < 9 * delay) {
                rgb_matrix_set_color(i3_leds[0], RGB_OFF);
                rgb_matrix_set_color(i3_leds[1], RGB_RB_2);
                rgb_matrix_set_color(i3_leds[2], RGB_RB_3);
                rgb_matrix_set_color(i3_leds[3], RGB_RB_4);
                rgb_matrix_set_color(i3_leds[4], RGB_RB_5);
                rgb_matrix_set_color(i3_leds[5], RGB_RB_6);
                rgb_matrix_set_color(i3_leds[6], RGB_RB_7);
                rgb_matrix_set_color(i3_leds[7], RGB_RB_8);
            } else
            if (timer_elapsed(time) < 10 * delay) {
                rgb_matrix_set_color(i3_leds[0], RGB_OFF);
                rgb_matrix_set_color(i3_leds[1], RGB_OFF);
                rgb_matrix_set_color(i3_leds[2], RGB_RB_3);
                rgb_matrix_set_color(i3_leds[3], RGB_RB_4);
                rgb_matrix_set_color(i3_leds[4], RGB_RB_5);
                rgb_matrix_set_color(i3_leds[5], RGB_RB_6);
                rgb_matrix_set_color(i3_leds[6], RGB_RB_7);
                rgb_matrix_set_color(i3_leds[7], RGB_RB_8);
            } else
            if (timer_elapsed(time) < 11 * delay) {
                rgb_matrix_set_color(i3_leds[0], RGB_OFF);
                rgb_matrix_set_color(i3_leds[1], RGB_OFF);
                rgb_matrix_set_color(i3_leds[2], RGB_OFF);
                rgb_matrix_set_color(i3_leds[3], RGB_RB_4);
                rgb_matrix_set_color(i3_leds[4], RGB_RB_5);
                rgb_matrix_set_color(i3_leds[5], RGB_RB_6);
                rgb_matrix_set_color(i3_leds[6], RGB_RB_7);
                rgb_matrix_set_color(i3_leds[7], RGB_RB_8);
            } else
            if (timer_elapsed(time) < 12 * delay) {
                rgb_matrix_set_color(i3_leds[0], RGB_OFF);
                rgb_matrix_set_color(i3_leds[1], RGB_OFF);
                rgb_matrix_set_color(i3_leds[2], RGB_OFF);
                rgb_matrix_set_color(i3_leds[3], RGB_OFF);
                rgb_matrix_set_color(i3_leds[4], RGB_RB_5);
                rgb_matrix_set_color(i3_leds[5], RGB_RB_6);
                rgb_matrix_set_color(i3_leds[6], RGB_RB_7);
                rgb_matrix_set_color(i3_leds[7], RGB_RB_8);
            } else
            if (timer_elapsed(time) < 13 * delay) {
                rgb_matrix_set_color(i3_leds[0], RGB_OFF);
                rgb_matrix_set_color(i3_leds[1], RGB_OFF);
                rgb_matrix_set_color(i3_leds[2], RGB_OFF);
                rgb_matrix_set_color(i3_leds[3], RGB_OFF);
                rgb_matrix_set_color(i3_leds[4], RGB_OFF);
                rgb_matrix_set_color(i3_leds[5], RGB_RB_6);
                rgb_matrix_set_color(i3_leds[6], RGB_RB_7);
                rgb_matrix_set_color(i3_leds[7], RGB_RB_8);
            } else
            if (timer_elapsed(time) < 14 * delay) {
                rgb_matrix_set_color(i3_leds[0], RGB_OFF);
                rgb_matrix_set_color(i3_leds[1], RGB_OFF);
                rgb_matrix_set_color(i3_leds[2], RGB_OFF);
                rgb_matrix_set_color(i3_leds[3], RGB_OFF);
                rgb_matrix_set_color(i3_leds[4], RGB_OFF);
                rgb_matrix_set_color(i3_leds[5], RGB_OFF);
                rgb_matrix_set_color(i3_leds[6], RGB_RB_7);
                rgb_matrix_set_color(i3_leds[7], RGB_RB_8);
            } else
            if (timer_elapsed(time) < 15 * delay) {
                rgb_matrix_set_color(i3_leds[0], RGB_OFF);
                rgb_matrix_set_color(i3_leds[1], RGB_OFF);
                rgb_matrix_set_color(i3_leds[2], RGB_OFF);
                rgb_matrix_set_color(i3_leds[3], RGB_OFF);
                rgb_matrix_set_color(i3_leds[4], RGB_OFF);
                rgb_matrix_set_color(i3_leds[5], RGB_OFF);
                rgb_matrix_set_color(i3_leds[6], RGB_OFF);
                rgb_matrix_set_color(i3_leds[7], RGB_RB_8);
            } else
            if (timer_elapsed(time) < 16 * delay) {
                rgb_matrix_set_color(i3_leds[0], RGB_OFF);
                rgb_matrix_set_color(i3_leds[1], RGB_OFF);
                rgb_matrix_set_color(i3_leds[2], RGB_OFF);
                rgb_matrix_set_color(i3_leds[3], RGB_OFF);
                rgb_matrix_set_color(i3_leds[4], RGB_OFF);
                rgb_matrix_set_color(i3_leds[5], RGB_OFF);
                rgb_matrix_set_color(i3_leds[6], RGB_OFF);
                rgb_matrix_set_color(i3_leds[7], RGB_OFF);
            } else
            {
                time = timer_read();
            }
