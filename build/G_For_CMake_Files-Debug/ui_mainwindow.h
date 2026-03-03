/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen_File;
    QAction *actionExit;
    QAction *actionOpen_Folder;
    QWidget *centralwidget;
    QSlider *horizontalSlider;
    QLabel *lbl_music;
    QPushButton *pushButton_play;
    QPushButton *pushButton_replay;
    QSlider *horizontalSlider_AudioFile;
    QPushButton *pushButton_back_seek;
    QPushButton *pushButton_next_seek;
    QLabel *lbl_time_start;
    QLabel *lbl_time_end;
    QPushButton *pushButton_stop;
    QMenuBar *menubar;
    QMenu *menuOpen;
    QMenu *menuClose;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(730, 407);
        MainWindow->setMinimumSize(QSize(730, 407));
        MainWindow->setMaximumSize(QSize(730, 407));
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow\n"
"{\n"
"	background-rgb(52,51,64)\n"
"}"));
        actionOpen_File = new QAction(MainWindow);
        actionOpen_File->setObjectName("actionOpen_File");
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName("actionExit");
        actionOpen_Folder = new QAction(MainWindow);
        actionOpen_Folder->setObjectName("actionOpen_Folder");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalSlider = new QSlider(centralwidget);
        horizontalSlider->setObjectName("horizontalSlider");
        horizontalSlider->setGeometry(QRect(170, 270, 421, 20));
        horizontalSlider->setOrientation(Qt::Orientation::Horizontal);
        lbl_music = new QLabel(centralwidget);
        lbl_music->setObjectName("lbl_music");
        lbl_music->setGeometry(QRect(20, 77, 701, 41));
        QFont font;
        font.setPointSize(15);
        font.setItalic(true);
        lbl_music->setFont(font);
        lbl_music->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	border:2px solid rgb(255, 127, 80);\n"
"}"));
        lbl_music->setAlignment(Qt::AlignmentFlag::AlignCenter);
        pushButton_play = new QPushButton(centralwidget);
        pushButton_play->setObjectName("pushButton_play");
        pushButton_play->setGeometry(QRect(320, 200, 81, 31));
        pushButton_play->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	border:2px solid rgb(255, 127, 80);\n"
"}"));
        pushButton_replay = new QPushButton(centralwidget);
        pushButton_replay->setObjectName("pushButton_replay");
        pushButton_replay->setGeometry(QRect(420, 200, 91, 31));
        horizontalSlider_AudioFile = new QSlider(centralwidget);
        horizontalSlider_AudioFile->setObjectName("horizontalSlider_AudioFile");
        horizontalSlider_AudioFile->setGeometry(QRect(70, 140, 611, 31));
        horizontalSlider_AudioFile->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal\n"
"{\n"
"	height:10px;\n"
"	width:460px;\n"
"	background: rgb(255, 127, 80);\n"
"	border-radius:5px;\n"
"}\n"
"QSlider::handle:horizontal\n"
"{\n"
"	background:rgb(52,50,64);\n"
"	width:20px;\n"
"	height:20px;\n"
"	margin:-7px -7px\n"
"}\n"
""));
        horizontalSlider_AudioFile->setOrientation(Qt::Orientation::Horizontal);
        pushButton_back_seek = new QPushButton(centralwidget);
        pushButton_back_seek->setObjectName("pushButton_back_seek");
        pushButton_back_seek->setGeometry(QRect(110, 200, 91, 31));
        pushButton_next_seek = new QPushButton(centralwidget);
        pushButton_next_seek->setObjectName("pushButton_next_seek");
        pushButton_next_seek->setGeometry(QRect(540, 200, 91, 31));
        lbl_time_start = new QLabel(centralwidget);
        lbl_time_start->setObjectName("lbl_time_start");
        lbl_time_start->setGeometry(QRect(100, 150, 31, 16));
        lbl_time_end = new QLabel(centralwidget);
        lbl_time_end->setObjectName("lbl_time_end");
        lbl_time_end->setGeometry(QRect(620, 150, 58, 18));
        pushButton_stop = new QPushButton(centralwidget);
        pushButton_stop->setObjectName("pushButton_stop");
        pushButton_stop->setGeometry(QRect(220, 200, 81, 31));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 730, 23));
        menuOpen = new QMenu(menubar);
        menuOpen->setObjectName("menuOpen");
        menuClose = new QMenu(menubar);
        menuClose->setObjectName("menuClose");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuOpen->menuAction());
        menubar->addAction(menuClose->menuAction());
        menuOpen->addAction(actionOpen_File);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Sakamoto Player", nullptr));
        actionOpen_File->setText(QCoreApplication::translate("MainWindow", "Open File", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        actionOpen_Folder->setText(QCoreApplication::translate("MainWindow", "Open Folder", nullptr));
        lbl_music->setText(QCoreApplication::translate("MainWindow", "Music_name", nullptr));
        pushButton_play->setText(QCoreApplication::translate("MainWindow", "Play", nullptr));
        pushButton_replay->setText(QCoreApplication::translate("MainWindow", "Replay", nullptr));
        pushButton_back_seek->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        pushButton_next_seek->setText(QCoreApplication::translate("MainWindow", "Next", nullptr));
        lbl_time_start->setText(QCoreApplication::translate("MainWindow", "0:00", nullptr));
        lbl_time_end->setText(QCoreApplication::translate("MainWindow", "0:00", nullptr));
        pushButton_stop->setText(QCoreApplication::translate("MainWindow", "Pause", nullptr));
        menuOpen->setTitle(QCoreApplication::translate("MainWindow", "Open", nullptr));
        menuClose->setTitle(QCoreApplication::translate("MainWindow", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
