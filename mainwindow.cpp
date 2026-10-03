#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "engine/rendering/renderer.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_startButton_clicked()
{
    Renderer renderEngine;
    renderEngine.RunRaylibWindow();
}


// void MainWindow::on_yuiButton_clicked()
// {
//     Renderer imageYui;
//     imageYui.LoadDrawUnloadImage("C:/Users/Gavin/OneDrive/Documents/cpp/Projects/Custos-Turris-Engine/engine/assets/yui.png", 100, 100);
// }

// Yui Image Path:
// C:/Users/Gavin/OneDrive/Documents/cpp/Projects/Custos-Turris-Engine/engine/assets/yui.png

void MainWindow::on_yuiComboBox_currentTextChanged(const QString &arg1)
{
    if(arg1 == "Load To ram") {
        Renderer imageYui;
        imageYui.LoadImage("C:/Users/Gavin/OneDrive/Documents/cpp/Projects/Custos-Turris-Engine/engine/assets/yui.png");
    } else if(arg1 == "Draw To screen") {
        Renderer imageYui;
        imageYui.DrawImage("C:/Users/Gavin/OneDrive/Documents/cpp/Projects/Custos-Turris-Engine/engine/assets/yui.png", 100, 100);
    } else if(arg1 == "Unload From ram") {
        Renderer imageYui;
        imageYui.UnloadImage("C:/Users/Gavin/OneDrive/Documents/cpp/Projects/Custos-Turris-Engine/engine/assets/yui.png");
    } else if(arg1 == "Load Draw Unload") {
        Renderer imageYui;
        imageYui.LoadDrawUnloadImage("C:/Users/Gavin/OneDrive/Documents/cpp/Projects/Custos-Turris-Engine/engine/assets/yui.png", 100, 100);
    }
}

