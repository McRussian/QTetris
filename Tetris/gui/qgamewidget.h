#ifndef QGAMEWIDGET_H
#define QGAMEWIDGET_H

#include <QWidget>

namespace Ui {
class QGameWidget;
}

class QGameWidget : public QWidget
{
    Q_OBJECT

public:
    explicit QGameWidget(QWidget *parent = nullptr);
    ~QGameWidget();

private:
    Ui::QGameWidget *ui;
};

#endif // QGAMEWIDGET_H
