#include <QtGui/QApplication>
#include "puzzlewindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PuzzleWindow w;
    w.show();
    
    return a.exec();
}
