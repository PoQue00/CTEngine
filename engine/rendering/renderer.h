#include <QString>

#ifndef ENGINE_H
#define ENGINE_H

class Renderer {
public:
    void RunRaylibWindow();
    void LoadImage(QString imagePath);
    void DrawImage(const QString& imagePath, int x, int y);
    void UnloadImage(const QString& imagePath);
    void LoadDrawUnloadImage(const QString& imagePath, int x, int y);
    void YuiText();
};

#endif // ENGINE_H