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
    Image image = ::LoadImage(imagePath.toStdString().c_str());
}

void Renderer::DrawImage(const QString& imagePath, int x, int y) {
    Texture2D texture = LoadTexture(imagePath.toStdString().c_str());
    DrawTexture(texture, x, y, WHITE);
}

void Renderer::UnloadImage(const QString& imagePath) {
    Texture2D texture = LoadTexture(imagePath.toStdString().c_str());
    UnloadTexture(texture);
}

void Renderer::LoadDrawUnloadImage(const QString& imagePath, int x, int y) {
    LoadImage(imagePath);
    DrawImage(imagePath, x, y);
    UnloadImage(imagePath);
}

void Renderer::YuiText() {
    DrawText("Yui ", 0, 0, 20, BLACK);
}