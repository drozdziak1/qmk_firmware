/* Copyright 2020 Adam Honse <calcprogrammer1@gmail.com>
 * Copyright 2020 Dimitris Mantzouranis <d3xter93@gmail.com>
 * Copyright 2022 Harrison Chan (Xelus)
 * Copyright 2022 Pablo Ramirez <jp.ramangulo@gmail.com>
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

#include "iso.h"

/* ISO keymap LEDs */
/* Screenprint on the back of the pcb
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┬───┐
 * │ 1 │ 6 │10 │15 │19 │23 │27 │32 │36 │40 │44 │49 │54 │  57   │64 │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┼───┤
 * │  2  │ 7 │11 │16 │20 │24 │28 │33 │37 │41 │45 │50 │55 │     │65 │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐59  ├───┤
 * │  3   │ 8 │12 │17 │21 │25 │29 │34 │38 │42 │46 │51 │58 │    │66 │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴┬───┼───┤
 * │ 4  │69 │13 │18 │22 │26 │30 │35 │39 │43 │47 │52 │  60  │62 │67 │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴──┬┴──┬┴──┬───┼───┼───┤
 * │ 5  │ 9  │ 14 │           31           │48 │53 │56 │61 │63 │68 │
 * └────┴────┴────┴────────────────────────┴───┴───┴───┴───┴───┴───┘
 */
__attribute__ ((weak))
led_config_t g_led_config = {
    {
        {  0,        1,       2,       3,       4,       5,       6,       7,       8,       9,      10,      11,      12,      13,      14 },
        { 15,       16,      17,      18,      19,      20,      21,      22,      23,      24,      25,      26,      27,      NO_LED,  28 },
        { 29,       30,      31,      32,      33,      34,      35,      36,      37,      38,      39,      40,      41,      42,      43 },
        { 44,       45,      46,      47,      48,      49,      50,      51,      52,      53,      54,      55,      56,      57,      58 },
        { 59,       60,      61,      NO_LED,  NO_LED,  NO_LED,  62,      NO_LED,  NO_LED,  63,      64,      65,      66,      67,      68 }
    },
    {
        {1  ,  0}, {14 ,  0}, {29 ,  0}, {44 ,  0}, {59 ,  0}, {74 ,  0}, {89 ,  0}, {104,  0}, {119,  0}, {134,  0}, {149,  0}, {164,  0}, {179,  0}, {194,  0}, {209,  0},
        {3  , 16}, {16 , 16}, {32 , 16}, {32 , 16}, {48 , 16}, {64 , 16}, {80 , 16}, {96 , 16}, {112, 16}, {128, 16}, {144, 16}, {160, 16}, {176, 16},            {209, 16},
        {5  , 32}, {19 , 48}, {34 , 48}, {48 , 48}, {63 , 48}, {78 , 48}, {92 , 48}, {107, 48}, {121, 48}, {136, 48}, {151, 48}, {165, 48}, {179, 32}, {194, 32}, {209, 32},
        {2  , 48}, {17 , 32}, {32 , 32}, {47 , 32}, {61 , 32}, {76 , 32}, {91 , 32}, {106, 32}, {120, 32}, {135, 32}, {150, 32}, {165, 32}, {179, 48}, {194, 48}, {209, 48},
        {2  , 64}, {16 , 64}, {29 , 64},                                  {80 , 64},                       {135, 64}, {164, 64}, {179, 64}, {179, 64}, {194, 64}, {209, 64}
    },
    {
        4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
        4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,    4,
        4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
        4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
        4, 4, 4,          4,       4, 4, 4, 4, 4, 4
    }
};
