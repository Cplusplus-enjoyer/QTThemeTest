#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QTThemeTest.h"

class QTThemeTest : public QMainWindow
{
    Q_OBJECT

public:
    QTThemeTest(QWidget *parent = nullptr);
    ~QTThemeTest();

private:
    Ui::QTThemeTestClass ui;
};
