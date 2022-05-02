#include "qgamewidget.h"
#include "ui_qgamewidget.h"

QGameWidget::QGameWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::QGameWidget)
{
    ui->setupUi(this);
}

QGameWidget::~QGameWidget()
{
    delete ui;
}
