#include "renderer.h"

#include <QString>
#include <raylib.h>

void Renderer::RunRaylibWindow() {
    InitWindow(426, 862, "TD Test");
    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RED);
        EndDrawing();
    }

    CloseWindow();
}

void Renderer::LoadImage(QString imagePath) {
    while (!WindowShouldClose()) {
        BeginDrawing();
        Image image = ::LoadImage(imagePath.toStdString().c_str());
        EndDrawing();
    }
}

void Renderer::DrawImage(const QString& imagePath, int x, int y) {
    while (!WindowShouldClose()) {
        BeginDrawing();
        Texture2D texture = LoadTexture(imagePath.toStdString().c_str());
        DrawTexture(texture, x, y, WHITE);
        EndDrawing();
    }
}

void Renderer::UnloadImage(const QString& imagePath) {
    while (!WindowShouldClose()) {
        BeginDrawing();
        Texture2D texture = LoadTexture(imagePath.toStdString().c_str());
        UnloadTexture(texture);
        EndDrawing();
    }
}

void Renderer::LoadDrawUnloadImage(const QString& imagePath, int x, int y) {
    while (!WindowShouldClose()) {
        BeginDrawing();
        DrawImage(imagePath, x, y);
        EndDrawing();
    }
}

void Renderer::YuiText() {
    while (!WindowShouldClose()) {
        BeginDrawing();
        DrawText("Lottie Dimmer ) ", 0, 0, 20, BLACK);
        EndDrawing();
    }
}