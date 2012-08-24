#ifndef SOLVER_H
#define SOLVER_H
#include "board.h"
#include <QLinkedList>

class Solver
{
public:
    Solver(Board *aInitBoard, Board *aGoalState);
    unsigned getHeruistic(Board currentState);
    void solve();
    unsigned getRandDirection(unsigned seed);
    void push_back(Board aState);
    Board last();
    bool isEmpty();
    unsigned getManhattanDistance(Dimension current,Dimension goal);
private:
    Board *goalState;
    Board *initState;
    QLinkedList<Board> *open;
    QLinkedList<Board> *close;
};

#endif // SOLVER_H
