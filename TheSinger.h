#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_TheSinger.h"

class TheSinger : public QMainWindow
{
    Q_OBJECT

public:
    TheSinger(QWidget *parent = nullptr);
    ~TheSinger();

private:
    Ui::TheSingerClass ui;
};
