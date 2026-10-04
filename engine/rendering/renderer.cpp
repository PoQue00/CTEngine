#include <QString>
#include <raylib.h>
#include <raymath.h>

// ================================================
// Include the necessary headers for custom features
// ================================================
#include "renderer.h"
// ================================================
// End of includes
// ================================================

void CTERenderer::UpdateFrame() {
    InitWindow(800, 600, "TD Test");
    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        EndDrawing();
    }

    CloseWindow();
}

void CTERenderer::abort() {
    CloseWindow();
}



// ================================================
// Old rendering functions that are no longer used, but kept for reference in case you (me) want to use them in the future.
// ===============================================
//
// void Renderer::RunRaylibWindow() {
//     InitWindow(426, 862, "TD Test");
//     SetTargetFPS(60);

//     while (!WindowShouldClose()) {
//         BeginDrawing();
//         ClearBackground(RED);
//         EndDrawing();
//     }

//     CloseWindow();
// }
//
// void Renderer::LoadImage(QString imagePath) {
//     while (!WindowShouldClose()) {
//         BeginDrawing();
//         Image image = ::LoadImage(imagePath.toStdString().c_str());
//         EndDrawing();
//     }
// }

// void Renderer::DrawImage(const QString& imagePath, int x, int y) {
//     while (!WindowShouldClose()) {
//         BeginDrawing();
//         Texture2D texture = LoadTexture(imagePath.toStdString().c_str());
//         DrawTexture(texture, x, y, WHITE);
//         EndDrawing();
//     }
// }

// void Renderer::UnloadImage(const QString& imagePath) {
//     while (!WindowShouldClose()) {
//         BeginDrawing();
//         Texture2D texture = LoadTexture(imagePath.toStdString().c_str());
//         UnloadTexture(texture);
//         EndDrawing();
//     }
// }

// void Renderer::LoadDrawUnloadImage(const QString& imagePath, int x, int y) {
//     while (!WindowShouldClose()) {
//         BeginDrawing();
//         DrawImage(imagePath, x, y);
//         EndDrawing();
//     }
// }

// void Renderer::YuiText() {
//     while (!WindowShouldClose()) {
//         BeginDrawing();
//         DrawText("Lottie Dimmer ) ", 0, 0, 20, BLACK);
//         EndDrawing();
//     }
// }
//
// void Renderer::DrawFrame() {
//     InitWindow(426, 862, "TD Test");
//     SetTargetFPS(60);

//     const char* texturePath = TextFormat("%sengine/assets/yui.png", GetApplicationDirectory());
//     const Texture2D yuiTexture = LoadTexture(texturePath);
//     if (!IsTextureValid(yuiTexture)) {
//         TraceLog(LOG_ERROR, "Failed to load texture: %s", texturePath);
//         CloseWindow();
//         return;
//     }

//     while (!WindowShouldClose()) {
//         BeginDrawing();
//         ClearBackground(RAYWHITE);
//         DrawTexture(yuiTexture, 0, 0, WHITE);
//         DrawText("YuiTexture", 0, 0, 20, BLACK);
//         EndDrawing();
//     }

//     UnloadTexture(yuiTexture);
//     CloseWindow();
// }
//
// ===============================================
// End of old rendering functions
// ===============================================