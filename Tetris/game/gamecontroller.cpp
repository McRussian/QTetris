#include "gamecontroller.h"

GameController::GameController()
{
    this->_initFigures();
    this->_initColors();
}

GameController::~GameController()
{
    delete this->_game_field;
}

QMap<QChar, QString> GameController::getColors()
{
    return this->_colors;
}

QVector<QString> GameController::getField()
{
    return this->_game_field->getField();
}

void GameController::createGame(unsigned int width, unsigned int height)
{
    this->_game_width = width;
    this->_game_height = height;
    this->_game_field = new GameField(width, height);
}

void GameController::_initFigures()
{
    QVector<QString> line;
    line.push_back(QString('x'));
    line.push_back(QString('x'));
    line.push_back(QString('x'));
    line.push_back(QString('x'));
    this->_patterns.push_back(line);

    QVector<QString> square;
    square.push_back(QString("xx"));
    square.push_back(QString("xx"));
    this->_patterns.push_back(square);

    QVector<QString> triangle;
    triangle.push_back(QString(" x "));
    triangle.push_back(QString("xxx"));
    this->_patterns.push_back(triangle);

    QVector<QString> table;
    table.push_back(QString("xxx"));
    table.push_back(QString("x x"));
    this->_patterns.push_back(table);

    QVector<QString> zigzag_l;
    zigzag_l.push_back(QString("xx "));
    zigzag_l.push_back(QString(" xx"));
    this->_patterns.push_back(zigzag_l);

    QVector<QString> zigzag_r;
    zigzag_r.push_back(QString(" xx"));
    zigzag_r.push_back(QString("xx "));
    this->_patterns.push_back(zigzag_r);

    QVector<QString> line_l;
    line_l.push_back(QString("x "));
    line_l.push_back(QString("x "));
    line_l.push_back(QString("xx"));

    QVector<QString> line_r;
    line_r.push_back(QString(" x"));
    line_r.push_back(QString(" x"));
    line_r.push_back(QString("xx"));
    this->_patterns.push_back(line_l);
    this->_patterns.push_back(line_r);

    QVector<QString> square_big;
    square_big.push_back(QString("xxx"));
    square_big.push_back(QString("xxx"));
    square_big.push_back(QString("xxx"));
    this->_patterns.push_back(square_big);

}

void GameController::_initColors()
{
    this->_colors['g'] = "#95FAC0";
    this->_colors['b'] = "#7DFBFB";
    this->_colors['p'] = "#EFB2FB";
    this->_colors['r'] = "#F7282B";
    this->_colors['d'] = "#9D9D9D";
    this->_colors['y'] = "#EBFB72";
}

Figure GameController::_createRandomFigure()
{

}
