#include "include/graph/utils/window_manager.h"


void initialize() {
    window_init(WINDOW_WIDTH, WINDOW_WIDTH, TITLE);
    while(window_isOpen()){
        window_update();
    }
}