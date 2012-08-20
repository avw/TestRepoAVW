//!  A test class.  /*!   A more elaborate class description. */
#include "mainwindow.h"
#include "ui_mainwindow.h"

/*
  Constructor
  Some explanetion about constructor here
  */
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

/**
  Destructor
  Some explanation here
  */
MainWindow::~MainWindow()
{
    delete ui;
}
