#ifndef QCONTROLWIDGET_H
#define QCONTROLWIDGET_H

#include <QWidget>

namespace Ui {
class QControlWidget;
}

class QControlWidget : public QWidget
{
    Q_OBJECT

public:
    explicit QControlWidget(QWidget *parent = nullptr);
    ~QControlWidget();

private:
    Ui::QControlWidget *ui;
};

#endif // QCONTROLWIDGET_H
