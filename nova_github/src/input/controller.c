
#include <pad.h>
#include <stdio.h>
#include "controller.h"

#define PAD_PORT 0
#define PAD_SLOT 0

static unsigned char padBuf[256] __attribute__((aligned(64)));

void controller_init()
{
    padInit(0);
    padPortOpen(PAD_PORT, PAD_SLOT, padBuf);
}

void controller_update()
{
    struct padButtonStatus buttons;

    if(padRead(PAD_PORT, PAD_SLOT, &buttons) != 0)
    {
        unsigned short btns = ~buttons.btns;

        if(btns & PAD_LEFT)  printf("LEFT\n");
        if(btns & PAD_RIGHT) printf("RIGHT\n");
        if(btns & PAD_UP)    printf("UP\n");
        if(btns & PAD_DOWN)  printf("DOWN\n");

        if(btns & PAD_CROSS) printf("LAUNCH GAME\n");
    }
}
