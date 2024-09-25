/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *urlLabel;
    QLineEdit *urlLineEdit;
    QPushButton *downloadButton;
    QLabel *nameLabel;
    QComboBox *comboBox;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(500, 300);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        urlLabel = new QLabel(centralwidget);
        urlLabel->setObjectName("urlLabel");
        urlLabel->setGeometry(QRect(130, 80, 221, 31));
        QFont font;
        font.setPointSize(25);
        urlLabel->setFont(font);
        urlLineEdit = new QLineEdit(centralwidget);
        urlLineEdit->setObjectName("urlLineEdit");
        urlLineEdit->setGeometry(QRect(132, 124, 211, 31));
        downloadButton = new QPushButton(centralwidget);
        downloadButton->setObjectName("downloadButton");
        downloadButton->setGeometry(QRect(160, 220, 151, 41));
        nameLabel = new QLabel(centralwidget);
        nameLabel->setObjectName("nameLabel");
        nameLabel->setGeometry(QRect(10, 10, 491, 31));
        QFont font1;
        font1.setPointSize(20);
        nameLabel->setFont(font1);
        comboBox = new QComboBox(centralwidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(161, 170, 151, 41));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        urlLabel->setText(QCoreApplication::translate("MainWindow", "Enter the URL", nullptr));
        downloadButton->setText(QCoreApplication::translate("MainWindow", "Download", nullptr));
        nameLabel->setText(QCoreApplication::translate("MainWindow", "Cute Media Downloader", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "Mp4", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("MainWindow", "Mp3", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("MainWindow", "Wav", nullptr));

    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
