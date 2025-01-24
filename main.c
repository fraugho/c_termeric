/* Termeric - A simple terminal graphics engine */
#include <stdbool.h>
#include "engine.h"
#include "input.h"

/* Rendering */
void render() {
    if(get_key() == CTRL_KEY('q')){
        engine_close();
    }
}

/* Main entry point */
int main() {
    engine_init();
    //engine_benchmark(1000);
    return 0;
}
