#ifndef MAINWINDOW_H
#define MAINWINDOW_H

/// needed cause this class inherits from QMainWindow
#include <QMainWindow>

// \class MainWindow Aaaaa shorttttt description of the class MainWindow. 001
/*
  \class MainWindow
  A detailed description of the class is written here. 002
  */

/// short description of the namespace
/**
  extended description of the namespace
  */
namespace Ui {
/// A short description of the class MainWindow. blaaaaaaaaaaa
// NOT RECOGNIZED
/**
  A detailed description of the class is written here. more blaaaaaaaaaa
    NOT RECOGNIZED
  */
    class MainWindow;
}

/*
The above code has to do with the namespaces of a generated Qt class.
Writing comment here without the \class comment, results in documentation about the namespace Ui.
The \class MainWindow can be written anywhere and will resutl in the documentation of that class
The other comment is not recognized and is NOT the comment for the class MainWindow

the comments below (WRITTEN JUST ABOVE THE class KEYWORD will result in the brief descrition of the class ///
and the extended description /** ...
  */

/// A short description of the class MainWindow. 0033
/**
  A detailed description of the class is written here. 0044
  */
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
