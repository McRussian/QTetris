#ifndef QTETRISMAINWINDOW_H
#define QTETRISMAINWINDOW_H

#include <QMainWindow>

#include "gui/qgamewidget.h"
#include "gui/qcontrolwidget.h"

QT_BEGIN_NAMESPACE
namespace Ui { class QTetrisMainWindow; }
QT_END_NAMESPACE

class QTetrisMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    QTetrisMainWindow(QWidget *parent = nullptr);
    ~QTetrisMainWindow();

private:
    Ui::QTetrisMainWindow *ui;
    QGameWidget* _wd_game;
    QControlWidget* _wd_control;

};
#endif // QTETRISMAINWINDOW_H
