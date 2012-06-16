#include "search.h"
#include <QDebug>
#include <QQueue>
#include <stdlib.h>

#define ROWS 3
#define COLS 3

Search::Search(Board initBoard, Board goalBoard)
{

}

unsigned Search::getHeruistic(Board currentState)
{
    unsigned misplacedTiles = 0;
    unsigned sumManhattanDistance = 0;
    Dimension goalLocation;
    Dimension currentLocation;

    Tile **currentTiles = currentState.getTiles();
    Tile **goalTiles = goalState->getTiles();

    for( unsigned i = 0 ; i < ROWS ; i++ )
    {
        for( unsigned j=0;j<COLS;j++)
        {
            if(currentTiles[i][j].getNumber() != goalTiles[i][j].getNumber())
            {
                misplacedTiles++;
            }
        }
    }

    for( unsigned i = 0 ; i < ROWS ; i++ )
    {
        for( unsigned j=0;j<COLS;j++)
        {
            if(currentTiles[i][j].getNumber()!= 0)
            {
               currentLocation.setValues(i,j);
               for( unsigned x = 0 ; x < ROWS ; x++ )
               {
                   for( unsigned y=0;y<COLS;y++)
                   {
                       if(goalTiles[x][y].getNumber()== currentTiles[x][y].getNumber())
                       {
                           goalLocation.setValues(x,y);
                       }
                   }
               }
            sumManhattanDistance += getManhattanDistance(currentLocation,goalLocation);
            }
        }
    }


    return misplacedTiles+sumManhattanDistance;
}


void Search::solve()
{
    Board currentState;
    QQueue<Board> children;
    push(initState);
    while(!isEmpty())
    {
        currentState = pop();

        //get all child
        //analyse best state by heruistic
        //push best node to fringe
    }

}

unsigned Search::getRandDirection(unsigned seed)
{
    qsrand(seed);
    return qrand() % ((3 + 1) - 0) + 0;
}

void Search::push(Board aState)
{
    fringe->push(aState);
}

Board Search::pop()
{
    return fringe->pop();
}

Board Search::top()
{
    return fringe->top();
}

bool Search::isEmpty()
{
    return fringe->isEmpty();
}

unsigned Search::getManhattanDistance(Dimension current, Dimension goal)
{
    return abs(current.getRow()-goal.getRow())+abs(current.getCol()-goal.getCol());
}


