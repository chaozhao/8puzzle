#include "search.h"
#include <QDebug>

Search::Search(Board initBoard, Board goalBoard)
{

}

unsigned Search::getHeruistic(Board aState)
{
    return 0;
}


void Search::solve()
{
    Board currentState;

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


