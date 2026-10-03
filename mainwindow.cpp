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
