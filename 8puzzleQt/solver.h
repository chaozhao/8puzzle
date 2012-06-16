#ifndef SOLVER_H
#define SOLVER_H
#include "board.h"
#include <QStack>

class Solver
{
public:
    Solver(Board *aInitBoard, Board *aGoalBoard);
    unsigned getHeruistic(Board currentState);
    void solve();
    unsigned getRandDirection(unsigned seed);
    void push(Board aState);
    Board pop();
    Board top();
    bool isEmpty();
    unsigned getManhattanDistance(Dimension current,Dimension goal);
private:
    Board *goalState;
    Board *initState;
    QStack<Board> *fringe;
};

#endif // SOLVER_H
