#include "qcontrolwidget.h"
#include "ui_qcontrolwidget.h"

QControlWidget::QControlWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::QControlWidget)
{
    ui->setupUi(this);
}

QControlWidget::~QControlWidget()
{
    delete ui;
}
