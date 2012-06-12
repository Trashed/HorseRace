/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Mon 11. Jun 21:51:57 2012
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
#include <QtGui/QStatusBar>
#include <QtGui/QTableWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QLineEdit *filenameField;
    QToolButton *openDirectoryButton;
    QPushButton *openFileButton;
    QGroupBox *groupBox_2;
    QTextEdit *userNotesField;
    QGroupBox *groupBox_3;
    QSpinBox *spinBox;
    QLabel *label;
    QPushButton *updateTableButton;
    QTableWidget *tableWidget;
    QGroupBox *groupBox_4;
    QTableWidget *tableWidget_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(919, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 271, 81));
        filenameField = new QLineEdit(groupBox);
        filenameField->setObjectName(QString::fromUtf8("filenameField"));
        filenameField->setGeometry(QRect(10, 20, 191, 20));
        filenameField->setReadOnly(true);
        openDirectoryButton = new QToolButton(groupBox);
        openDirectoryButton->setObjectName(QString::fromUtf8("openDirectoryButton"));
        openDirectoryButton->setGeometry(QRect(210, 20, 51, 19));
        openFileButton = new QPushButton(groupBox);
        openFileButton->setObjectName(QString::fromUtf8("openFileButton"));
        openFileButton->setGeometry(QRect(90, 50, 75, 23));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 110, 271, 441));
        userNotesField = new QTextEdit(groupBox_2);
        userNotesField->setObjectName(QString::fromUtf8("userNotesField"));
        userNotesField->setGeometry(QRect(10, 20, 251, 411));
        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(290, 10, 621, 251));
        spinBox = new QSpinBox(groupBox_3);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(70, 20, 51, 22));
        label = new QLabel(groupBox_3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 20, 61, 21));
        updateTableButton = new QPushButton(groupBox_3);
        updateTableButton->setObjectName(QString::fromUtf8("updateTableButton"));
        updateTableButton->setGeometry(QRect(130, 20, 51, 23));
        tableWidget = new QTableWidget(groupBox_3);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(10, 50, 601, 192));
        groupBox_4 = new QGroupBox(centralwidget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(290, 270, 621, 281));
        tableWidget_2 = new QTableWidget(groupBox_4);
        tableWidget_2->setObjectName(QString::fromUtf8("tableWidget_2"));
        tableWidget_2->setGeometry(QRect(10, 20, 601, 251));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 919, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("MainWindow", "Valitse tiedosto", 0, QApplication::UnicodeUTF8));
        openDirectoryButton->setText(QApplication::translate("MainWindow", "...", 0, QApplication::UnicodeUTF8));
        openFileButton->setText(QApplication::translate("MainWindow", "Avaa", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "K\303\244ytt\303\244j\303\244n muistiinpanot", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "L\303\244hd\303\266n hevoset", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Valitse l\303\244ht\303\266", 0, QApplication::UnicodeUTF8));
        updateTableButton->setText(QApplication::translate("MainWindow", "P\303\244ivit\303\244", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "Valittujen hevosten voittomahdollisuudet", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
