#include "renderer.h"

#include <QString>
#include <raylib.h>

void Renderer::RunRaylibWindow() {
    InitWindow(600, 400, "TD Test");
    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RED);
        EndDrawing();
    }

    CloseWindow();
}

void Renderer::LoadImage(QString imagePath) {
    Image LoadImage(const char *imagePath);
}
