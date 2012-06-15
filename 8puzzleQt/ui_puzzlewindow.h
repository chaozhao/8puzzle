/********************************************************************************
** Form generated from reading UI file 'puzzlewindow.ui'
**
** Created: Fri 15. Jun 23:44:57 2012
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
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PuzzleWindow
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *PuzzleWindow)
    {
        if (PuzzleWindow->objectName().isEmpty())
            PuzzleWindow->setObjectName(QString::fromUtf8("PuzzleWindow"));
        PuzzleWindow->resize(400, 300);
        menuBar = new QMenuBar(PuzzleWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        PuzzleWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(PuzzleWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        PuzzleWindow->addToolBar(mainToolBar);
        centralWidget = new QWidget(PuzzleWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        PuzzleWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(PuzzleWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        PuzzleWindow->setStatusBar(statusBar);

        retranslateUi(PuzzleWindow);

        QMetaObject::connectSlotsByName(PuzzleWindow);
    } // setupUi

    void retranslateUi(QMainWindow *PuzzleWindow)
    {
        PuzzleWindow->setWindowTitle(QApplication::translate("PuzzleWindow", "PuzzleWindow", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PuzzleWindow: public Ui_PuzzleWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PUZZLEWINDOW_H
