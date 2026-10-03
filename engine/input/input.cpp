#include <raylib.h>

#include "input.h"

void CTEInput::renderKey(char renderKey) {
    DrawText(&renderKey, 10, 10, 20, WHITE);
}