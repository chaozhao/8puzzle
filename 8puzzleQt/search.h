#ifndef SEARCH_H
#define SEARCH_H
#include "board.h"
#include <QStack>


class Search
{
public:
    Search(Board initState, Board goalState);
    unsigned getHeruistic(Board aState);
    void solve();
    unsigned getRandDirection(unsigned seed);
    void push(Board aState);
    Board pop();
    Board top();
    bool isEmpty();

private:
    Board *goalState;
    Board *initState;
    QStack<Board> *fringe;

};

#endif // SEARCH_H
