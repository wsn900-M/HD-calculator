
#include <tamtypes.h>
#include <kernel.h>
#include <sifrpc.h>
#include <loadfile.h>
#include <stdio.h>

#include "input/controller.h"
#include "ui/renderer.h"
#include "database/game_db.h"

int running = 1;

int main(int argc, char *argv[])
{
    printf("NovaLauncher v0.5 starting...\n");

    controller_init();
    renderer_init();
    game_db_load("games.db");

    while(running)
    {
        controller_update();
        renderer_draw();
    }

    return 0;
}
