/********************************************************************************
** Form generated from reading UI file 'qxmpppacketconsle.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QXMPPPACKETCONSLE_H
#define UI_QXMPPPACKETCONSLE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QXmppPacketConsle
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QLineEdit *lineEdit;

    void setupUi(QDialog *QXmppPacketConsle)
    {
        if (QXmppPacketConsle->objectName().isEmpty())
            QXmppPacketConsle->setObjectName(QString::fromUtf8("QXmppPacketConsle"));
        QXmppPacketConsle->resize(414, 418);
        verticalLayout_2 = new QVBoxLayout(QXmppPacketConsle);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        textEdit = new QTextEdit(QXmppPacketConsle);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        verticalLayout->addWidget(textEdit);

        lineEdit = new QLineEdit(QXmppPacketConsle);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        verticalLayout->addWidget(lineEdit);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(QXmppPacketConsle);

        QMetaObject::connectSlotsByName(QXmppPacketConsle);
    } // setupUi

    void retranslateUi(QDialog *QXmppPacketConsle)
    {
        QXmppPacketConsle->setWindowTitle(QApplication::translate("QXmppPacketConsle", "\346\225\260\346\215\256\346\265\201\347\233\221\346\216\247\345\217\260", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QXmppPacketConsle: public Ui_QXmppPacketConsle {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QXMPPPACKETCONSLE_H
