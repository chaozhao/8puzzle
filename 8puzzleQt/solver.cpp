#include "solver.h"
#include <QDebug>
#include <QQueue>
#include <stdlib.h>

#define ROWS 3
#define COLS 3

Solver::Solver(Board *aInitState, Board *aGoalBoard)
{
    initState = aInitState;
    goalState = aGoalBoard;
}

unsigned Solver::getHeruistic(Board currentState)
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


void Solver::solve()
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

unsigned Solver::getRandDirection(unsigned seed)
{
    qsrand(seed);
    return qrand() % ((3 + 1) - 0) + 0;
}

void Solver::push(Board aState)
{
    fringe->push(aState);
}

Board Solver::pop()
{
    return fringe->pop();
}

Board Solver::top()
{
    return fringe->top();
}

bool Solver::isEmpty()
{
    return fringe->isEmpty();
}

unsigned Solver::getManhattanDistance(Dimension current, Dimension goal)
{
    return abs(current.getRow()-goal.getRow())+abs(current.getCol()-goal.getCol());
}


