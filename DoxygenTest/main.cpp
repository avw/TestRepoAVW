/**
  lets write stuff here, will it appear in the project description??

\mainpage
maybe when we use this command?

Yep, so to write comment for the project description, you need to write it in the file with the main function
  */

#include <QtGui/QApplication>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
