#ifndef DEF_DRAW_H
#define DEF_DRAW_H

/* Drawing-specific defines */

#include "Def_gen.h"
#include "Def_vid.h"

#if SCREEN_WIDTH == 320
#define SET_PIXEL(x,y,color) screen_buf[(((y)<<8)+((y)<<6)) + (x)] = color
#else
#define SET_PIXEL(x,y,color) screen_buf[(y) * SCREEN_WIDTH + (x)] = color
#endif /* DEF_DRAW_H */

// Unchained mode sets 4 pixels at a time, therefore horizontal sizes need to be divided by 4
#define PADDLE_HEIGHT_DRAW  40
#define PADDLE_WIDTH_DRAW   2
#define BALL_HEIGHT_DRAW  8
#define BALL_WIDTH_DRAW  2

#endif /* DEF_DRAW_H */
