#include <raylib.h>

void Input::renderKey(char renderKey) {
    DrawText(&renderKey, 10, 10, 20, WHITE);
}