/********************************************************************************
** Form generated from reading UI file 'AddCacheEntry.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCACHEENTRY_H
#define UI_ADDCACHEENTRY_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QStackedWidget>
#include <QtGui/QWidget>
#include "QCMakeWidgets.h"

QT_BEGIN_NAMESPACE

class Ui_AddCacheEntry
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *Name;
    QLabel *label_2;
    QComboBox *Type;
    QLabel *label_5;
    QStackedWidget *StackedWidget;
    QLabel *label_3;
    QLineEdit *Description;

    void setupUi(QWidget *AddCacheEntry)
    {
        if (AddCacheEntry->objectName().isEmpty())
            AddCacheEntry->setObjectName(QString::fromUtf8("AddCacheEntry"));
        AddCacheEntry->resize(380, 158);
        gridLayout = new QGridLayout(AddCacheEntry);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(AddCacheEntry);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        Name = new QLineEdit(AddCacheEntry);
        Name->setObjectName(QString::fromUtf8("Name"));

        gridLayout->addWidget(Name, 0, 1, 1, 1);

        label_2 = new QLabel(AddCacheEntry);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        Type = new QComboBox(AddCacheEntry);
        Type->setObjectName(QString::fromUtf8("Type"));

        gridLayout->addWidget(Type, 1, 1, 1, 1);

        label_5 = new QLabel(AddCacheEntry);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        StackedWidget = new QStackedWidget(AddCacheEntry);
        StackedWidget->setObjectName(QString::fromUtf8("StackedWidget"));

        gridLayout->addWidget(StackedWidget, 2, 1, 1, 1);

        label_3 = new QLabel(AddCacheEntry);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        Description = new QLineEdit(AddCacheEntry);
        Description->setObjectName(QString::fromUtf8("Description"));

        gridLayout->addWidget(Description, 3, 1, 1, 1);


        retranslateUi(AddCacheEntry);
        QObject::connect(Type, SIGNAL(currentIndexChanged(int)), StackedWidget, SLOT(setCurrentIndex(int)));

        StackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AddCacheEntry);
    } // setupUi

    void retranslateUi(QWidget *AddCacheEntry)
    {
        AddCacheEntry->setWindowTitle(QApplication::translate("AddCacheEntry", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("AddCacheEntry", "Name:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("AddCacheEntry", "Type:", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("AddCacheEntry", "Value:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("AddCacheEntry", "Description:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AddCacheEntry: public Ui_AddCacheEntry {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCACHEENTRY_H
