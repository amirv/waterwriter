
#include "lvgl/lvgl.h"

/***********************************************************************************
 * arial.ttf 8 px Font in U+0020 ( ) .. U+007e (~)  range with 8 bpp
***********************************************************************************/

/*Store the image of the letters (glyph)*/
static const uint8_t arial.c_glyph_bitmap[] = 
{
  /*Unicode: U+0020 ( ) , Width: 3 */
  0x00, 0x00, 0x00,  //... 
  0x00, 0x00, 0x00,  //... 
  0x00, 0x00, 0x00,  //... 
  0x00, 0x00, 0x00,  //... 
  0x00, 0x00, 0x00,  //... 
  0x00, 0x00, 0x00,  //... 
  0x00, 0x00, 0x00,  //... 
  0x00, 0x00, 0x00,  //... 


  /*Unicode: U+0021 (!) , Width: 2 */
  0x00, 0x00,  //.. 
  0x62, 0x5a,  //++ 
  0x54, 0x4c,  //++ 
  0x3e, 0x38,  //.. 
  0x00, 0x00,  //.. 
  0x5e, 0x56,  //++ 
  0x00, 0x00,  //.. 
  0x00, 0x00,  //.. 


  /*Unicode: U+0022 (") , Width: 3 */
  0x00, 0x00, 0x00,  //... 
  0xaa, 0x8e, 0x26,  //%%. 
  0x84, 0x72, 0x10,  //%+. 
  0x00, 0x00, 0x00,  //... 
  0x00, 0x00, 0x00,  //... 
  0x00, 0x00, 0x00,  //... 
  0x00, 0x00, 0x00,  //... 
  0x00, 0x00, 0x00,  //... 


  /*Unicode: U+0023 (#) , Width: 4 */
  0x00, 0x00, 0x00, 0x00,  //.... 
  0x00, 0x80, 0x1a, 0x66,  //.%.+ 
  0xea, 0xff, 0xff, 0xca,  //@@@@ 
  0x1c, 0x62, 0x7e, 0x02,  //.++. 
  0xea, 0xff, 0xff, 0xca,  //@@@@ 
  0x7c, 0x04, 0x80, 0x00,  //+.%. 
  0x00, 0x00, 0x00, 0x00,  //.... 
  0x00, 0x00, 0x00, 0x00,  //.... 


  /*Unicode: U+0024 ($) , Width: 4 */
  0x00, 0x00, 0x00, 0x00,  //.... 
  0x52, 0xf0, 0xe0, 0x2e,  //+@@. 
  0x80, 0xbe, 0x28, 0x00,  //%%.. 
  0x00, 0x78, 0xd2, 0x38,  //.+@. 
  0x9e, 0x62, 0x5c, 0x82,  //%++% 
  0x36, 0xe6, 0xe0, 0x2c,  //.@@. 
  0x00, 0x3e, 0x1a, 0x00,  //.... 
  0x00, 0x00, 0x00, 0x00,  //.... 


  /*Unicode: U+0025 (%) , Width: 6 */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  //...... 
  0x4c, 0xee, 0x40, 0x18, 0x64, 0x00,  //+@+.+. 
  0x8c, 0x32, 0x82, 0x78, 0x04, 0x00,  //%.%+.. 
  0x4c, 0xee, 0x6a, 0x74, 0xe8, 0x78,  //+@++@+ 
  0x00, 0x00, 0x7e, 0x54, 0x54, 0x9e,  //..+++% 
  0x00, 0x3c, 0x40, 0x1e, 0xe8, 0x78,  //..+.@+ 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  //...... 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  //...... 


  /*Unicode: U+0026 (&) , Width: 5 */
  0x00, 0x00, 0x00, 0x00, 0x00,  //..... 
  0x00, 0xbe, 0xe8, 0x26, 0x00,  //.%@.. 
  0x02, 0xb2, 0x92, 0x24, 0x00,  //.%%.. 
  0x2e, 0x98, 0xa6, 0x2e, 0x06,  //.%%.. 
  0xa4, 0x2c, 0x6c, 0xd0, 0x00,  //%.+@. 
  0x48, 0xea, 0xd6, 0x92, 0x40,  //+@@%+ 
  0x00, 0x00, 0x00, 0x00, 0x00,  //..... 
  0x00, 0x00, 0x00, 0x00, 0x00,  //..... 


  /*Unicode: U+0027 (') , Width: 2 */
  0x00, 0x00,  //.. 
  0xae, 0x02,  //%. 
  0x86, 0x00,  //%. 
  0x00, 0x00,  //.. 
  0x00, 0x00,  //.. 
  0x00, 0x00,  //.. 
  0x00, 0x00,  //.. 
  0x00, 0x00,  //.. 


  /*Unicode: U+0028 (() , Width: 2 */
  0x00, 0x00,  //.. 
  0x00, 0x7a,  //.+ 
  0x40, 0x50,  //++ 
  0x84, 0x1e,  //%. 
  0x84, 0x1a,  //%. 
  0x3e, 0x54,  //.+ 
  0x00, 0x74,  //.+ 
  0x00, 0x00,  //.. 


  /*Unicode: U+0029 ()) , Width: 3 */
  0x00, 0x00, 0x00,  //... 
  0x40, 0x38, 0x00,  //+.. 
  0x00, 0x90, 0x00,  //.%. 
  0x00, 0x98, 0x06,  //.%. 
  0x00, 0x96, 0x04,  //.%. 
  0x00, 0x90, 0x00,  //.%. 
  0x42, 0x2e, 0x00,  //+.. 
  0x00, 0x00, 0x00,  //... 


  /*Unicode: U+002a (*) , Width: 3 */
  0x00, 0x00, 0x00,  //... 
  0x42, 0x90, 0x2a,  //+%. 
  0x44, 0x9c, 0x0e,  //+%. 
  0x00, 0x00, 0x00,  //... 
  0x00, 0x00, 0x00,  //... 
  0x00, 0x00, 0x00,  //... 
  0x00, 0x00, 0x00,  //... 
  0x00, 0x00, 0x00,  //... 


  /*Unicode: U+002b (+) , Width: 4 */
  0x00, 0x00, 0x00, 0x00,  //.... 
  0x00, 0x00, 0x00, 0x00,  //.... 
  0x00, 0x3e, 0x52, 0x00,  //..+. 
  0x9a, 0xff, 0xff, 0xb2,  //%@@% 
  0x00, 0x3e, 0x52, 0x00,  //..+. 
  0x00, 0x00, 0x00, 0x00,  //.... 
  0x00, 0x00, 0x00, 0x00,  //.... 
  0x00, 0x00, 0x00, 0x00,  //.... 


  /*Unicode: U+002c (,) , Width: 2 */
  0x00, 0x00,  //.. 
  0x00, 0x00,  //.. 
  0x00, 0x00,  //.. 
  0x00, 0x00,  //.. 
  0x00, 0x00,  //.. 
  0x5e, 0x52,  //++ 
  0x4e, 0x2c,  //+. 
  0x00, 0x00,  //.. 


  /*Unicode: U+002d (-) , Width: 3 */
  0x00, 0x00, 0x00,  //... 
  0x00, 0x00, 0x00,  //... 
  0x00, 0x00, 0x00,  //... 
  0xc6, 0xff, 0x1a,  //@@. 
  0x00, 0x00, 0x00,  //... 
  0x00, 0x00, 0x00,  //... 
  0x00, 0x00, 0x00,  //... 
  0x00, 0x00, 0x00,  //... 


  /*Unicode: U+002e (.) , Width: 2 */
  0x00, 0x00,  //.. 
  0x00, 0x00,  //.. 
  0x00, 0x00,  //.. 
  0x00, 0x00,  //.. 
  0x00, 0x00,  //.. 
  0x5a, 0x56,  //++ 
  0x00, 0x00,  //.. 
  0x00, 0x00,  //.. 


  /*Unicode: U+002f (/) , Width: 2 */
  0x00, 0x00,  //.. 
  0x00, 0x7a,  //.+ 
  0x06, 0x74,  //.+ 
  0x44, 0x36,  //+. 
  0x7a, 0x00,  //+. 
  0x7e, 0x00,  //+. 
  0x00, 0x00,  //.. 
  0x00, 0x00,  //.. 


  /*Unicode: U+0030 (0) , Width: 4 */
  0x00, 0x00, 0x00, 0x00,  //.... 
  0x26, 0xe4, 0xd0, 0x16,  //.@@. 
  0x98, 0x2c, 0x54, 0x74,  //%.++ 
  0xa0, 0x00, 0x18, 0x8a,  //%..% 
  0x92, 0x2c, 0x54, 0x72,  //%.++ 
  0x2c, 0xe2, 0xd8, 0x10,  //.@@. 
  0x00, 0x00, 0x00, 0x00,  //.... 
  0x00, 0x00, 0x00, 0x00,  //.... 


  /*Unicode: U+0031 (1) , Width: 3 */
  0x00, 0x00, 0x00,  //... 
  0x00, 0x40, 0x92,  //.+% 
  0x22, 0x6e, 0x9a,  //.+% 
  0x00, 0x00, 0x9a,  //..% 
  0x00, 0x00, 0x9a,  //..% 
  0x00, 0x00, 0x9a,  //..% 
  0x00, 0x00, 0x00,  //... 
  0x00, 0x00, 0x00,  //... 


  /*Unicode: U+0032 (2) , Width: 4 */
  0x00, 0x00, 0x00, 0x00,  //.... 
  0x5c, 0xee, 0xe0, 0x2e,  //+@@. 
  0x00, 0x00, 0x48, 0x72,  //..++ 
  0x00, 0x2c, 0xac, 0x14,  //..%. 
  0x36, 0x96, 0x0e, 0x00,  //.%.. 
  0xac, 0xff, 0xff, 0x86,  //%@@% 
  0x00, 0x00, 0x00, 0x00,  //.... 
  0x00, 0x00, 0x00, 0x00,  //.... 


  /*Unicode: U+0033 (3) , Width: 4 */
  0x00, 0x00, 0x00, 0x00,  //.... 
  0x52, 0xee, 0xca, 0x10,  //+@@. 
  0x00, 0x00, 0x84, 0x3e,  //..%. 
  0x00, 0x70, 0xe6, 0x1c,  //.+@. 
  0x00, 0x00, 0x4c, 0x80,  //..+% 
  0x60, 0xee, 0xda, 0x2c,  //+@@. 
  0x00, 0x00, 0x00, 0x00,  //.... 
  0x00, 0x00, 0x00, 0x00,  //.... 


  /*Unicode: U+0034 (4) , Width: 4 */
  0x00, 0x00, 0x00, 0x00,  //.... 
  0x00, 0x16, 0xc6, 0x00,  //..@. 
  0x02, 0x8c, 0xa2, 0x00,  //.%%. 
  0x74, 0x20, 0x9a, 0x00,  //+.%. 
  0xe6, 0xff, 0xff, 0x8e,  //@@@% 
  0x00, 0x00, 0x9a, 0x00,  //..%. 
  0x00, 0x00, 0x00, 0x00,  //.... 
  0x00, 0x00, 0x00, 0x00,  //.... 


  /*Unicode: U+0035 (5) , Width: 4 */
  0x00, 0x00, 0x00, 0x00,  //.... 
  0x30, 0xff, 0xff, 0x5e,  //.@@+ 
  0x58, 0x48, 0x00, 0x00,  //++.. 
  0x82, 0xd2, 0xe4, 0x38,  //%@@. 
  0x00, 0x00, 0x4e, 0x8e,  //..+% 
  0x62, 0xf0, 0xda, 0x2e,  //+@@. 
  0x00, 0x00, 0x00, 0x00,  //.... 
  0x00, 0x00, 0x00, 0x00,  //.... 


  /*Unicode: U+0036 (6) , Width: 4 */
  0x00, 0x00, 0x00, 0x00,  //.... 
  0x24, 0xd8, 0xe8, 0x38,  //.@@. 
  0x92, 0x3c, 0x00, 0x00,  //%... 
  0xa4, 0xca, 0xe4, 0x34,  //%@@. 
  0x9c, 0x36, 0x4c, 0x84,  //%.+% 
  0x2e, 0xde, 0xde, 0x2a,  //.@@. 
  0x00, 0x00, 0x00, 0x00,  //.... 
  0x00, 0x00, 0x00, 0x00,  //.... 


  /*Unicode: U+0037 (7) , Width: 4 */
  0x00, 0x00, 0x00, 0x00,  //.... 
  0xaa, 0xff, 0xff, 0x8e,  //%@@% 
  0x00, 0x00, 0x88, 0x22,  //..%. 
  0x00, 0x38, 0x74, 0x00,  //..+. 
  0x00, 0x98, 0x0e, 0x00,  //.%.. 
  0x00, 0xa4, 0x00, 0x00,  //.%.. 
  0x00, 0x00, 0x00, 0x00,  //.... 
  0x00, 0x00, 0x00, 0x00,  //.... 


  /*Unicode: U+0038 (8) , Width: 4 */
  0x00, 0x00, 0x00, 0x00,  //.... 
  0x30, 0xe4, 0xd6, 0x16,  //.@@. 
  0x72, 0x54, 0x7a, 0x4c,  //++++ 
  0x2c, 0xf4, 0xe6, 0x14,  //.@@. 
  0x9e, 0x2c, 0x4c, 0x7c,  //%.++ 
  0x4e, 0xea, 0xe0, 0x34,  //+@@. 
  0x00, 0x00, 0x00, 0x00,  //.... 
  0x00, 0x00, 0x00, 0x00,  //.... 


  /*Unicode: U+0039 (9) , Width: 4 */
  0x00, 0x00, 0x00, 0x00,  //.... 
  0x48, 0xea, 0xce, 0x12,  //+@@. 
  0xa2, 0x30, 0x52, 0x7a,  //%.++ 
  0x4c, 0xec, 0xc0, 0x8e,  //+@@% 
  0x00, 0x00, 0x5c, 0x70,  //..++ 
  0x52, 0xf0, 0xca, 0x0a,  //+@@. 
  0x00, 0x00, 0x00, 0x00,  //.... 
  0x00, 0x00, 0x00, 0x00,  //.... 


  /*Unicode: U+003a (:) , Width: 2 */
  0x00, 0x00,  //.. 
  0x00, 0x00,  //.. 
  0x5e, 0x52,  //++ 
  0x00, 0x00,  //.. 
  0x00, 0x00,  //.. 
  0x5e, 0x52,  //++ 
  0x00, 0x00,  //.. 
  0x00, 0x00,  //.. 


  /*Unicode: U+003b (;) , Width: 2 */
  0x00, 0x00,  //.. 
  0x00, 0x00,  //.. 
  0x5e, 0x52,  //++ 
  0x00, 0x00,  //.. 
  0x00, 0x00,  //.. 
  0x5e, 0x52,  //++ 
  0x4e, 0x2c,  //+. 
  0x00, 0x00,  //.. 


  /*Unicode: U+003c (<) , Width: 4 */
  0x00, 0x00, 0x00, 0x00,  //.... 
  0x00, 0x00, 0x00, 0x00,  //.... 
  0x0c, 0x54, 0xa0, 0x9e,  //.+%% 
  0x9a, 0xd4, 0x74, 0x16,  //%@+. 
  0x0c, 0x54, 0xa2, 0xa0,  //.+%% 
  0x00, 0x00, 0x00, 0x00,  //.... 
  0x00, 0x00, 0x00, 0x00,  //.... 
  0x00, 0x00, 0x00, 0x00,  //.... 


  /*Unicode: U+003d (=) , Width: 4 */
  0x00, 0x00, 0x00, 0x00,  //.... 
  0x00, 0x00, 0x00, 0x00,  //.... 
  0x00, 0x00, 0x00, 0x00,  //.... 
  0x9a, 0xff, 0xff, 0xb2,  //%@@% 
  0x9a, 0xff, 0xff, 0xb2,  //%@@% 
  0x00, 0x00, 0x00, 0x00,  //.... 
  0x00, 0x00, 0x00, 0x00,  //.... 
  0x00, 0x00, 0x00, 0x00,  //.... 


  /*Unicode: U+003e (>) , Width: 4 */
  0x00, 0x00, 0x00, 0x00,  //.... 
  0x00, 0x00, 0x00, 0x00,  //.... 
  0x8c, 0xa8, 0x5a, 0x10,  //%%+. 
  0x10, 0x6a, 0xcc, 0xb2,  //.+@% 
  0x8c, 0xa8, 0x5c, 0x12,  //%%+. 
  0x00, 0x00, 0x00, 0x00,  //.... 
  0x00, 0x00, 0x00, 0x00,  //.... 
  0x00, 0x00, 0x00, 0x00,  //.... 


  /*Unicode: U+003f (?) , Width: 4 */
  0x00, 0x00, 0x00, 0x00,  //.... 
  0x5e, 0xee, 0xe8, 0x46,  //+@@+ 
  0x00, 0x00, 0x80, 0x44,  //..%+ 
  0x00, 0x4c, 0x58, 0x00,  //.++. 
  0x00, 0x00, 0x00, 0x00,  //.... 
  0x00, 0x6a, 0x46, 0x00,  //.++. 
  0x00, 0x00, 0x00, 0x00,  //.... 
  0x00, 0x00, 0x00, 0x00,  //.... 


  /*Unicode: U+0040 (@) , Width: 7 */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  //....... 
  0x00, 0x3c, 0xc4, 0xf4, 0xe4, 0x7c, 0x00,  //..@@@+. 
  0x22, 0xba, 0xb6, 0xf4, 0xe2, 0x9c, 0x64,  //.%%@@%+ 
  0x7c, 0x34, 0xa4, 0x10, 0xb8, 0x00, 0x86,  //+.%.%.% 
  0x88, 0x48, 0x76, 0x28, 0xa0, 0x52, 0x74,  //%++.%++ 
  0x44, 0xb4, 0xff, 0xca, 0xfa, 0xff, 0x90,  //+%@@@@% 
  0x00, 0x54, 0xcc, 0xf2, 0xea, 0x82, 0x02,  //.+@@@%. 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  //....... 


  /*Unicode: U+0041 (A) , Width: 5 */
  0x00, 0x00, 0x00, 0x00, 0x00,  //..... 
  0x00, 0x44, 0xd2, 0x00, 0x00,  //.+@.. 
  0x00, 0x82, 0x6a, 0x38, 0x00,  //.%+.. 
  0x12, 0xf6, 0xff, 0xa4, 0x00,  //.@@%. 
  0x6e, 0x1a, 0x00, 0x7c, 0x14,  //+..+. 
  0xa4, 0x00, 0x00, 0x38, 0x76,  //%...+ 
  0x00, 0x00, 0x00, 0x00, 0x00,  //..... 
  0x00, 0x00, 0x00, 0x00, 0x00,  //..... 


  /*Unicode: U+0042 (B) , Width: 5 */
  0x00, 0x00, 0x00, 0x00, 0x00,  //..... 
  0x7a, 0xff, 0xf6, 0xaa, 0x00,  //+@@%. 
  0x7a, 0x2a, 0x06, 0x96, 0x00,  //+..%. 
  0x7a, 0xff, 0xff, 0xd6, 0x0c,  //+@@@. 
  0x7a, 0x2a, 0x04, 0x98, 0x3a,  //+..%. 
  0x7a, 0xff, 0xfa, 0xba, 0x06,  //+@@%. 
  0x00, 0x00, 0x00, 0x00, 0x00,  //..... 
  0x00, 0x00, 0x00, 0x00, 0x00,  //..... 


  /*Unicode: U+0043 (C) , Width: 5 */
  0x00, 0x00, 0x00, 0x00, 0x00,  //..... 
  0x0a, 0xaa, 0xf4, 0xca, 0x1c,  //.%@@. 
  0x78, 0x7c, 0x0e, 0x46, 0x66,  //++.++ 
  0xa0, 0x14, 0x00, 0x00, 0x00,  //%.... 
  0x76, 0x7c, 0x0c, 0x4c, 0x8e,  //++.+% 
  0x0a, 0xb2, 0xf6, 0xcc, 0x20,  //.%@@. 
  0x00, 0x00, 0x00, 0x00, 0x00,  //..... 
  0x00, 0x00, 0x00, 0x00, 0x00,  //..... 


  /*Unicode: U+0044 (D) , Width: 5 */
  0x00, 0x00, 0x00, 0x00, 0x00,  //..... 
  0x72, 0xff, 0xfa, 0xbc, 0x0c,  //+@@%. 
  0x72, 0x32, 0x02, 0x66, 0x7e,  //+..++ 
  0x72, 0x32, 0x00, 0x08, 0xa4,  //+...% 
  0x72, 0x32, 0x04, 0x66, 0x7e,  //+..++ 
  0x72, 0xff, 0xf8, 0xc0, 0x12,  //+@@@. 
  0x00, 0x00, 0x00, 0x00, 0x00,  //..... 
  0x00, 0x00, 0x00, 0x00, 0x00,  //..... 


  /*Unicode: U+0045 (E) , Width: 5 */
  0x00, 0x00, 0x00, 0x00, 0x00,  //..... 
  0x72, 0xff, 0xff, 0xff, 0x2a,  //+@@@. 
  0x72, 0x36, 0x00, 0x00, 0x00,  //+.... 
  0x72, 0xff, 0xff, 0xfa, 0x00,  //+@@@. 
  0x72, 0x36, 0x00, 0x00, 0x00,  //+.... 
  0x72, 0xff, 0xff, 0xff, 0x4a,  //+@@@+ 
  0x00, 0x00, 0x00, 0x00, 0x00,  //..... 
  0x00, 0x00, 0x00, 0x00, 0x00,  //..... 


  /*Unicode: U+0046 (F) , Width: 4 */
  0x00, 0x00, 0x00, 0x00,  //.... 
  0x6a, 0xff, 0xff, 0xf2,  //+@@@ 
  0x6a, 0x3a, 0x00, 0x00,  //+... 
  0x6a, 0xff, 0xff, 0x96,  //+@@% 
  0x6a, 0x3a, 0x00, 0x00,  //+... 
  0x6a, 0x3a, 0x00, 0x00,  //+... 
  0x00, 0x00, 0x00, 0x00,  //.... 
  0x00, 0x00, 0x00, 0x00,  //.... 


  /*Unicode: U+0047 (G) , Width: 5 */
  0x00, 0x00, 0x00, 0x00, 0x00,  //..... 
  0x04, 0x9c, 0xf2, 0xe2, 0x52,  //.%@@+ 
  0x6a, 0x86, 0x0c, 0x16, 0x68,  //+%..+ 
  0x98, 0x1e, 0x1a, 0xff, 0xff,  //%..@@ 
  0x6c, 0x8a, 0x10, 0x14, 0xbc,  //+%..% 
  0x04, 0x9a, 0xf0, 0xe0, 0x70,  //.%@@+ 
  0x00, 0x00, 0x00, 0x00, 0x00,  //..... 
  0x00, 0x00, 0x00, 0x00, 0x00,  //..... 


  /*Unicode: U+0048 (H) , Width: 5 */
  0x00, 0x00, 0x00, 0x00, 0x00,  //..... 
  0x6e, 0x36, 0x00, 0x2a, 0x7a,  //+...+ 
  0x6e, 0x36, 0x00, 0x2a, 0x7a,  //+...+ 
  0x6e, 0xff, 0xff, 0xff, 0x7a,  //+@@@+ 
  0x6e, 0x36, 0x00, 0x2a, 0x7a,  //+...+ 
  0x6e, 0x36, 0x00, 0x2a, 0x7a,  //+...+ 
  0x00, 0x00, 0x00, 0x00, 0x00,  //..... 
  0x00, 0x00, 0x00, 0x00, 0x00,  //..... 


  /*Unicode: U+0049 (I) , Width: 2 */
  0x00, 0x00,  //.. 
  0x56, 0x4e,  //++ 
  0x56, 0x4e,  //++ 
  0x56, 0x4e,  //++ 
  0x56, 0x4e,  //++ 
  0x56, 0x4e,  //++ 
  0x00, 0x00,  //.. 
  0x00, 0x00,  //.. 


  /*Unicode: U+004a (J) , Width: 3 */
  0x00, 0x00, 0x00,  //... 
  0x00, 0x00, 0xa6,  //..% 
  0x00, 0x00, 0xa6,  //..% 
  0x00, 0x00, 0xa6,  //..% 
  0x9e, 0x12, 0xbc,  //%.% 
  0x64, 0xf0, 0x8e,  //+@% 
  0x00, 0x00, 0x00,  //... 
  0x00, 0x00, 0x00,  //... 


  /*Unicode: U+004b (K) , Width: 5 */
  0x00, 0x00, 0x00, 0x00, 0x00,  //..... 
  0x7a, 0x2a, 0x16, 0xaa, 0x24,  //+..%. 
  0x7a, 0x50, 0xb2, 0x18, 0x00,  //++%.. 
  0x7a, 0xb4, 0xb2, 0x08, 0x00,  //+%%.. 
  0x7a, 0x2a, 0x3c, 0x92, 0x00,  //+..%. 
  0x7a, 0x2a, 0x00, 0x8c, 0x4c,  //+..%+ 
  0x00, 0x00, 0x00, 0x00, 0x00,  //..... 
  0x00, 0x00, 0x00, 0x00, 0x00,  //..... 


  /*Unicode: U+004c (L) , Width: 4 */
  0x00, 0x00, 0x00, 0x00,  //.... 
  0x7a, 0x2a, 0x00, 0x00,  //+... 
  0x7a, 0x2a, 0x00, 0x00,  //+... 
  0x7a, 0x2a, 0x00, 0x00,  //+... 
  0x7a, 0x2a, 0x00, 0x00,  //+... 
  0x7a, 0xff, 0xff, 0xa2,  //+@@% 
  0x00, 0x00, 0x00, 0x00,  //.... 
  0x00, 0x00, 0x00, 0x00,  //.... 


  /*Unicode: U+004d (M) , Width: 6 */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  //...... 
  0x7a, 0xac, 0x00, 0x00, 0xc4, 0x4a,  //+%..@+ 
  0x7a, 0xc8, 0x0a, 0x1c, 0xce, 0x4a,  //+@..@+ 
  0x7a, 0x74, 0x58, 0x72, 0x74, 0x4a,  //++++++ 
  0x7a, 0x2c, 0x98, 0x8a, 0x56, 0x4a,  //+.%%++ 
  0x7a, 0x26, 0x8a, 0x60, 0x56, 0x4a,  //+.%+++ 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  //...... 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  //...... 


  /*Unicode: U+004e (N) , Width: 5 */
  0x00, 0x00, 0x00, 0x00, 0x00,  //..... 
  0x76, 0x94, 0x00, 0x26, 0x7a,  //+%..+ 
  0x76, 0xde, 0x50, 0x26, 0x7a,  //+@+.+ 
  0x76, 0x46, 0xda, 0x44, 0x7a,  //++@++ 
  0x76, 0x2a, 0x4c, 0xde, 0x7a,  //+.+@+ 
  0x76, 0x2a, 0x00, 0x90, 0x7a,  //+..%+ 
  0x00, 0x00, 0x00, 0x00, 0x00,  //..... 
  0x00, 0x00, 0x00, 0x00, 0x00,  //..... 


  /*Unicode: U+004f (O) , Width: 6 */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  //...... 
  0x04, 0x9e, 0xf0, 0xd8, 0x40, 0x00,  //.%@@+. 
  0x6e, 0x7a, 0x0a, 0x34, 0xcc, 0x02,  //++..@. 
  0x9e, 0x0e, 0x00, 0x00, 0x9a, 0x16,  //%...%. 
  0x72, 0x78, 0x08, 0x2a, 0xc8, 0x02,  //++..@. 
  0x02, 0x9c, 0xf4, 0xda, 0x42, 0x00,  //.%@@+. 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  //...... 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  //...... 


  /*Unicode: U+0050 (P) , Width: 5 */
  0x00, 0x00, 0x00, 0x00, 0x00,  //..... 
  0x72, 0xff, 0xfc, 0xce, 0x12,  //+@@@. 
  0x72, 0x32, 0x00, 0x82, 0x4e,  //+..%+ 
  0x72, 0xff, 0xfa, 0xc8, 0x10,  //+@@@. 
  0x72, 0x32, 0x00, 0x00, 0x00,  //+.... 
  0x72, 0x32, 0x00, 0x00, 0x00,  //+.... 
  0x00, 0x00, 0x00, 0x00, 0x00,  //..... 
  0x00, 0x00, 0x00, 0x00, 0x00,  //..... 


  /*Unicode: U+0051 (Q) , Width: 6 */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  //...... 
  0x0a, 0xa8, 0xf6, 0xd8, 0x46, 0x00,  //.%@@+. 
  0x7e, 0x72, 0x0a, 0x38, 0xd6, 0x02,  //++..@. 
  0xac, 0x06, 0x08, 0x06, 0xa4, 0x08,  //%...%. 
  0x7e, 0x74, 0x34, 0xae, 0x94, 0x00,  //++.%%. 
  0x04, 0xa4, 0xf6, 0xce, 0xd8, 0x16,  //.%@@@. 
  0x00, 0x00, 0x00, 0x00, 0x12, 0x00,  //...... 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  //...... 


  /*Unicode: U+0052 (R) , Width: 5 */
  0x00, 0x00, 0x00, 0x00, 0x00,  //..... 
  0x72, 0xff, 0xff, 0xe2, 0x2c,  //+@@@. 
  0x72, 0x36, 0x00, 0x58, 0x80,  //+..+% 
  0x72, 0xff, 0xff, 0xe0, 0x2e,  //+@@@. 
  0x72, 0x36, 0x26, 0xa6, 0x08,  //+..%. 
  0x72, 0x36, 0x00, 0x3c, 0x96,  //+...% 
  0x00, 0x00, 0x00, 0x00, 0x00,  //..... 
  0x00, 0x00, 0x00, 0x00, 0x00,  //..... 


  /*Unicode: U+0053 (S) , Width: 5 */
  0x00, 0x00, 0x00, 0x00, 0x00,  //..... 
  0x24, 0xd0, 0xea, 0x72, 0x00,  //.@@+. 
  0x68, 0x54, 0x08, 0xb6, 0x0c,  //++.%. 
  0x04, 0x70, 0x80, 0x70, 0x00,  //.+%+. 
  0x8e, 0x44, 0x08, 0x88, 0x34,  //%+.%. 
  0x1c, 0xc4, 0xf2, 0xae, 0x06,  //.@@%. 
  0x00, 0x00, 0x00, 0x00, 0x00,  //..... 
  0x00, 0x00, 0x00, 0x00, 0x00,  //..... 


  /*Unicode: U+0054 (T) , Width: 5 */
  0x00, 0x00, 0x00, 0x00, 0x00,  //..... 
  0xd2, 0xff, 0xff, 0xff, 0x22,  //@@@@. 
  0x00, 0x2e, 0x7a, 0x00, 0x00,  //..+.. 
  0x00, 0x2e, 0x7a, 0x00, 0x00,  //..+.. 
  0x00, 0x2e, 0x7a, 0x00, 0x00,  //..+.. 
  0x00, 0x2e, 0x7a, 0x00, 0x00,  //..+.. 
  0x00, 0x00, 0x00, 0x00, 0x00,  //..... 
  0x00, 0x00, 0x00, 0x00, 0x00,  //..... 


  /*Unicode: U+0055 (U) , Width: 5 */
  0x00, 0x00, 0x00, 0x00, 0x00,  //..... 
  0x72, 0x36, 0x00, 0x2a, 0x7a,  //+...+ 
  0x72, 0x36, 0x00, 0x2a, 0x7a,  //+...+ 
  0x72, 0x38, 0x00, 0x2c, 0x7a,  //+...+ 
  0x62, 0x7a, 0x08, 0x72, 0x6a,  //++.++ 
  0x12, 0xc0, 0xf4, 0xc6, 0x14,  //.@@@. 
  0x00, 0x00, 0x00, 0x00, 0x00,  //..... 
  0x00, 0x00, 0x00, 0x00, 0x00,  //..... 


  /*Unicode: U+0056 (V) , Width: 5 */
  0x00, 0x00, 0x00, 0x00, 0x00,  //..... 
  0xae, 0x02, 0x00, 0x3e, 0x68,  //%...+ 
  0x62, 0x46, 0x00, 0x92, 0x0e,  //++.%. 
  0x0a, 0x94, 0x08, 0x92, 0x00,  //.%.%. 
  0x00, 0x8e, 0x62, 0x3c, 0x00,  //.%+.. 
  0x00, 0x38, 0xc2, 0x00, 0x00,  //..@.. 
  0x00, 0x00, 0x00, 0x00, 0x00,  //..... 
  0x00, 0x00, 0x00, 0x00, 0x00,  //..... 


  /*Unicode: U+0057 (W) , Width: 7 */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  //....... 
  0xaa, 0x00, 0x36, 0xd8, 0x00, 0x42, 0x62,  //%..@.++ 
  0x84, 0x1a, 0x7c, 0x8c, 0x22, 0x80, 0x1c,  //%.+%.%. 
  0x3e, 0x56, 0x90, 0x2e, 0x68, 0x96, 0x00,  //.+%.+%. 
  0x04, 0x90, 0x7e, 0x00, 0x8a, 0x86, 0x00,  //.%+.%%. 
  0x00, 0x9e, 0x3a, 0x00, 0x86, 0x4a, 0x00,  //.%..%+. 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  //....... 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  //....... 


  /*Unicode: U+0058 (X) , Width: 5 */
  0x00, 0x00, 0x00, 0x00, 0x00,  //..... 
  0x60, 0x66, 0x00, 0x90, 0x26,  //++.%. 
  0x00, 0xa0, 0x7e, 0x62, 0x00,  //.%++. 
  0x00, 0x36, 0xe6, 0x04, 0x00,  //..@.. 
  0x06, 0xaa, 0x4e, 0x8a, 0x00,  //.%+%. 
  0x92, 0x34, 0x00, 0x8a, 0x44,  //%..%+ 
  0x00, 0x00, 0x00, 0x00, 0x00,  //..... 
  0x00, 0x00, 0x00, 0x00, 0x00,  //..... 


  /*Unicode: U+0059 (Y) , Width: 5 */
  0x00, 0x00, 0x00, 0x00, 0x00,  //..... 
  0x9e, 0x2c, 0x00, 0x7a, 0x42,  //%..++ 
  0x10, 0xb4, 0x34, 0x88, 0x00,  //.%.%. 
  0x00, 0x4c, 0xcc, 0x06, 0x00,  //.+@.. 
  0x00, 0x0a, 0x9a, 0x00, 0x00,  //..%.. 
  0x00, 0x0a, 0x9a, 0x00, 0x00,  //..%.. 
  0x00, 0x00, 0x00, 0x00, 0x00,  //..... 
  0x00, 0x00, 0x00, 0x00, 0x00,  //..... 


  /*Unicode: U+005a (Z) , Width: 5 */
  0x00, 0x00, 0x00, 0x00, 0x00,  //..... 
  0x8e, 0xff, 0xff, 0xff, 0x02,  //%@@@. 
  0x00, 0x00, 0x6c, 0x82, 0x00,  //..+%. 
  0x00, 0x68, 0x8a, 0x00, 0x00,  //.+%.. 
  0x62, 0x8c, 0x00, 0x00, 0x00,  //+%... 
  0xda, 0xff, 0xff, 0xff, 0x1a,  //@@@@. 
  0x00, 0x00, 0x00, 0x00, 0x00,  //..... 
  0x00, 0x00, 0x00, 0x00, 0x00,  //..... 


  /*Unicode: U+005b ([) , Width: 2 */
  0x00, 0x00,  //.. 
  0x86, 0xd2,  //%@ 
  0x86, 0x16,  //%. 
  0x86, 0x16,  //%. 
  0x86, 0x16,  //%. 
  0x86, 0x16,  //%. 
  0x86, 0xd2,  //%@ 
  0x00, 0x00,  //.. 


  /*Unicode: U+005c (\) , Width: 2 */
  0x00, 0x00,  //.. 
  0x7e, 0x00,  //+. 
  0x7a, 0x00,  //+. 
  0x44, 0x36,  //+. 
  0x06, 0x74,  //.+ 
  0x00, 0x7a,  //.+ 
  0x00, 0x00,  //.. 
  0x00, 0x00,  //.. 


  /*Unicode: U+005d (]) , Width: 2 */
  0x00, 0x00,  //.. 
  0xda, 0x7a,  //@+ 
  0x1e, 0x7a,  //.+ 
  0x1e, 0x7a,  //.+ 
  0x1e, 0x7a,  //.+ 
  0x1e, 0x7a,  //.+ 
  0xda, 0x7a,  //@+ 
  0x00, 0x00,  //.. 


  /*Unicode: U+005e (^) , Width: 3 */
  0x00, 0x00, 0x00,  //... 
  0x00, 0xca, 0x18,  //.@. 
  0x34, 0x94, 0x7a,  //.%+ 
  0x90, 0x0e, 0x9a,  //%.% 
  0x00, 0x00, 0x00,  //... 
  0x00, 0x00, 0x00,  //... 
  0x00, 0x00, 0x00,  //... 
  0x00, 0x00, 0x00,  //... 


  /*Unicode: U+005f (_) , Width: 4 */
  0x00, 0x00, 0x00, 0x00,  //.... 
  0x00, 0x00, 0x00, 0x00,  //.... 
  0x00, 0x00, 0x00, 0x00,  //.... 
  0x00, 0x00, 0x00, 0x00,  //.... 
  0x00, 0x00, 0x00, 0x00,  //.... 
  0x00, 0x00, 0x00, 0x00,  //.... 
  0xff, 0xff, 0xff, 0xf6,  //@@@@ 
  0x00, 0x00, 0x00, 0x00,  //.... 


  /*Unicode: U+0060 (`) , Width: 2 */
  0x00, 0x00,  //.. 
  0x4e, 0x58,  //++ 
  0x00, 0x00,  //.. 
  0x00, 0x00,  //.. 
  0x00, 0x00,  //.. 
  0x00, 0x00,  //.. 
  0x00, 0x00,  //.. 
  0x00, 0x00,  //.. 


  /*Unicode: U+0061 (a) , Width: 4 */
  0x00, 0x00, 0x00, 0x00,  //.... 
  0x00, 0x00, 0x00, 0x00,  //.... 
  0x50, 0xe8, 0xe4, 0x30,  //+@@. 
  0x2e, 0xb0, 0xe6, 0x64,  //.%@+ 
  0xaa, 0x46, 0x7c, 0x68,  //%+++ 
  0x72, 0xf8, 0xff, 0x7e,  //+@@+ 
  0x00, 0x00, 0x00, 0x00,  //.... 
  0x00, 0x00, 0x00, 0x00,  //.... 


  /*Unicode: U+0062 (b) , Width: 4 */
  0x00, 0x00, 0x00, 0x00,  //.... 
  0x8a, 0x12, 0x00, 0x00,  //%... 
  0x8a, 0xa8, 0xde, 0x24,  //%%@. 
  0x8a, 0x3e, 0x3c, 0x88,  //%..% 
  0x8a, 0x32, 0x3e, 0x84,  //%..% 
  0x8a, 0xac, 0xda, 0x20,  //%%@. 
  0x00, 0x00, 0x00, 0x00,  //.... 
  0x00, 0x00, 0x00, 0x00,  //.... 


  /*Unicode: U+0063 (c) , Width: 4 */
  0x00, 0x00, 0x00, 0x00,  //.... 
  0x00, 0x00, 0x00, 0x00,  //.... 
  0x32, 0xe0, 0xde, 0x22,  //.@@. 
  0x98, 0x28, 0x00, 0x00,  //%... 
  0x9e, 0x26, 0x00, 0x00,  //%... 
  0x36, 0xe4, 0xe0, 0x2c,  //.@@. 
  0x00, 0x00, 0x00, 0x00,  //.... 
  0x00, 0x00, 0x00, 0x00,  //.... 


  /*Unicode: U+0064 (d) , Width: 4 */
  0x00, 0x00, 0x00, 0x00,  //.... 
  0x00, 0x00, 0x36, 0x62,  //...+ 
  0x3e, 0xe4, 0xac, 0x62,  //.@%+ 
  0xa2, 0x22, 0x66, 0x62,  //%.++ 
  0xa0, 0x26, 0x60, 0x62,  //%.++ 
  0x38, 0xe4, 0xae, 0x62,  //.@%+ 
  0x00, 0x00, 0x00, 0x00,  //.... 
  0x00, 0x00, 0x00, 0x00,  //.... 


  /*Unicode: U+0065 (e) , Width: 4 */
  0x00, 0x00, 0x00, 0x00,  //.... 
  0x00, 0x00, 0x00, 0x00,  //.... 
  0x36, 0xe2, 0xda, 0x26,  //.@@. 
  0xaa, 0xff, 0xff, 0x8c,  //%@@% 
  0xa6, 0x2e, 0x00, 0x00,  //%... 
  0x3a, 0xe2, 0xe6, 0x36,  //.@@. 
  0x00, 0x00, 0x00, 0x00,  //.... 
  0x00, 0x00, 0x00, 0x00,  //.... 


  /*Unicode: U+0066 (f) , Width: 3 */
  0x00, 0x00, 0x00,  //... 
  0x46, 0xf2, 0x1e,  //+@. 
  0xee, 0xea, 0x00,  //@@. 
  0x62, 0x36, 0x00,  //+.. 
  0x62, 0x36, 0x00,  //+.. 
  0x62, 0x36, 0x00,  //+.. 
  0x00, 0x00, 0x00,  //... 
  0x00, 0x00, 0x00,  //... 


  /*Unicode: U+0067 (g) , Width: 4 */
  0x00, 0x00, 0x00, 0x00,  //.... 
  0x00, 0x00, 0x00, 0x00,  //.... 
  0x3a, 0xea, 0xa2, 0x6a,  //.@%+ 
  0xa2, 0x22, 0x62, 0x6a,  //%.++ 
  0xa6, 0x20, 0x60, 0x6a,  //%.++ 
  0x42, 0xec, 0xff, 0x62,  //+@@+ 
  0x68, 0xea, 0xcc, 0x18,  //+@@. 
  0x00, 0x00, 0x00, 0x00,  //.... 


  /*Unicode: U+0068 (h) , Width: 4 */
  0x00, 0x00, 0x00, 0x00,  //.... 
  0x86, 0x12, 0x00, 0x00,  //%... 
  0x86, 0xa4, 0xe4, 0x28,  //%%@. 
  0x86, 0x4a, 0x5c, 0x68,  //%+++ 
  0x86, 0x12, 0x32, 0x6a,  //%..+ 
  0x86, 0x12, 0x32, 0x6a,  //%..+ 
  0x00, 0x00, 0x00, 0x00,  //.... 
  0x00, 0x00, 0x00, 0x00,  //.... 


  /*Unicode: U+0069 (i) , Width: 2 */
  0x00, 0x00,  //.. 
  0x86, 0x12,  //%. 
  0x86, 0x12,  //%. 
  0x86, 0x12,  //%. 
  0x86, 0x12,  //%. 
  0x86, 0x12,  //%. 
  0x00, 0x00,  //.. 
  0x00, 0x00,  //.. 


  /*Unicode: U+006a (j) , Width: 2 */
  0x00, 0x00,  //.. 
  0x8a, 0x12,  //%. 
  0x8a, 0x12,  //%. 
  0x8a, 0x12,  //%. 
  0x8a, 0x12,  //%. 
  0x94, 0x12,  //%. 
  0xde, 0x02,  //@. 
  0x00, 0x00,  //.. 


  /*Unicode: U+006b (k) , Width: 4 */
  0x00, 0x00, 0x00, 0x00,  //.... 
  0x86, 0x12, 0x00, 0x00,  //%... 
  0x86, 0x28, 0xa6, 0x0c,  //%.%. 
  0x86, 0xd6, 0x20, 0x00,  //%@.. 
  0x86, 0x54, 0x86, 0x00,  //%+%. 
  0x86, 0x12, 0x8e, 0x2c,  //%.%. 
  0x00, 0x00, 0x00, 0x00,  //.... 
  0x00, 0x00, 0x00, 0x00,  //.... 


  /*Unicode: U+006c (l) , Width: 2 */
  0x00, 0x00,  //.. 
  0x8a, 0x0e,  //%. 
  0x8a, 0x0e,  //%. 
  0x8a, 0x0e,  //%. 
  0x8a, 0x0e,  //%. 
  0x8a, 0x0e,  //%. 
  0x00, 0x00,  //.. 
  0x00, 0x00,  //.. 


  /*Unicode: U+006d (m) , Width: 6 */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  //...... 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  //...... 
  0x86, 0x9e, 0xcc, 0x80, 0xea, 0x28,  //%%@%@. 
  0x86, 0x4a, 0x7e, 0x6c, 0x54, 0x5c,  //%+++++ 
  0x86, 0x12, 0x5e, 0x3a, 0x3a, 0x5e,  //%.+..+ 
  0x86, 0x12, 0x5e, 0x3a, 0x3a, 0x5e,  //%.+..+ 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  //...... 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  //...... 


  /*Unicode: U+006e (n) , Width: 4 */
  0x00, 0x00, 0x00, 0x00,  //.... 
  0x00, 0x00, 0x00, 0x00,  //.... 
  0x86, 0xcc, 0xe6, 0x28,  //%@@. 
  0x86, 0x4c, 0x56, 0x64,  //%+++ 
  0x86, 0x12, 0x32, 0x66,  //%..+ 
  0x86, 0x12, 0x32, 0x66,  //%..+ 
  0x00, 0x00, 0x00, 0x00,  //.... 
  0x00, 0x00, 0x00, 0x00,  //.... 


  /*Unicode: U+006f (o) , Width: 4 */
  0x00, 0x00, 0x00, 0x00,  //.... 
  0x00, 0x00, 0x00, 0x00,  //.... 
  0x3a, 0xe6, 0xd8, 0x26,  //.@@. 
  0xa2, 0x26, 0x3e, 0x90,  //%..% 
  0xa4, 0x26, 0x3e, 0x92,  //%..% 
  0x3c, 0xe4, 0xd4, 0x22,  //.@@. 
  0x00, 0x00, 0x00, 0x00,  //.... 
  0x00, 0x00, 0x00, 0x00,  //.... 


  /*Unicode: U+0070 (p) , Width: 4 */
  0x00, 0x00, 0x00, 0x00,  //.... 
  0x00, 0x00, 0x00, 0x00,  //.... 
  0x86, 0xa4, 0xda, 0x20,  //%%@. 
  0x86, 0x3a, 0x3e, 0x84,  //%..% 
  0x86, 0x3a, 0x3e, 0x80,  //%..% 
  0x86, 0xb2, 0xd4, 0x1c,  //%%@. 
  0x86, 0x12, 0x00, 0x00,  //%... 
  0x00, 0x00, 0x00, 0x00,  //.... 


  /*Unicode: U+0071 (q) , Width: 4 */
  0x00, 0x00, 0x00, 0x00,  //.... 
  0x00, 0x00, 0x00, 0x00,  //.... 
  0x3c, 0xe6, 0xa8, 0x62,  //.@%+ 
  0x9e, 0x24, 0x5e, 0x62,  //%.++ 
  0x9e, 0x26, 0x5e, 0x62,  //%.++ 
  0x36, 0xe6, 0xb4, 0x62,  //.@%+ 
  0x00, 0x00, 0x36, 0x62,  //...+ 
  0x00, 0x00, 0x00, 0x00,  //.... 


  /*Unicode: U+0072 (r) , Width: 3 */
  0x00, 0x00, 0x00,  //... 
  0x00, 0x00, 0x00,  //... 
  0x8a, 0xbc, 0x4a,  //%%+ 
  0x8a, 0x3c, 0x06,  //%.. 
  0x8a, 0x0e, 0x00,  //%.. 
  0x8a, 0x0e, 0x00,  //%.. 
  0x00, 0x00, 0x00,  //... 
  0x00, 0x00, 0x00,  //... 


  /*Unicode: U+0073 (s) , Width: 4 */
  0x00, 0x00, 0x00, 0x00,  //.... 
  0x00, 0x00, 0x00, 0x00,  //.... 
  0x5e, 0xf2, 0xbe, 0x00,  //+@%. 
  0x94, 0xac, 0x54, 0x00,  //%%+. 
  0x0a, 0x68, 0xd0, 0x26,  //.+@. 
  0x6c, 0xf4, 0xc0, 0x06,  //+@@. 
  0x00, 0x00, 0x00, 0x00,  //.... 
  0x00, 0x00, 0x00, 0x00,  //.... 


  /*Unicode: U+0074 (t) , Width: 2 */
  0x04, 0x08,  //.. 
  0x68, 0x2e,  //+. 
  0xde, 0xce,  //@@ 
  0x6a, 0x2e,  //+. 
  0x6a, 0x36,  //+. 
  0x4e, 0xd0,  //+@ 
  0x00, 0x00,  //.. 
  0x00, 0x00,  //.. 


  /*Unicode: U+0075 (u) , Width: 4 */
  0x00, 0x00, 0x00, 0x00,  //.... 
  0x00, 0x00, 0x00, 0x00,  //.... 
  0x8a, 0x0e, 0x36, 0x62,  //%..+ 
  0x8a, 0x0e, 0x36, 0x62,  //%..+ 
  0x88, 0x30, 0x70, 0x62,  //%.++ 
  0x44, 0xee, 0xa0, 0x62,  //+@%+ 
  0x00, 0x00, 0x00, 0x00,  //.... 
  0x00, 0x00, 0x00, 0x00,  //.... 


  /*Unicode: U+0076 (v) , Width: 4 */
  0x00, 0x00, 0x00, 0x00,  //.... 
  0x00, 0x00, 0x00, 0x00,  //.... 
  0x9e, 0x00, 0x60, 0x3e,  //%.+. 
  0x64, 0x38, 0x9a, 0x00,  //+.%. 
  0x10, 0x92, 0x86, 0x00,  //.%%. 
  0x00, 0xb0, 0x36, 0x00,  //.%.. 
  0x00, 0x00, 0x00, 0x00,  //.... 
  0x00, 0x00, 0x00, 0x00,  //.... 


  /*Unicode: U+0077 (w) , Width: 5 */
  0x00, 0x00, 0x00, 0x00, 0x00,  //..... 
  0x00, 0x00, 0x00, 0x00, 0x00,  //..... 
  0x9e, 0x00, 0xc4, 0x00, 0x92,  //%.@.% 
  0x8a, 0x28, 0xa4, 0x2e, 0x84,  //%.%.% 
  0x4a, 0x9c, 0x3c, 0x98, 0x46,  //+%.%+ 
  0x0a, 0xd6, 0x00, 0xca, 0x08,  //.@.@. 
  0x00, 0x00, 0x00, 0x00, 0x00,  //..... 
  0x00, 0x00, 0x00, 0x00, 0x00,  //..... 


  /*Unicode: U+0078 (x) , Width: 4 */
  0x00, 0x00, 0x00, 0x00,  //.... 
  0x00, 0x00, 0x00, 0x00,  //.... 
  0x84, 0x2a, 0x94, 0x18,  //%.%. 
  0x08, 0xb8, 0x66, 0x00,  //.%+. 
  0x12, 0xc4, 0x7e, 0x00,  //.@+. 
  0x98, 0x26, 0x9a, 0x28,  //%.%. 
  0x00, 0x00, 0x00, 0x00,  //.... 
  0x00, 0x00, 0x00, 0x00,  //.... 


  /*Unicode: U+0079 (y) , Width: 4 */
  0x00, 0x00, 0x00, 0x00,  //.... 
  0x00, 0x00, 0x00, 0x00,  //.... 
  0x9a, 0x04, 0x54, 0x42,  //%.++ 
  0x40, 0x48, 0x8e, 0x02,  //++%. 
  0x00, 0x78, 0x86, 0x00,  //.+%. 
  0x02, 0xac, 0x3e, 0x00,  //.%.. 
  0x90, 0xb4, 0x00, 0x00,  //%%.. 
  0x00, 0x00, 0x00, 0x00,  //.... 


  /*Unicode: U+007a (z) , Width: 4 */
  0x00, 0x00, 0x00, 0x00,  //.... 
  0x00, 0x00, 0x00, 0x00,  //.... 
  0xb6, 0xff, 0xff, 0x36,  //%@@. 
  0x00, 0x32, 0x7e, 0x00,  //..+. 
  0x44, 0x8a, 0x00, 0x00,  //+%.. 
  0xda, 0xff, 0xff, 0x56,  //@@@+ 
  0x00, 0x00, 0x00, 0x00,  //.... 
  0x00, 0x00, 0x00, 0x00,  //.... 


  /*Unicode: U+007b ({) , Width: 3 */
  0x00, 0x00, 0x00,  //... 
  0x08, 0xe8, 0x2a,  //.@. 
  0x32, 0x84, 0x00,  //.%. 
  0xc6, 0x2c, 0x00,  //@.. 
  0x3c, 0x6e, 0x00,  //.+. 
  0x16, 0x88, 0x00,  //.%. 
  0x04, 0xdc, 0x2a,  //.@. 
  0x00, 0x00, 0x00,  //... 


  /*Unicode: U+007c (|) , Width: 2 */
  0x00, 0x00,  //.. 
  0x5a, 0x2a,  //+. 
  0x5a, 0x2a,  //+. 
  0x5a, 0x2a,  //+. 
  0x5a, 0x2a,  //+. 
  0x5a, 0x2a,  //+. 
  0x5a, 0x2a,  //+. 
  0x5a, 0x2a,  //+. 


  /*Unicode: U+007d (}) , Width: 3 */
  0x00, 0x00, 0x00,  //... 
  0xd0, 0x46, 0x00,  //@+. 
  0x26, 0x84, 0x00,  //.%. 
  0x00, 0xcc, 0x22,  //.@. 
  0x16, 0x90, 0x00,  //.%. 
  0x32, 0x6a, 0x00,  //.+. 
  0xd0, 0x3c, 0x00,  //@.. 
  0x00, 0x00, 0x00,  //... 


  /*Unicode: U+007e (~) , Width: 4 */
  0x00, 0x00, 0x00, 0x00,  //.... 
  0x00, 0x00, 0x00, 0x00,  //.... 
  0x00, 0x00, 0x00, 0x00,  //.... 
  0x62, 0xde, 0x3a, 0x50,  //+@.+ 
  0x4c, 0x2e, 0xd8, 0x7a,  //+.@+ 
  0x00, 0x00, 0x00, 0x00,  //.... 
  0x00, 0x00, 0x00, 0x00,  //.... 
  0x00, 0x00, 0x00, 0x00,  //.... 


};


/*Store the glyph descriptions*/
static const lv_font_glyph_dsc_t arial.c_glyph_dsc[] = 
{
  {.w_px = 3,	.glyph_index = 0},	/*Unicode: U+0020 ( )*/
  {.w_px = 2,	.glyph_index = 24},	/*Unicode: U+0021 (!)*/
  {.w_px = 3,	.glyph_index = 40},	/*Unicode: U+0022 (")*/
  {.w_px = 4,	.glyph_index = 64},	/*Unicode: U+0023 (#)*/
  {.w_px = 4,	.glyph_index = 96},	/*Unicode: U+0024 ($)*/
  {.w_px = 6,	.glyph_index = 128},	/*Unicode: U+0025 (%)*/
  {.w_px = 5,	.glyph_index = 176},	/*Unicode: U+0026 (&)*/
  {.w_px = 2,	.glyph_index = 216},	/*Unicode: U+0027 (')*/
  {.w_px = 2,	.glyph_index = 232},	/*Unicode: U+0028 (()*/
  {.w_px = 3,	.glyph_index = 248},	/*Unicode: U+0029 ())*/
  {.w_px = 3,	.glyph_index = 272},	/*Unicode: U+002a (*)*/
  {.w_px = 4,	.glyph_index = 296},	/*Unicode: U+002b (+)*/
  {.w_px = 2,	.glyph_index = 328},	/*Unicode: U+002c (,)*/
  {.w_px = 3,	.glyph_index = 344},	/*Unicode: U+002d (-)*/
  {.w_px = 2,	.glyph_index = 368},	/*Unicode: U+002e (.)*/
  {.w_px = 2,	.glyph_index = 384},	/*Unicode: U+002f (/)*/
  {.w_px = 4,	.glyph_index = 400},	/*Unicode: U+0030 (0)*/
  {.w_px = 3,	.glyph_index = 432},	/*Unicode: U+0031 (1)*/
  {.w_px = 4,	.glyph_index = 456},	/*Unicode: U+0032 (2)*/
  {.w_px = 4,	.glyph_index = 488},	/*Unicode: U+0033 (3)*/
  {.w_px = 4,	.glyph_index = 520},	/*Unicode: U+0034 (4)*/
  {.w_px = 4,	.glyph_index = 552},	/*Unicode: U+0035 (5)*/
  {.w_px = 4,	.glyph_index = 584},	/*Unicode: U+0036 (6)*/
  {.w_px = 4,	.glyph_index = 616},	/*Unicode: U+0037 (7)*/
  {.w_px = 4,	.glyph_index = 648},	/*Unicode: U+0038 (8)*/
  {.w_px = 4,	.glyph_index = 680},	/*Unicode: U+0039 (9)*/
  {.w_px = 2,	.glyph_index = 712},	/*Unicode: U+003a (:)*/
  {.w_px = 2,	.glyph_index = 728},	/*Unicode: U+003b (;)*/
  {.w_px = 4,	.glyph_index = 744},	/*Unicode: U+003c (<)*/
  {.w_px = 4,	.glyph_index = 776},	/*Unicode: U+003d (=)*/
  {.w_px = 4,	.glyph_index = 808},	/*Unicode: U+003e (>)*/
  {.w_px = 4,	.glyph_index = 840},	/*Unicode: U+003f (?)*/
  {.w_px = 7,	.glyph_index = 872},	/*Unicode: U+0040 (@)*/
  {.w_px = 5,	.glyph_index = 928},	/*Unicode: U+0041 (A)*/
  {.w_px = 5,	.glyph_index = 968},	/*Unicode: U+0042 (B)*/
  {.w_px = 5,	.glyph_index = 1008},	/*Unicode: U+0043 (C)*/
  {.w_px = 5,	.glyph_index = 1048},	/*Unicode: U+0044 (D)*/
  {.w_px = 5,	.glyph_index = 1088},	/*Unicode: U+0045 (E)*/
  {.w_px = 4,	.glyph_index = 1128},	/*Unicode: U+0046 (F)*/
  {.w_px = 5,	.glyph_index = 1160},	/*Unicode: U+0047 (G)*/
  {.w_px = 5,	.glyph_index = 1200},	/*Unicode: U+0048 (H)*/
  {.w_px = 2,	.glyph_index = 1240},	/*Unicode: U+0049 (I)*/
  {.w_px = 3,	.glyph_index = 1256},	/*Unicode: U+004a (J)*/
  {.w_px = 5,	.glyph_index = 1280},	/*Unicode: U+004b (K)*/
  {.w_px = 4,	.glyph_index = 1320},	/*Unicode: U+004c (L)*/
  {.w_px = 6,	.glyph_index = 1352},	/*Unicode: U+004d (M)*/
  {.w_px = 5,	.glyph_index = 1400},	/*Unicode: U+004e (N)*/
  {.w_px = 6,	.glyph_index = 1440},	/*Unicode: U+004f (O)*/
  {.w_px = 5,	.glyph_index = 1488},	/*Unicode: U+0050 (P)*/
  {.w_px = 6,	.glyph_index = 1528},	/*Unicode: U+0051 (Q)*/
  {.w_px = 5,	.glyph_index = 1576},	/*Unicode: U+0052 (R)*/
  {.w_px = 5,	.glyph_index = 1616},	/*Unicode: U+0053 (S)*/
  {.w_px = 5,	.glyph_index = 1656},	/*Unicode: U+0054 (T)*/
  {.w_px = 5,	.glyph_index = 1696},	/*Unicode: U+0055 (U)*/
  {.w_px = 5,	.glyph_index = 1736},	/*Unicode: U+0056 (V)*/
  {.w_px = 7,	.glyph_index = 1776},	/*Unicode: U+0057 (W)*/
  {.w_px = 5,	.glyph_index = 1832},	/*Unicode: U+0058 (X)*/
  {.w_px = 5,	.glyph_index = 1872},	/*Unicode: U+0059 (Y)*/
  {.w_px = 5,	.glyph_index = 1912},	/*Unicode: U+005a (Z)*/
  {.w_px = 2,	.glyph_index = 1952},	/*Unicode: U+005b ([)*/
  {.w_px = 2,	.glyph_index = 1968},	/*Unicode: U+005c (\)*/
  {.w_px = 2,	.glyph_index = 1984},	/*Unicode: U+005d (])*/
  {.w_px = 3,	.glyph_index = 2000},	/*Unicode: U+005e (^)*/
  {.w_px = 4,	.glyph_index = 2024},	/*Unicode: U+005f (_)*/
  {.w_px = 2,	.glyph_index = 2056},	/*Unicode: U+0060 (`)*/
  {.w_px = 4,	.glyph_index = 2072},	/*Unicode: U+0061 (a)*/
  {.w_px = 4,	.glyph_index = 2104},	/*Unicode: U+0062 (b)*/
  {.w_px = 4,	.glyph_index = 2136},	/*Unicode: U+0063 (c)*/
  {.w_px = 4,	.glyph_index = 2168},	/*Unicode: U+0064 (d)*/
  {.w_px = 4,	.glyph_index = 2200},	/*Unicode: U+0065 (e)*/
  {.w_px = 3,	.glyph_index = 2232},	/*Unicode: U+0066 (f)*/
  {.w_px = 4,	.glyph_index = 2256},	/*Unicode: U+0067 (g)*/
  {.w_px = 4,	.glyph_index = 2288},	/*Unicode: U+0068 (h)*/
  {.w_px = 2,	.glyph_index = 2320},	/*Unicode: U+0069 (i)*/
  {.w_px = 2,	.glyph_index = 2336},	/*Unicode: U+006a (j)*/
  {.w_px = 4,	.glyph_index = 2352},	/*Unicode: U+006b (k)*/
  {.w_px = 2,	.glyph_index = 2384},	/*Unicode: U+006c (l)*/
  {.w_px = 6,	.glyph_index = 2400},	/*Unicode: U+006d (m)*/
  {.w_px = 4,	.glyph_index = 2448},	/*Unicode: U+006e (n)*/
  {.w_px = 4,	.glyph_index = 2480},	/*Unicode: U+006f (o)*/
  {.w_px = 4,	.glyph_index = 2512},	/*Unicode: U+0070 (p)*/
  {.w_px = 4,	.glyph_index = 2544},	/*Unicode: U+0071 (q)*/
  {.w_px = 3,	.glyph_index = 2576},	/*Unicode: U+0072 (r)*/
  {.w_px = 4,	.glyph_index = 2600},	/*Unicode: U+0073 (s)*/
  {.w_px = 2,	.glyph_index = 2632},	/*Unicode: U+0074 (t)*/
  {.w_px = 4,	.glyph_index = 2648},	/*Unicode: U+0075 (u)*/
  {.w_px = 4,	.glyph_index = 2680},	/*Unicode: U+0076 (v)*/
  {.w_px = 5,	.glyph_index = 2712},	/*Unicode: U+0077 (w)*/
  {.w_px = 4,	.glyph_index = 2752},	/*Unicode: U+0078 (x)*/
  {.w_px = 4,	.glyph_index = 2784},	/*Unicode: U+0079 (y)*/
  {.w_px = 4,	.glyph_index = 2816},	/*Unicode: U+007a (z)*/
  {.w_px = 3,	.glyph_index = 2848},	/*Unicode: U+007b ({)*/
  {.w_px = 2,	.glyph_index = 2872},	/*Unicode: U+007c (|)*/
  {.w_px = 3,	.glyph_index = 2888},	/*Unicode: U+007d (})*/
  {.w_px = 4,	.glyph_index = 2912},	/*Unicode: U+007e (~)*/
};

lv_font_t arial.c = 
{
    .unicode_first = 32,	/*First Unicode letter in this font*/
    .unicode_last = 126,	/*Last Unicode letter in this font*/
    .h_px = 8,				/*Font height in pixels*/
    .glyph_bitmap = arial.c_glyph_bitmap,	/*Bitmap of glyphs*/
    .glyph_dsc = arial.c_glyph_dsc,		/*Description of glyphs*/
    .glyph_cnt = 95,			/*Number of glyphs in the font*/
    .unicode_list = NULL,	/*Every character in the font from 'unicode_first' to 'unicode_last'*/
    .get_bitmap = lv_font_get_bitmap_continuous,	/*Function pointer to get glyph's bitmap*/
    .get_width = lv_font_get_width_continuous,	/*Function pointer to get glyph's width*/
    .bpp = 8,				/*Bit per pixel*/
    .monospace = 0,				/*Fix width (0: if not used)*/
    .next_page = NULL,		/*Pointer to a font extension*/
};
