/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionLogout;
    QAction *actionExit;
    QAction *actionReadStudent;
    QAction *actionReadTeacher;
    QAction *actionReadCourse;
    QAction *actionReadStudy;
    QAction *actionReadTeach;
    QAction *actionAverageScore;
    QAction *actionPassingRate;
    QAction *actionStandardDeviation;
    QAction *actionReadDatabase;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuManageAccount;
    QMenu *menuManageFile;
    QMenu *menuManageGrade;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 300);
        actionLogout = new QAction(MainWindow);
        actionLogout->setObjectName(QStringLiteral("actionLogout"));
        actionLogout->setEnabled(false);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionReadStudent = new QAction(MainWindow);
        actionReadStudent->setObjectName(QStringLiteral("actionReadStudent"));
        actionReadStudent->setEnabled(false);
        actionReadTeacher = new QAction(MainWindow);
        actionReadTeacher->setObjectName(QStringLiteral("actionReadTeacher"));
        actionReadTeacher->setEnabled(false);
        actionReadCourse = new QAction(MainWindow);
        actionReadCourse->setObjectName(QStringLiteral("actionReadCourse"));
        actionReadCourse->setEnabled(false);
        actionReadStudy = new QAction(MainWindow);
        actionReadStudy->setObjectName(QStringLiteral("actionReadStudy"));
        actionReadStudy->setEnabled(false);
        actionReadTeach = new QAction(MainWindow);
        actionReadTeach->setObjectName(QStringLiteral("actionReadTeach"));
        actionReadTeach->setEnabled(false);
        actionAverageScore = new QAction(MainWindow);
        actionAverageScore->setObjectName(QStringLiteral("actionAverageScore"));
        actionAverageScore->setEnabled(false);
        actionPassingRate = new QAction(MainWindow);
        actionPassingRate->setObjectName(QStringLiteral("actionPassingRate"));
        actionPassingRate->setEnabled(false);
        actionStandardDeviation = new QAction(MainWindow);
        actionStandardDeviation->setObjectName(QStringLiteral("actionStandardDeviation"));
        actionStandardDeviation->setEnabled(false);
        actionReadDatabase = new QAction(MainWindow);
        actionReadDatabase->setObjectName(QStringLiteral("actionReadDatabase"));
        actionReadDatabase->setEnabled(false);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 22));
        menuManageAccount = new QMenu(menuBar);
        menuManageAccount->setObjectName(QStringLiteral("menuManageAccount"));
        menuManageFile = new QMenu(menuBar);
        menuManageFile->setObjectName(QStringLiteral("menuManageFile"));
        menuManageGrade = new QMenu(menuBar);
        menuManageGrade->setObjectName(QStringLiteral("menuManageGrade"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuManageAccount->menuAction());
        menuBar->addAction(menuManageFile->menuAction());
        menuBar->addAction(menuManageGrade->menuAction());
        menuManageAccount->addAction(actionLogout);
        menuManageAccount->addAction(actionExit);
        menuManageFile->addAction(actionReadStudent);
        menuManageFile->addAction(actionReadTeacher);
        menuManageFile->addAction(actionReadCourse);
        menuManageFile->addSeparator();
        menuManageFile->addAction(actionReadStudy);
        menuManageFile->addAction(actionReadTeach);
        menuManageFile->addSeparator();
        menuManageFile->addAction(actionReadDatabase);
        menuManageGrade->addAction(actionAverageScore);
        menuManageGrade->addAction(actionPassingRate);
        menuManageGrade->addAction(actionStandardDeviation);
        menuManageGrade->addSeparator();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\345\255\246\347\224\237\346\210\220\347\273\251\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        actionLogout->setText(QApplication::translate("MainWindow", "\346\263\250\351\224\200", nullptr));
        actionExit->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272\347\250\213\345\272\217", nullptr));
        actionReadStudent->setText(QApplication::translate("MainWindow", "\350\257\273\345\217\226\345\255\246\347\224\237\344\277\241\346\201\257", nullptr));
        actionReadTeacher->setText(QApplication::translate("MainWindow", "\350\257\273\345\217\226\346\225\231\345\270\210\344\277\241\346\201\257", nullptr));
        actionReadCourse->setText(QApplication::translate("MainWindow", "\350\257\273\345\217\226\350\257\276\347\250\213\344\277\241\346\201\257", nullptr));
        actionReadStudy->setText(QApplication::translate("MainWindow", "\350\257\273\345\217\226\351\200\211\350\257\276\344\277\241\346\201\257", nullptr));
        actionReadTeach->setText(QApplication::translate("MainWindow", "\350\257\273\345\217\226\346\225\231\345\255\246\344\277\241\346\201\257", nullptr));
        actionAverageScore->setText(QApplication::translate("MainWindow", "\345\271\263\345\235\207\345\210\206", nullptr));
        actionPassingRate->setText(QApplication::translate("MainWindow", "\351\200\232\350\277\207\347\216\207", nullptr));
        actionStandardDeviation->setText(QApplication::translate("MainWindow", "\346\240\207\345\207\206\345\267\256", nullptr));
        actionReadDatabase->setText(QApplication::translate("MainWindow", "\350\257\273\345\217\226\346\225\260\346\215\256\345\272\223", nullptr));
        menuManageAccount->setTitle(QApplication::translate("MainWindow", "\350\264\246\345\217\267\347\256\241\347\220\206", nullptr));
        menuManageFile->setTitle(QApplication::translate("MainWindow", "\346\226\207\344\273\266\347\256\241\347\220\206", nullptr));
        menuManageGrade->setTitle(QApplication::translate("MainWindow", "\346\210\220\347\273\251\347\273\237\350\256\241", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
