#ifndef FIGURE_H
#define FIGURE_H

#include <QVector>

/*
 * Объект этого класса представляет собой фигуру, которая выдается в тетрисе
 * Каждая фигура определяется прямоугольником width x height квадратов
 * Часть квадратов, соответствующих фигуре, закрашены каким то кодом цвета
 * Любая фигура умеет поворачиваться влево, вправо и делать свою зеркальное отображени относительно вертикали
 */

class Figure
{
public:
    Figure(QVector<QString>, QChar);

    void rotateLeft();
    void rotateRight();
    void mirror();
    QVector<QString> get();
    QChar color();
    unsigned int width();
    unsigned int height();

private:
    unsigned int _width;
    unsigned int _height;
    QVector<QString> _figure;
    QChar _color;
};

#endif // FIGURE_H
