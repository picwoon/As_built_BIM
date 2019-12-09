/********************************************************************************
** Form generated from reading UI file 'CrossCompiler.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CROSSCOMPILER_H
#define UI_CROSSCOMPILER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>
#include "Compilers.h"
#include "QCMakeWidgets.h"

QT_BEGIN_NAMESPACE

class Ui_CrossCompiler
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout1;
    QLabel *label_6;
    QLineEdit *systemName;
    QSpacerItem *spacerItem;
    QLabel *label_10;
    QLineEdit *systemVersion;
    QLabel *label_11;
    QLineEdit *systemProcessor;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout2;
    QLabel *label_9;
    QCMakePathEditor *crossFindRoot;
    QLabel *label_12;
    QComboBox *crossProgramMode;
    QLabel *label_13;
    QComboBox *crossLibraryMode;
    QLabel *label_14;
    QComboBox *crossIncludeMode;
    Compilers *CrossCompilers;

    void setupUi(QWidget *CrossCompiler)
    {
        if (CrossCompiler->objectName().isEmpty())
            CrossCompiler->setObjectName(QString::fromUtf8("CrossCompiler"));
        CrossCompiler->resize(433, 319);
        gridLayout = new QGridLayout(CrossCompiler);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox = new QGroupBox(CrossCompiler);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        gridLayout1 = new QGridLayout(groupBox);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy1);

        gridLayout1->addWidget(label_6, 0, 0, 1, 1);

        systemName = new QLineEdit(groupBox);
        systemName->setObjectName(QString::fromUtf8("systemName"));

        gridLayout1->addWidget(systemName, 0, 1, 1, 1);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(spacerItem, 0, 2, 1, 2);

        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        sizePolicy1.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy1);
        label_10->setWordWrap(true);

        gridLayout1->addWidget(label_10, 1, 0, 1, 1);

        systemVersion = new QLineEdit(groupBox);
        systemVersion->setObjectName(QString::fromUtf8("systemVersion"));

        gridLayout1->addWidget(systemVersion, 1, 1, 1, 1);

        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        sizePolicy1.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy1);
        label_11->setWordWrap(true);

        gridLayout1->addWidget(label_11, 1, 2, 1, 1);

        systemProcessor = new QLineEdit(groupBox);
        systemProcessor->setObjectName(QString::fromUtf8("systemProcessor"));

        gridLayout1->addWidget(systemProcessor, 1, 3, 1, 1);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(CrossCompiler);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        sizePolicy.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy);
        gridLayout2 = new QGridLayout(groupBox_2);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        sizePolicy1.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy1);
        label_9->setWordWrap(true);

        gridLayout2->addWidget(label_9, 0, 0, 1, 1);

        crossFindRoot = new QCMakePathEditor(groupBox_2);
        crossFindRoot->setObjectName(QString::fromUtf8("crossFindRoot"));

        gridLayout2->addWidget(crossFindRoot, 0, 1, 1, 1);

        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        sizePolicy1.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy1);

        gridLayout2->addWidget(label_12, 0, 2, 1, 1);

        crossProgramMode = new QComboBox(groupBox_2);
        crossProgramMode->setObjectName(QString::fromUtf8("crossProgramMode"));

        gridLayout2->addWidget(crossProgramMode, 0, 3, 1, 1);

        label_13 = new QLabel(groupBox_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        sizePolicy1.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy1);

        gridLayout2->addWidget(label_13, 1, 0, 1, 1);

        crossLibraryMode = new QComboBox(groupBox_2);
        crossLibraryMode->setObjectName(QString::fromUtf8("crossLibraryMode"));

        gridLayout2->addWidget(crossLibraryMode, 1, 1, 1, 1);

        label_14 = new QLabel(groupBox_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        sizePolicy1.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy1);

        gridLayout2->addWidget(label_14, 1, 2, 1, 1);

        crossIncludeMode = new QComboBox(groupBox_2);
        crossIncludeMode->setObjectName(QString::fromUtf8("crossIncludeMode"));

        gridLayout2->addWidget(crossIncludeMode, 1, 3, 1, 1);


        gridLayout->addWidget(groupBox_2, 2, 0, 1, 1);

        CrossCompilers = new Compilers(CrossCompiler);
        CrossCompilers->setObjectName(QString::fromUtf8("CrossCompilers"));
        CrossCompilers->setFocusPolicy(Qt::TabFocus);

        gridLayout->addWidget(CrossCompilers, 1, 0, 1, 1);

        QWidget::setTabOrder(systemVersion, systemProcessor);
        QWidget::setTabOrder(systemProcessor, CrossCompilers);
        QWidget::setTabOrder(CrossCompilers, crossFindRoot);
        QWidget::setTabOrder(crossFindRoot, crossProgramMode);
        QWidget::setTabOrder(crossProgramMode, crossLibraryMode);
        QWidget::setTabOrder(crossLibraryMode, crossIncludeMode);

        retranslateUi(CrossCompiler);

        QMetaObject::connectSlotsByName(CrossCompiler);
    } // setupUi

    void retranslateUi(QWidget *CrossCompiler)
    {
        CrossCompiler->setWindowTitle(QApplication::translate("CrossCompiler", "CrossCompiler", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("CrossCompiler", "Target System", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("CrossCompiler", "Operating System", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("CrossCompiler", "Version", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("CrossCompiler", "Processor", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("CrossCompiler", "Find Program/Library/Include", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("CrossCompiler", "Target Root", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("CrossCompiler", "Program Mode", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("CrossCompiler", "Library Mode", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("CrossCompiler", "Include Mode", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CrossCompiler: public Ui_CrossCompiler {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CROSSCOMPILER_H
