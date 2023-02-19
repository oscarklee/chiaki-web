#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <lib.h>

#include "discoverymanager.h"
#include "host.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
};
#endif // MAINWINDOW_H
