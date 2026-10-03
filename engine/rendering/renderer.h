#include <QString>

#ifndef ENGINE_H
#define ENGINE_H

class Renderer {
public:
    void RunRaylibWindow();
    void LoadImage(QString imagePath);
};

#endif // ENGINE_H