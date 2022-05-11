#ifndef GAMECONTROLLER_H
#define GAMECONTROLLER_H

#include <QObject>
#include <QVector>
#include <QMap>

#include "game/figure.h"
#include "game/gamefield.h"

class GameController
{
    Q_OBJECT
public:
    GameController();
    ~GameController();

    QMap<QChar, QString> getColors();
    QVector<QString> getField();
    void createGame(unsigned int, unsigned int);

private:
    void _initFigures();
    void _initColors();
    Figure _createRandomFigure();

private:
    unsigned int _game_width;
    unsigned int _game_height;
    QVector<QVector<QString>> _patterns;
    QMap<QChar, QString> _colors;
    GameField* _game_field;
};

#endif // GAMECONTROLLER_H
