#include "figure.h"

Figure::Figure(QVector<QString> figure, QChar color):
    _figure(figure),
    _color(color)
{
    this->_height = this->_figure.length();
    this->_width = this->_figure[0].length();

    foreach(QString row, this->_figure)
    {
        for(unsigned int i = 0; i < this->_width; i++)
            if (row[i] == 'x')
                row[i] = color;
    }
}

void Figure::rotateLeft()
{
    QVector<QString> temp;
    for(unsigned int i = 0; i < this->_width; i++)
    {
        QString row;
        foreach(QString column, this->_figure)
        {
            row = row + column[i];
        }
        temp.push_back(row);
    }
    this->_height = temp.length();
    this->_width = temp[0].length();
    this->_figure = temp;
}

void Figure::rotateRight()
{
    QVector<QString> temp;
    for(unsigned int i = 0; i < this->_width; i++)
    {
        QString row;
        foreach(QString column, this->_figure)
        {
            row = row + column[i];
        }
        temp.push_front(row);
    }
    this->_height = temp.length();
    this->_width = temp[0].length();
    this->_figure = temp;
}

void Figure::mirror()
{
    foreach(QString row, this->_figure)
    {
        QString t;
        for(unsigned int i = 0; i < this->_width; i++)
        {
            t = row[i] + t;
        }
        row = t;
    }
}

QVector<QString> Figure::get()
{
    return this->_figure;
}

QChar Figure::color()
{
    return this->_color;
}

unsigned int Figure::width()
{
    return this->_width;
}

unsigned int Figure::height()
{
    return this->_height;
}

