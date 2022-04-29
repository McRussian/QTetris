#ifndef QTETRISMAINWINDOW_H
#define QTETRISMAINWINDOW_H

#include <QMainWindow>

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
};
#endif // QTETRISMAINWINDOW_H
