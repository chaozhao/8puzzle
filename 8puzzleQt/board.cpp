#include "board.h"
#include <QDebug>

#define ROWS 3
#define COLS 3

Board::Board()
{
    //memory allocated for elements of rows.
    tiles = new Tile *[ROWS] ;

    //memory allocated for  elements of each column.
    for( unsigned i = 0 ; i < ROWS ; i++ )
    {
        tiles[i] = new Tile[COLS];
    }
}

Board::Board(const Board *aBoard)
{

}

Board::~Board()
{
    //free the allocated memory
    if(sizeof(tiles)/sizeof(Tile))
    {
    for( unsigned i = 0 ; i < ROWS ; i++ )
    delete [] tiles[i] ;
    delete [] tiles ;
    qDebug()<<"delete";
    }
    else
    {
         qDebug()<<"delete";
    }
}

void Board::moveUp()
{
}

void Board::moveRight()
{
}

void Board::moveDown()
{
}

void Board::moveLeft()
{
}

Board Board::move(unsigned direction)
{
    Board returnBoard;
    switch(direction)
    {
      case 0:
        moveUp();
        break;
      case 1:
        moveRight();
        break;
      case 2:
        moveDown();
        break;
      case 3:
        moveLeft();
        break;
      default:
        qDebug()<<"Invalid input";
    }
    return returnBoard;
}

unsigned Board::getMoves(unsigned direction)
{

}

void Board::setInitState()
{
    unsigned num = 1;
    for( unsigned i = 0 ; i < ROWS ; i++ )
    {
        for( unsigned j=0;j<COLS;j++)
        {
             tiles[i][j].setNumber(num);
             num++;
        }
    }
}

void Board::setGoalState()
{
    unsigned num = 8;
    for( unsigned i = 0 ; i < ROWS ; i++ )
    {
        for( unsigned j=0;j<COLS;j++)
        {
             tiles[i][j].setNumber(num);
             num--;
        }

    }
}

Tile **Board::getTiles() const
{
    return tiles;
}
Dimension Board::findEmptyTile()
{
    Dimension emptyLocation;
    for( unsigned i = 0 ; i < ROWS ; i++ )
    {
        for( unsigned j=0;j<COLS;j++)
        {
             if(tiles[i][j].getNumber() == 0)
             {
                 emptyLocation.setValues(i,j);
                 break;
             }
        }
    }
    return emptyLocation;
}

