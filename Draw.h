#ifndef DRAW_H
#define DRAW_H

void drawPixel(int x, int y, uint8_t color);
void drawField(uint8_t base_color, uint8_t line_color);
void drawRectangle(int x, int y, int w, int h, uint8_t color);
void redrawField(int x, int y, uint8_t redraw_type);
void drawLoop();

#endif /* DRAW_H */
