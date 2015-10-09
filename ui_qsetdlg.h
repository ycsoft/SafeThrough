/********************************************************************************
** Form generated from reading UI file 'qsetdlg.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSETDLG_H
#define UI_QSETDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QSetDlg
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEditIP;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonApply;
    QPushButton *pushButtonExit;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *QSetDlg)
    {
        if (QSetDlg->objectName().isEmpty())
            QSetDlg->setObjectName(QString::fromUtf8("QSetDlg"));
        QSetDlg->resize(234, 129);
        verticalLayout_2 = new QVBoxLayout(QSetDlg);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox = new QGroupBox(QSetDlg);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEditIP = new QLineEdit(groupBox);
        lineEditIP->setObjectName(QString::fromUtf8("lineEditIP"));

        horizontalLayout->addWidget(lineEditIP);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pushButtonApply = new QPushButton(groupBox);
        pushButtonApply->setObjectName(QString::fromUtf8("pushButtonApply"));
        pushButtonApply->setMaximumSize(QSize(40, 16777215));

        horizontalLayout_3->addWidget(pushButtonApply);

        pushButtonExit = new QPushButton(groupBox);
        pushButtonExit->setObjectName(QString::fromUtf8("pushButtonExit"));
        pushButtonExit->setMaximumSize(QSize(40, 16777215));

        horizontalLayout_3->addWidget(pushButtonExit);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_3);


        verticalLayout_2->addWidget(groupBox);


        retranslateUi(QSetDlg);

        QMetaObject::connectSlotsByName(QSetDlg);
    } // setupUi

    void retranslateUi(QDialog *QSetDlg)
    {
        QSetDlg->setWindowTitle(QApplication::translate("QSetDlg", "Dialog", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("QSetDlg", "\350\275\257\344\273\266\346\233\264\346\226\260\346\234\215\345\212\241\345\231\250\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QSetDlg", "IP\345\234\260\345\235\200", 0, QApplication::UnicodeUTF8));
        pushButtonApply->setText(QApplication::translate("QSetDlg", "\345\272\224\347\224\250", 0, QApplication::UnicodeUTF8));
        pushButtonExit->setText(QApplication::translate("QSetDlg", "\346\233\264\346\226\260", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QSetDlg: public Ui_QSetDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSETDLG_H
