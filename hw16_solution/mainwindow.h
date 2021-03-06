#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFont>
#include "alexlineedit.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    int getFont(QString size);
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void actByYourChange(QObject*);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
