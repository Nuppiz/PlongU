#include "Incl_std.h"
#include "Video.h"

/* Video mode functions */

uint8_t *VGA=(uint8_t *)0xA0000000L;        /* this points to video memory. */
unsigned int visible_page = 0;
unsigned int non_visible_page = SCREEN_SIZE / 4;

void setVideoMode(uint8_t mode)
{
    union REGS regs;

    regs.h.ah = SET_MODE;
    regs.h.al = mode;
    int86(VIDEO_INT, &regs, &regs);
}

void setUnchainedMode()
{
    uint16_t i;
    uint32_t *ptr=(uint32_t *)VGA;            /* used for faster screen clearing */

    outp(SC_INDEX, MEMORY_MODE);       /* turn off chain-4 mode */
    outp(SC_DATA, 0x06);

    outp(SC_INDEX, ALL_PLANES);        /* set map mask to all 4 planes */

    for(i = 0; i < 0x4000; i++)               /* clear all 256K of memory */
        *ptr++ = 0;

    outp(CRTC_INDEX, UNDERLINE_LOCATION);/* turn off long mode */
    outp(CRTC_DATA, 0x00);

    outp(CRTC_INDEX, MODE_CONTROL);      /* turn on byte mode */
    outp(CRTC_DATA, 0xe3);
}

void clearScreen(uint8_t color)
{
    outpw(SC_INDEX, ALL_PLANES);
    memset(&VGA[non_visible_page], color, SCREEN_SIZE / 4);
}

void pageFlip(unsigned int* page1, unsigned int* page2)
{
    unsigned int temp;
    unsigned int high_address, low_address;

    temp = *page1;
    *page1 = *page2;
    *page2 = temp;

    high_address = HIGH_ADDRESS | (*page1 & 0xFF00);
    low_address = LOW_ADDRESS | (*page1 << 8);

    while( inp(INPUT_STATUS_1) & DISPLAY_ENABLE );
    outport( CRTC_INDEX, high_address );
    outport( CRTC_INDEX, low_address );
    while( !(inp(INPUT_STATUS_1) & VRETRACE ) );
}

void render(uint8_t color)
{
    pageFlip(&visible_page, &non_visible_page);
    clearScreen(color);
}