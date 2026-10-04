#pragma once

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
    class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_startButton_clicked();

    void on_yuiComboBox_currentTextChanged(const QString &arg1);

    void on_pushButton_clicked();

    void on_imageButton_clicked();

    void on_yuiButton_clicked();

private:
    Ui::MainWindow *ui;
};
