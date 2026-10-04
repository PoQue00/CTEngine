#include <QString>

#ifndef CTE_RENDERER_H
#define CTE_RENDERER_H

class CTERenderer {
public:
    void UpdateFrame();
    void abort();
    // ===============================================
    // Unused functions that are no longer used, but kept for reference in case you (me) want to use them in the future.
    // ===============================================
    // void RunRaylibWindow();
    // void DrawFrame();
    // void LoadImage(QString imagePath);
    // void DrawImage(const QString& imagePath, int x, int y);
    // void UnloadImage(const QString& imagePath);
    // void LoadDrawUnloadImage(const QString& imagePath, int x, int y);
    // void YuiText();
    // ===============================================
    // End of unused functions
    // ===============================================
};

#endif // CTE_RENDERER_H