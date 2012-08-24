/********************************************************************************
** Form generated from reading UI file 'puzzlewindow.ui'
**
** Created: Sat 16. Jun 18:50:21 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PUZZLEWINDOW_H
#define UI_PUZZLEWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PuzzleWindow
{
public:
    QAction *actionNew_Game;
    QAction *actionPause;
    QAction *actionStop_Game;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuGame;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *PuzzleWindow)
    {
        if (PuzzleWindow->objectName().isEmpty())
            PuzzleWindow->setObjectName(QString::fromUtf8("PuzzleWindow"));
        PuzzleWindow->resize(400, 300);
        actionNew_Game = new QAction(PuzzleWindow);
        actionNew_Game->setObjectName(QString::fromUtf8("actionNew_Game"));
        actionPause = new QAction(PuzzleWindow);
        actionPause->setObjectName(QString::fromUtf8("actionPause"));
        actionStop_Game = new QAction(PuzzleWindow);
        actionStop_Game->setObjectName(QString::fromUtf8("actionStop_Game"));
        centralWidget = new QWidget(PuzzleWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        PuzzleWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(PuzzleWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 21));
        menuGame = new QMenu(menuBar);
        menuGame->setObjectName(QString::fromUtf8("menuGame"));
        PuzzleWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(PuzzleWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        PuzzleWindow->setStatusBar(statusBar);

        menuBar->addAction(menuGame->menuAction());
        menuGame->addAction(actionNew_Game);
        menuGame->addAction(actionPause);
        menuGame->addAction(actionStop_Game);

        retranslateUi(PuzzleWindow);

        QMetaObject::connectSlotsByName(PuzzleWindow);
    } // setupUi

    void retranslateUi(QMainWindow *PuzzleWindow)
    {
        PuzzleWindow->setWindowTitle(QApplication::translate("PuzzleWindow", "PuzzleWindow", 0, QApplication::UnicodeUTF8));
        actionNew_Game->setText(QApplication::translate("PuzzleWindow", "New Game", 0, QApplication::UnicodeUTF8));
        actionPause->setText(QApplication::translate("PuzzleWindow", "Pause", 0, QApplication::UnicodeUTF8));
        actionStop_Game->setText(QApplication::translate("PuzzleWindow", "Stop Game", 0, QApplication::UnicodeUTF8));
        menuGame->setTitle(QApplication::translate("PuzzleWindow", "Game", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PuzzleWindow: public Ui_PuzzleWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PUZZLEWINDOW_H
