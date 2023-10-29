#ifndef VIDEO_H
#define VIDEO_H

#include "Def_vid.h"
#include "Incl_std.h"

void setVideoMode(uint8_t mode);
void setUnchainedMode();
void clearScreen(uint8_t color);
void pageFlip(unsigned int *page1, unsigned int *page2);
void render(uint8_t color);

#endif /* VIDEO_H */
