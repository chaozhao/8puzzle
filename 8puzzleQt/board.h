#ifndef BOARD_H
#define BOARD_H
#include "tile.h"
#include "dimension.h"

class Board
{
public:
    Board();
    Board(const Board *aBoard);
    ~Board();
    void moveUp();
    void moveRight();
    void moveDown();
    void moveLeft();
    Board move(unsigned);
    void setInitState();
    void setGoalState();
private:
    //private function
    Dimension findEmptyTile();
    void swapTiles();
private:
     Tile **tiles;
};

#endif // BOARD_H
