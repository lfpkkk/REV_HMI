/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QPushButton *setBut;
    QPushButton *resetBut;
    QComboBox *comboBox;
    QLineEdit *lineEdit_1;
    QSlider *Slider;
    QLabel *label;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QPushButton *startBut;
    QProgressBar *progressBar;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(480, 240);
        Dialog->setMinimumSize(QSize(480, 240));
        Dialog->setMaximumSize(QSize(480, 240));
        Dialog->setStyleSheet(QLatin1String("QToolButton{\n"
"color: rgb(0, 0, 0);\n"
"}\n"
"\n"
"QCheckBox {\n"
"color: rgb(0,0,0);\n"
"}"));
        setBut = new QPushButton(Dialog);
        setBut->setObjectName(QStringLiteral("setBut"));
        setBut->setGeometry(QRect(370, 140, 89, 25));
        resetBut = new QPushButton(Dialog);
        resetBut->setObjectName(QStringLiteral("resetBut"));
        resetBut->setGeometry(QRect(370, 190, 89, 25));
        comboBox = new QComboBox(Dialog);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(20, 90, 151, 25));
        lineEdit_1 = new QLineEdit(Dialog);
        lineEdit_1->setObjectName(QStringLiteral("lineEdit_1"));
        lineEdit_1->setGeometry(QRect(20, 140, 151, 25));
        Slider = new QSlider(Dialog);
        Slider->setObjectName(QStringLiteral("Slider"));
        Slider->setGeometry(QRect(190, 140, 131, 20));
        Slider->setOrientation(Qt::Horizontal);
        label = new QLabel(Dialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(170, 10, 131, 41));
        label->setLayoutDirection(Qt::LeftToRight);
        label->setAlignment(Qt::AlignCenter);
        lineEdit_2 = new QLineEdit(Dialog);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(180, 140, 141, 25));
        lineEdit_3 = new QLineEdit(Dialog);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(20, 140, 151, 25));
        startBut = new QPushButton(Dialog);
        startBut->setObjectName(QStringLiteral("startBut"));
        startBut->setGeometry(QRect(370, 90, 89, 25));
        progressBar = new QProgressBar(Dialog);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(190, 90, 131, 23));
        progressBar->setValue(24);

        retranslateUi(Dialog);
        QObject::connect(Slider, SIGNAL(valueChanged(int)), progressBar, SLOT(setValue(int)));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", Q_NULLPTR));
        setBut->setText(QApplication::translate("Dialog", "Set", Q_NULLPTR));
        resetBut->setText(QApplication::translate("Dialog", "Reset", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("Dialog", "Speed & Accel", Q_NULLPTR)
         << QApplication::translate("Dialog", "Trip Distance", Q_NULLPTR)
         << QApplication::translate("Dialog", "Trip Time", Q_NULLPTR)
         << QApplication::translate("Dialog", "Time", Q_NULLPTR)
         << QApplication::translate("Dialog", "Voltage Pecent", Q_NULLPTR)
        );
        label->setText(QApplication::translate("Dialog", "Data Editor", Q_NULLPTR));
        startBut->setText(QApplication::translate("Dialog", "Start", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
