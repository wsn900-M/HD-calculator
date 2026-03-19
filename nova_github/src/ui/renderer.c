
#include <stdio.h>
#include "renderer.h"

// Placeholder renderer until gsKit integration

void renderer_init()
{
    printf("Renderer initialized (v0.5)\n");
}

void draw_background()
{
    printf("Draw background\n");
}

void draw_rows()
{
    printf("Draw cover rows\n");
}

void draw_highlight()
{
    printf("Draw highlight box\n");
}

void draw_metadata()
{
    printf("Draw metadata panel\n");
}

void renderer_draw()
{
    draw_background();
    draw_rows();
    draw_highlight();
    draw_metadata();
}
