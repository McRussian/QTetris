#include "qtetrismainwindow.h"
#include "ui_qtetrismainwindow.h"

QTetrisMainWindow::QTetrisMainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::QTetrisMainWindow)
{
    ui->setupUi(this);
    this->_wd_game = new QGameWidget(this);
    this->_wd_game->move(5, 40);

    this->_wd_control = new QControlWidget(this);
    this->_wd_control->move(260, 40);

}

QTetrisMainWindow::~QTetrisMainWindow()
{
    delete ui;
}

