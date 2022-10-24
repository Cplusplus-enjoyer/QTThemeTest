#include "stdafx.h"
#include "QTThemeTest.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // set stylesheet
    QFile styleSheetFile("./SpyBot.qss");
    styleSheetFile.open(QFile::ReadOnly);
    QString styleSheet = QLatin1String(styleSheetFile.readAll());
    a.setStyleSheet(styleSheet);

    QTThemeTest w;
    w.show();
    return a.exec();
}
