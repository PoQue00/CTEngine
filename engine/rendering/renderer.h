#include <QString>

#ifndef ENGINE_H
#define ENGINE_H

class Renderer {
public:
    void RunRaylibWindow();
    void DrawFrame();
    // ===============================================
    // Unused functions that are no longer used, but kept for reference in case you (me) want to use them in the future.
    // ===============================================
    // void LoadImage(QString imagePath);
    // void DrawImage(const QString& imagePath, int x, int y);
    // void UnloadImage(const QString& imagePath);
    // void LoadDrawUnloadImage(const QString& imagePath, int x, int y);
    // void YuiText();
    // ===============================================
    // End of unused functions
    // ===============================================
};

#endif // ENGINE_H