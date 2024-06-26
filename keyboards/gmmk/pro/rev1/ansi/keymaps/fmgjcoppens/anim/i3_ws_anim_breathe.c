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

if (timer_elapsed(g_time) < delay) {
    rgb_matrix_set_color(i3_leds[0],        RGB_RED);
    rgb_matrix_set_color(i3_leds[1],     RGB_ORANGE);
    rgb_matrix_set_color(i3_leds[2],     RGB_YELLOW);
    rgb_matrix_set_color(i3_leds[3],      RGB_GREEN);
    rgb_matrix_set_color(i3_leds[4],       RGB_CYAN);
    rgb_matrix_set_color(i3_leds[5],       RGB_BLUE);
    rgb_matrix_set_color(i3_leds[6],     RGB_PURPLE);
    rgb_matrix_set_color(i3_leds[7],    RGB_MAGENTA);
} else
if (timer_elapsed(g_time) < 2 * delay) {
    rgb_matrix_set_color(i3_leds[0],     RGB_RED_90);
    rgb_matrix_set_color(i3_leds[1],  RGB_ORANGE_90);
    rgb_matrix_set_color(i3_leds[2],  RGB_YELLOW_90);
    rgb_matrix_set_color(i3_leds[3],   RGB_GREEN_90);
    rgb_matrix_set_color(i3_leds[4],    RGB_CYAN_90);
    rgb_matrix_set_color(i3_leds[5],    RGB_BLUE_90);
    rgb_matrix_set_color(i3_leds[6],  RGB_PURPLE_90);
    rgb_matrix_set_color(i3_leds[7], RGB_MAGENTA_90);
} else
if (timer_elapsed(g_time) < 3 * delay) {
    rgb_matrix_set_color(i3_leds[0],     RGB_RED_80);
    rgb_matrix_set_color(i3_leds[1],  RGB_ORANGE_80);
    rgb_matrix_set_color(i3_leds[2],  RGB_YELLOW_80);
    rgb_matrix_set_color(i3_leds[3],   RGB_GREEN_80);
    rgb_matrix_set_color(i3_leds[4],    RGB_CYAN_80);
    rgb_matrix_set_color(i3_leds[5],    RGB_BLUE_80);
    rgb_matrix_set_color(i3_leds[6],  RGB_PURPLE_80);
    rgb_matrix_set_color(i3_leds[7], RGB_MAGENTA_80);
} else
if (timer_elapsed(g_time) < 4 * delay) {
    rgb_matrix_set_color(i3_leds[0],     RGB_RED_70);
    rgb_matrix_set_color(i3_leds[1],  RGB_ORANGE_70);
    rgb_matrix_set_color(i3_leds[2],  RGB_YELLOW_70);
    rgb_matrix_set_color(i3_leds[3],   RGB_GREEN_70);
    rgb_matrix_set_color(i3_leds[4],    RGB_CYAN_70);
    rgb_matrix_set_color(i3_leds[5],    RGB_BLUE_70);
    rgb_matrix_set_color(i3_leds[6],  RGB_PURPLE_70);
    rgb_matrix_set_color(i3_leds[7], RGB_MAGENTA_70);
} else
if (timer_elapsed(g_time) < 5 * delay) {
    rgb_matrix_set_color(i3_leds[0],     RGB_RED_60);
    rgb_matrix_set_color(i3_leds[1],  RGB_ORANGE_60);
    rgb_matrix_set_color(i3_leds[2],  RGB_YELLOW_60);
    rgb_matrix_set_color(i3_leds[3],   RGB_GREEN_60);
    rgb_matrix_set_color(i3_leds[4],    RGB_CYAN_60);
    rgb_matrix_set_color(i3_leds[5],    RGB_BLUE_60);
    rgb_matrix_set_color(i3_leds[6],  RGB_PURPLE_60);
    rgb_matrix_set_color(i3_leds[7], RGB_MAGENTA_60);
} else
if (timer_elapsed(g_time) < 6 * delay) {
    rgb_matrix_set_color(i3_leds[0],     RGB_RED_50);
    rgb_matrix_set_color(i3_leds[1],  RGB_ORANGE_50);
    rgb_matrix_set_color(i3_leds[2],  RGB_YELLOW_50);
    rgb_matrix_set_color(i3_leds[3],   RGB_GREEN_50);
    rgb_matrix_set_color(i3_leds[4],    RGB_CYAN_50);
    rgb_matrix_set_color(i3_leds[5],    RGB_BLUE_50);
    rgb_matrix_set_color(i3_leds[6],  RGB_PURPLE_50);
    rgb_matrix_set_color(i3_leds[7], RGB_MAGENTA_50);
} else
if (timer_elapsed(g_time) < 7 * delay) {
    rgb_matrix_set_color(i3_leds[0],     RGB_RED_40);
    rgb_matrix_set_color(i3_leds[1],  RGB_ORANGE_40);
    rgb_matrix_set_color(i3_leds[2],  RGB_YELLOW_40);
    rgb_matrix_set_color(i3_leds[3],   RGB_GREEN_40);
    rgb_matrix_set_color(i3_leds[4],    RGB_CYAN_40);
    rgb_matrix_set_color(i3_leds[5],    RGB_BLUE_40);
    rgb_matrix_set_color(i3_leds[6],  RGB_PURPLE_40);
    rgb_matrix_set_color(i3_leds[7], RGB_MAGENTA_40);
} else
if (timer_elapsed(g_time) < 8 * delay) {
    rgb_matrix_set_color(i3_leds[0],     RGB_RED_30);
    rgb_matrix_set_color(i3_leds[1],  RGB_ORANGE_30);
    rgb_matrix_set_color(i3_leds[2],  RGB_YELLOW_30);
    rgb_matrix_set_color(i3_leds[3],   RGB_GREEN_30);
    rgb_matrix_set_color(i3_leds[4],    RGB_CYAN_30);
    rgb_matrix_set_color(i3_leds[5],    RGB_BLUE_30);
    rgb_matrix_set_color(i3_leds[6],  RGB_PURPLE_30);
    rgb_matrix_set_color(i3_leds[7], RGB_MAGENTA_30);
} else
if (timer_elapsed(g_time) < 9 * delay) {
    rgb_matrix_set_color(i3_leds[0],     RGB_RED_20);
    rgb_matrix_set_color(i3_leds[1],  RGB_ORANGE_20);
    rgb_matrix_set_color(i3_leds[2],  RGB_YELLOW_20);
    rgb_matrix_set_color(i3_leds[3],   RGB_GREEN_20);
    rgb_matrix_set_color(i3_leds[4],    RGB_CYAN_20);
    rgb_matrix_set_color(i3_leds[5],    RGB_BLUE_20);
    rgb_matrix_set_color(i3_leds[6],  RGB_PURPLE_20);
    rgb_matrix_set_color(i3_leds[7], RGB_MAGENTA_20);
} else
if (timer_elapsed(g_time) < 10 * delay) {
    rgb_matrix_set_color(i3_leds[0],     RGB_RED_10);
    rgb_matrix_set_color(i3_leds[1],  RGB_ORANGE_10);
    rgb_matrix_set_color(i3_leds[2],  RGB_YELLOW_10);
    rgb_matrix_set_color(i3_leds[3],   RGB_GREEN_10);
    rgb_matrix_set_color(i3_leds[4],    RGB_CYAN_10);
    rgb_matrix_set_color(i3_leds[5],    RGB_BLUE_10);
    rgb_matrix_set_color(i3_leds[6],  RGB_PURPLE_10);
    rgb_matrix_set_color(i3_leds[7], RGB_MAGENTA_10);
} else
if (timer_elapsed(g_time) < 11 * delay) {
    rgb_matrix_set_color(i3_leds[0],      RGB_RED_0);
    rgb_matrix_set_color(i3_leds[1],   RGB_ORANGE_0);
    rgb_matrix_set_color(i3_leds[2],   RGB_YELLOW_0);
    rgb_matrix_set_color(i3_leds[3],    RGB_GREEN_0);
    rgb_matrix_set_color(i3_leds[4],     RGB_CYAN_0);
    rgb_matrix_set_color(i3_leds[5],     RGB_BLUE_0);
    rgb_matrix_set_color(i3_leds[6],   RGB_PURPLE_0);
    rgb_matrix_set_color(i3_leds[7],  RGB_MAGENTA_0);
} else
if (timer_elapsed(g_time) < 12 * delay) {
    rgb_matrix_set_color(i3_leds[0],     RGB_RED_10);
    rgb_matrix_set_color(i3_leds[1],  RGB_ORANGE_10);
    rgb_matrix_set_color(i3_leds[2],  RGB_YELLOW_10);
    rgb_matrix_set_color(i3_leds[3],   RGB_GREEN_10);
    rgb_matrix_set_color(i3_leds[4],    RGB_CYAN_10);
    rgb_matrix_set_color(i3_leds[5],    RGB_BLUE_10);
    rgb_matrix_set_color(i3_leds[6],  RGB_PURPLE_10);
    rgb_matrix_set_color(i3_leds[7], RGB_MAGENTA_10);
} else
if (timer_elapsed(g_time) < 13 * delay) {
    rgb_matrix_set_color(i3_leds[0],     RGB_RED_20);
    rgb_matrix_set_color(i3_leds[1],  RGB_ORANGE_20);
    rgb_matrix_set_color(i3_leds[2],  RGB_YELLOW_20);
    rgb_matrix_set_color(i3_leds[3],   RGB_GREEN_20);
    rgb_matrix_set_color(i3_leds[4],    RGB_CYAN_20);
    rgb_matrix_set_color(i3_leds[5],    RGB_BLUE_20);
    rgb_matrix_set_color(i3_leds[6],  RGB_PURPLE_20);
    rgb_matrix_set_color(i3_leds[7], RGB_MAGENTA_20);
} else
if (timer_elapsed(g_time) < 14 * delay) {
    rgb_matrix_set_color(i3_leds[0],     RGB_RED_30);
    rgb_matrix_set_color(i3_leds[1],  RGB_ORANGE_30);
    rgb_matrix_set_color(i3_leds[2],  RGB_YELLOW_30);
    rgb_matrix_set_color(i3_leds[3],   RGB_GREEN_30);
    rgb_matrix_set_color(i3_leds[4],    RGB_CYAN_30);
    rgb_matrix_set_color(i3_leds[5],    RGB_BLUE_30);
    rgb_matrix_set_color(i3_leds[6],  RGB_PURPLE_30);
    rgb_matrix_set_color(i3_leds[7], RGB_MAGENTA_30);
} else
if (timer_elapsed(g_time) < 15 * delay) {
    rgb_matrix_set_color(i3_leds[0],     RGB_RED_40);
    rgb_matrix_set_color(i3_leds[1],  RGB_ORANGE_40);
    rgb_matrix_set_color(i3_leds[2],  RGB_YELLOW_40);
    rgb_matrix_set_color(i3_leds[3],   RGB_GREEN_40);
    rgb_matrix_set_color(i3_leds[4],    RGB_CYAN_40);
    rgb_matrix_set_color(i3_leds[5],    RGB_BLUE_40);
    rgb_matrix_set_color(i3_leds[6],  RGB_PURPLE_40);
    rgb_matrix_set_color(i3_leds[7], RGB_MAGENTA_40);
} else
if (timer_elapsed(g_time) < 16 * delay) {
    rgb_matrix_set_color(i3_leds[0],     RGB_RED_50);
    rgb_matrix_set_color(i3_leds[1],  RGB_ORANGE_50);
    rgb_matrix_set_color(i3_leds[2],  RGB_YELLOW_50);
    rgb_matrix_set_color(i3_leds[3],   RGB_GREEN_50);
    rgb_matrix_set_color(i3_leds[4],    RGB_CYAN_50);
    rgb_matrix_set_color(i3_leds[5],    RGB_BLUE_50);
    rgb_matrix_set_color(i3_leds[6],  RGB_PURPLE_50);
    rgb_matrix_set_color(i3_leds[7], RGB_MAGENTA_50);
} else
if (timer_elapsed(g_time) < 17 * delay) {
    rgb_matrix_set_color(i3_leds[0],     RGB_RED_60);
    rgb_matrix_set_color(i3_leds[1],  RGB_ORANGE_60);
    rgb_matrix_set_color(i3_leds[2],  RGB_YELLOW_60);
    rgb_matrix_set_color(i3_leds[3],   RGB_GREEN_60);
    rgb_matrix_set_color(i3_leds[4],    RGB_CYAN_60);
    rgb_matrix_set_color(i3_leds[5],    RGB_BLUE_60);
    rgb_matrix_set_color(i3_leds[6],  RGB_PURPLE_60);
    rgb_matrix_set_color(i3_leds[7], RGB_MAGENTA_60);
} else
if (timer_elapsed(g_time) < 18 * delay) {
    rgb_matrix_set_color(i3_leds[0],     RGB_RED_70);
    rgb_matrix_set_color(i3_leds[1],  RGB_ORANGE_70);
    rgb_matrix_set_color(i3_leds[2],  RGB_YELLOW_70);
    rgb_matrix_set_color(i3_leds[3],   RGB_GREEN_70);
    rgb_matrix_set_color(i3_leds[4],    RGB_CYAN_70);
    rgb_matrix_set_color(i3_leds[5],    RGB_BLUE_70);
    rgb_matrix_set_color(i3_leds[6],  RGB_PURPLE_70);
    rgb_matrix_set_color(i3_leds[7], RGB_MAGENTA_70);
} else
if (timer_elapsed(g_time) < 19 * delay) {
    rgb_matrix_set_color(i3_leds[0],     RGB_RED_80);
    rgb_matrix_set_color(i3_leds[1],  RGB_ORANGE_80);
    rgb_matrix_set_color(i3_leds[2],  RGB_YELLOW_80);
    rgb_matrix_set_color(i3_leds[3],   RGB_GREEN_80);
    rgb_matrix_set_color(i3_leds[4],    RGB_CYAN_80);
    rgb_matrix_set_color(i3_leds[5],    RGB_BLUE_80);
    rgb_matrix_set_color(i3_leds[6],  RGB_PURPLE_80);
    rgb_matrix_set_color(i3_leds[7], RGB_MAGENTA_80);
} else
if (timer_elapsed(g_time) < 20 * delay) {
    rgb_matrix_set_color(i3_leds[0],     RGB_RED_90);
    rgb_matrix_set_color(i3_leds[1],  RGB_ORANGE_90);
    rgb_matrix_set_color(i3_leds[2],  RGB_YELLOW_90);
    rgb_matrix_set_color(i3_leds[3],   RGB_GREEN_90);
    rgb_matrix_set_color(i3_leds[4],    RGB_CYAN_90);
    rgb_matrix_set_color(i3_leds[5],    RGB_BLUE_90);
    rgb_matrix_set_color(i3_leds[6],  RGB_PURPLE_90);
    rgb_matrix_set_color(i3_leds[7], RGB_MAGENTA_90);
} else
{
    g_time = timer_read();
}
