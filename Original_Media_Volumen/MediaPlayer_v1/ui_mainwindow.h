/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *widget;
    QGridLayout *gridLayout;
    QToolButton *fileButton;
    QPushButton *num_1;
    QPushButton *num_2;
    QPushButton *num_3;
    QPushButton *emergencia;
    QSlider *volumeSlider;
    QPushButton *num_4;
    QPushButton *num_5;
    QPushButton *num_6;
    QPushButton *redial;
    QPushButton *num_7;
    QPushButton *num_8;
    QPushButton *num_9;
    QPushButton *subir;
    QPushButton *star;
    QPushButton *num_0;
    QPushButton *numeral;
    QPushButton *bajar;
    QLineEdit *fileEdit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(412, 267);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(11, 14, 372, 151));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        fileButton = new QToolButton(widget);
        fileButton->setObjectName(QStringLiteral("fileButton"));

        gridLayout->addWidget(fileButton, 1, 0, 1, 1);

        num_1 = new QPushButton(widget);
        num_1->setObjectName(QStringLiteral("num_1"));

        gridLayout->addWidget(num_1, 1, 1, 1, 1);

        num_2 = new QPushButton(widget);
        num_2->setObjectName(QStringLiteral("num_2"));

        gridLayout->addWidget(num_2, 1, 2, 1, 1);

        num_3 = new QPushButton(widget);
        num_3->setObjectName(QStringLiteral("num_3"));

        gridLayout->addWidget(num_3, 1, 3, 1, 1);

        emergencia = new QPushButton(widget);
        emergencia->setObjectName(QStringLiteral("emergencia"));

        gridLayout->addWidget(emergencia, 1, 4, 1, 1);

        volumeSlider = new QSlider(widget);
        volumeSlider->setObjectName(QStringLiteral("volumeSlider"));
        volumeSlider->setMaximum(50);
        volumeSlider->setOrientation(Qt::Vertical);
        volumeSlider->setTickPosition(QSlider::TicksBothSides);

        gridLayout->addWidget(volumeSlider, 2, 0, 3, 1);

        num_4 = new QPushButton(widget);
        num_4->setObjectName(QStringLiteral("num_4"));

        gridLayout->addWidget(num_4, 2, 1, 1, 1);

        num_5 = new QPushButton(widget);
        num_5->setObjectName(QStringLiteral("num_5"));

        gridLayout->addWidget(num_5, 2, 2, 1, 1);

        num_6 = new QPushButton(widget);
        num_6->setObjectName(QStringLiteral("num_6"));

        gridLayout->addWidget(num_6, 2, 3, 1, 1);

        redial = new QPushButton(widget);
        redial->setObjectName(QStringLiteral("redial"));

        gridLayout->addWidget(redial, 2, 4, 1, 1);

        num_7 = new QPushButton(widget);
        num_7->setObjectName(QStringLiteral("num_7"));

        gridLayout->addWidget(num_7, 3, 1, 1, 1);

        num_8 = new QPushButton(widget);
        num_8->setObjectName(QStringLiteral("num_8"));

        gridLayout->addWidget(num_8, 3, 2, 1, 1);

        num_9 = new QPushButton(widget);
        num_9->setObjectName(QStringLiteral("num_9"));

        gridLayout->addWidget(num_9, 3, 3, 1, 1);

        subir = new QPushButton(widget);
        subir->setObjectName(QStringLiteral("subir"));

        gridLayout->addWidget(subir, 3, 4, 1, 1);

        star = new QPushButton(widget);
        star->setObjectName(QStringLiteral("star"));

        gridLayout->addWidget(star, 4, 1, 1, 1);

        num_0 = new QPushButton(widget);
        num_0->setObjectName(QStringLiteral("num_0"));

        gridLayout->addWidget(num_0, 4, 2, 1, 1);

        numeral = new QPushButton(widget);
        numeral->setObjectName(QStringLiteral("numeral"));

        gridLayout->addWidget(numeral, 4, 3, 1, 1);

        bajar = new QPushButton(widget);
        bajar->setObjectName(QStringLiteral("bajar"));

        gridLayout->addWidget(bajar, 4, 4, 1, 1);

        fileEdit = new QLineEdit(widget);
        fileEdit->setObjectName(QStringLiteral("fileEdit"));

        gridLayout->addWidget(fileEdit, 0, 0, 1, 5);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 412, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        fileButton->setText(QApplication::translate("MainWindow", "...", Q_NULLPTR));
        num_1->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        num_2->setText(QApplication::translate("MainWindow", "2", Q_NULLPTR));
        num_3->setText(QApplication::translate("MainWindow", "3", Q_NULLPTR));
        emergencia->setText(QApplication::translate("MainWindow", "A", Q_NULLPTR));
        num_4->setText(QApplication::translate("MainWindow", "4", Q_NULLPTR));
        num_5->setText(QApplication::translate("MainWindow", "5", Q_NULLPTR));
        num_6->setText(QApplication::translate("MainWindow", "6", Q_NULLPTR));
        redial->setText(QApplication::translate("MainWindow", "B", Q_NULLPTR));
        num_7->setText(QApplication::translate("MainWindow", "7", Q_NULLPTR));
        num_8->setText(QApplication::translate("MainWindow", "8", Q_NULLPTR));
        num_9->setText(QApplication::translate("MainWindow", "9", Q_NULLPTR));
        subir->setText(QApplication::translate("MainWindow", "C", Q_NULLPTR));
        star->setText(QApplication::translate("MainWindow", "*", Q_NULLPTR));
        num_0->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        numeral->setText(QApplication::translate("MainWindow", "#", Q_NULLPTR));
        bajar->setText(QApplication::translate("MainWindow", "D", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
