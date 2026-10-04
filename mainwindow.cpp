#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <raylib.h>

// ================================================
// Include the necessary headers for custom features
// ================================================
#include "engine/rendering/renderer.h"
#include "engine/input/input.h"
// =================================================


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
    // CTEInput unload;
    // unload.unloadKey(KEY_U);
}

void MainWindow::on_startButton_clicked()
{
    Renderer renderEngine;
    Renderer drawFrame;
    renderEngine.RunRaylibWindow();
}

// ingore the below code, it is not used anymore, but I will keep it here for reference in case you want to use it in the future :)
// void MainWindow::on_yuiButton_clicked()
// {
//     Renderer imageYui;
//     imageYui.LoadDrawUnloadImage("C:/Users/Gavin/OneDrive/Documents/cpp/Projects/Custos-Turris-Engine/engine/assets/yui.png", 100, 100);
// }

// Yui Image Path:
// C:/Users/Gavin/OneDrive/Documents/cpp/Projects/Custos-Turris-Engine/engine/assets/yui.png

// void MainWindow::on_yuiComboBox_currentTextChanged(const QString &arg1)
// {
//     if(arg1 == "Load To ram") {
//         Renderer imageYui;
//         imageYui.LoadImage("C:/Users/Gavin/OneDrive/Documents/cpp/Projects/Custos-Turris-Engine/engine/assets/yui.png");
//     } else if(arg1 == "Draw To screen") {
//         Renderer imageYui;
//         imageYui.DrawImage("C:/Users/Gavin/OneDrive/Documents/cpp/Projects/Custos-Turris-Engine/engine/assets/yui.png", 100, 100);
//     } else if(arg1 == "Unload From ram") {
//         Renderer imageYui;
//         imageYui.UnloadImage("C:/Users/Gavin/OneDrive/Documents/cpp/Projects/Custos-Turris-Engine/engine/assets/yui.png");
//     } else if(arg1 == "Load Draw Unload") {
//         Renderer imageYui;
//         imageYui.LoadDrawUnloadImage("C:/Users/Gavin/OneDrive/Documents/cpp/Projects/Custos-Turris-Engine/engine/assets/yui.png", 100, 100);
//     }
// }


// void MainWindow::on_pushButton_clicked()
// {
//     Renderer text;
//     text.YuiText();
// }


// void MainWindow::on_imageButton_clicked()
// {
//     Renderer imageYui;
//     imageYui.LoadDrawUnloadImage("C:/Users/Gavin/OneDrive/Documents/cpp/Projects/Custos-Turris-Engine/engine/assets/yui.png", 0, 0);
// }


void MainWindow::on_yuiButton_clicked()
{
    while (!WindowShouldClose()){
        Renderer imageYui;
        imageYui.DrawFrame();
    }
    
}

