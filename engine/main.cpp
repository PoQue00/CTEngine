#include <raylib.h>

#include "main.h"

void RunRaylibWindow()
{
    InitWindow(800, 600, "TD Test");
    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RED);
        EndDrawing();
    }

    CloseWindow();
}