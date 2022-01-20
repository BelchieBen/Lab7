#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_lab7.h"

class Lab7 : public QMainWindow
{
    Q_OBJECT

public:
    Lab7(QWidget *parent = Q_NULLPTR);

private:
    Ui::Lab7Class ui;
};
