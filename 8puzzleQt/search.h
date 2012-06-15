#ifndef SEARCH_H
#define SEARCH_H
#include "board.h"
#include <QStack>

class Search
{
public:
    Search(Board initBoard, Board goalBoard);
    unsigned findNumberofMisplaceTile();
    void solve();
private:
    Board *goalBoard;
    Board *initBoard;
    QStack<Board> fringe;

};

#endif // SEARCH_H
