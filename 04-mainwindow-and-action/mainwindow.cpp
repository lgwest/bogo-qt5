#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
	connect(ui->actionNew_Window, SIGNAL())
}

MainWindow::~MainWindow()
{
    delete ui;
}
