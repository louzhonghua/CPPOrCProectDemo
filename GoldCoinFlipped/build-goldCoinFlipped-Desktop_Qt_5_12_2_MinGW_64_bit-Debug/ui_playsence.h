/********************************************************************************
** Form generated from reading UI file 'playsence.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAYSENCE_H
#define UI_PLAYSENCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PlaySence
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *PlaySence)
    {
        if (PlaySence->objectName().isEmpty())
            PlaySence->setObjectName(QString::fromUtf8("PlaySence"));
        PlaySence->resize(320, 588);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(PlaySence->sizePolicy().hasHeightForWidth());
        PlaySence->setSizePolicy(sizePolicy);
        PlaySence->setMinimumSize(QSize(320, 588));
        PlaySence->setMaximumSize(QSize(320, 588));
        centralwidget = new QWidget(PlaySence);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        PlaySence->setCentralWidget(centralwidget);
        menubar = new QMenuBar(PlaySence);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 320, 23));
        PlaySence->setMenuBar(menubar);
        statusbar = new QStatusBar(PlaySence);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        PlaySence->setStatusBar(statusbar);

        retranslateUi(PlaySence);

        QMetaObject::connectSlotsByName(PlaySence);
    } // setupUi

    void retranslateUi(QMainWindow *PlaySence)
    {
        PlaySence->setWindowTitle(QApplication::translate("PlaySence", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PlaySence: public Ui_PlaySence {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAYSENCE_H
