/* Terminator - A simple terminal graphics system */
/* Standard includes */
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <pthread.h>
//mine
#include "timing.h"
#include "screen.h"
#include "engine.h"

/* Rendering */
void render() {
    if (screen.frames[render_index].state == RENDER) {
        /*
            if(render_index & 1){
                clean_square(&screen.frames[render_index], 10, 10, 40, 20, ' ');
            }
            else {
                draw_pixel(&screen.frames[render_index], 20, 20, 'x');
            }
            */
        screen.frames[render_index].state = IO;
        render_index = (render_index + 1) % num_frames;
    }
}

/* Main entry point */
int main() {
    engine_init();
    return 0;
}
