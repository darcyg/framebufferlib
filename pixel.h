/********************************************************
 * @author  Airead Fan <fgh1987168@gmail.com>		*
 * @date    2011 9月 04 21:03:11 CST			*
 ********************************************************
 *		after studying C 48 days		*
 *		after studying APUE 13 days		*
 ********************************************************/

#ifndef FB_PIXEL
#define FB_PIXEL

#include "framebuffer.h"

typedef unsigned long COLOR_32;	/* 0x0f0f0f0f: transp, red, green, blue*/

typedef struct point{
	int x;
	int y;
	COLOR_32 color;
}FB_POINT;

int fb_set_pixel(FB_POINT *point, int x, int y, COLOR_32 color);
int fb_draw_pixel(struct framebuffer *fbp, FB_POINT *point);
unsigned long formatRGB(unsigned char red, unsigned char green, unsigned char blue);

#endif
