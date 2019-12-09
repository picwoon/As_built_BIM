/********************************************************************************
** Form generated from reading UI file 'RegexExplorer.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGEXEXPLORER_H
#define UI_REGEXEXPLORER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RegexExplorer
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPlainTextEdit *inputText;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *labelRegexValid;
    QSpacerItem *horizontalSpacer_4;
    QLabel *labelRegexMatch;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *regularExpression;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_5;
    QCheckBox *matchAll;
    QPlainTextEdit *match0;
    QHBoxLayout *horizontalLayout;
    QComboBox *matchNumber;
    QSpacerItem *horizontalSpacer;
    QPlainTextEdit *matchN;

    void setupUi(QDialog *RegexExplorer)
    {
        if (RegexExplorer->objectName().isEmpty())
            RegexExplorer->setObjectName(QString::fromUtf8("RegexExplorer"));
        RegexExplorer->resize(639, 555);
        verticalLayout = new QVBoxLayout(RegexExplorer);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(RegexExplorer);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        inputText = new QPlainTextEdit(RegexExplorer);
        inputText->setObjectName(QString::fromUtf8("inputText"));

        verticalLayout->addWidget(inputText);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(RegexExplorer);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        labelRegexValid = new QLabel(RegexExplorer);
        labelRegexValid->setObjectName(QString::fromUtf8("labelRegexValid"));
        labelRegexValid->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(labelRegexValid);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        labelRegexMatch = new QLabel(RegexExplorer);
        labelRegexMatch->setObjectName(QString::fromUtf8("labelRegexMatch"));
        labelRegexMatch->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(labelRegexMatch);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        regularExpression = new QLineEdit(RegexExplorer);
        regularExpression->setObjectName(QString::fromUtf8("regularExpression"));

        verticalLayout->addWidget(regularExpression);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(RegexExplorer);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        matchAll = new QCheckBox(RegexExplorer);
        matchAll->setObjectName(QString::fromUtf8("matchAll"));

        horizontalLayout_3->addWidget(matchAll);


        verticalLayout->addLayout(horizontalLayout_3);

        match0 = new QPlainTextEdit(RegexExplorer);
        match0->setObjectName(QString::fromUtf8("match0"));
        match0->setReadOnly(true);

        verticalLayout->addWidget(match0);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        matchNumber = new QComboBox(RegexExplorer);
        matchNumber->setObjectName(QString::fromUtf8("matchNumber"));
        matchNumber->setEditable(false);

        horizontalLayout->addWidget(matchNumber);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        matchN = new QPlainTextEdit(RegexExplorer);
        matchN->setObjectName(QString::fromUtf8("matchN"));
        matchN->setReadOnly(true);

        verticalLayout->addWidget(matchN);


        retranslateUi(RegexExplorer);

        QMetaObject::connectSlotsByName(RegexExplorer);
    } // setupUi

    void retranslateUi(QDialog *RegexExplorer)
    {
        RegexExplorer->setWindowTitle(QApplication::translate("RegexExplorer", "Regular Expression Explorer", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("RegexExplorer", "Input Text", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("RegexExplorer", "Regular Expression", 0, QApplication::UnicodeUTF8));
        labelRegexValid->setText(QApplication::translate("RegexExplorer", "Valid", 0, QApplication::UnicodeUTF8));
        labelRegexMatch->setText(QApplication::translate("RegexExplorer", "Match", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("RegexExplorer", "Complete Match", 0, QApplication::UnicodeUTF8));
        matchAll->setText(QApplication::translate("RegexExplorer", "Match All", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class RegexExplorer: public Ui_RegexExplorer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGEXEXPLORER_H
