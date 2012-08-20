/// main.cpp 01 Brief description of the entire project comes here.
    // THIS DOES NOT WORK. It's just all in the project description. There is no distinction between brief and extended
/**
  main.cpp 02 lets write stuff here, will it appear in the project description??
    YEP, but only cause of the 'backslash mainpage' that's somewhere in this comment block. Omitting this will not include this comment block in doxygen


\mainpage

SO:
To write the project description, you must include the 'backslash mainpage' command ANYWHERE in the comment block
AND ANYWHERE in the project. It doesnt have to be in the main.cpp at the top.
If you have more than one 'backslash mainpage', only 1 will be the project descripton (the last one red I think will be the project description)
  */

#include <QtGui/QApplication>
#include "mainwindow.h"

/**
  Is this a description for the main function.
  NOOOO. The main.cpp is not included in the doxygen documentation. Only the text at the top is includes cause of the 'backslash mainpage'.
  */
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
