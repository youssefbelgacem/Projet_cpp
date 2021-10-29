#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    //test pour git
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
