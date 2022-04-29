#include "qtetrismainwindow.h"
#include "ui_qtetrismainwindow.h"

QTetrisMainWindow::QTetrisMainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::QTetrisMainWindow)
{
    ui->setupUi(this);
}

QTetrisMainWindow::~QTetrisMainWindow()
{
    delete ui;
}

