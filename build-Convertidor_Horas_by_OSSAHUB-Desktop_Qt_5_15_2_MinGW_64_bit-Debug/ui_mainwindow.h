/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *datos;
    QLabel *resultado;
    QPushButton *convertir;
    QLabel *label_4;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(736, 390);
        MainWindow->setCursor(QCursor(Qt::ArrowCursor));
        MainWindow->setToolButtonStyle(Qt::ToolButtonIconOnly);
        MainWindow->setAnimated(true);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, -30, 681, 141));
        QFont font;
        font.setFamily(QString::fromUtf8("Burbank Big Cd Bd"));
        font.setPointSize(24);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(220, 330, 251, 16));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(240, 310, 211, 16));
        datos = new QLineEdit(centralwidget);
        datos->setObjectName(QString::fromUtf8("datos"));
        datos->setGeometry(QRect(130, 120, 461, 31));
        resultado = new QLabel(centralwidget);
        resultado->setObjectName(QString::fromUtf8("resultado"));
        resultado->setGeometry(QRect(210, 230, 511, 61));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Burbank Big Cd Bd"));
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setWeight(75);
        resultado->setFont(font1);
        convertir = new QPushButton(centralwidget);
        convertir->setObjectName(QString::fromUtf8("convertir"));
        convertir->setGeometry(QRect(280, 190, 151, 41));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(260, 350, 181, 16));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Convertidor Horas By OSSAHUB", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Escribe el tiempo que deseas convertir expresado en segundos", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Creado por OSSAHUB. Discord: mrOSSA.HUB#0001", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Copyright MultiDev - MultiBots & MultiPana", nullptr));
        resultado->setText(QString());
        convertir->setText(QCoreApplication::translate("MainWindow", "Convertir", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Mi primera app programada en C++", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
