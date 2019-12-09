/********************************************************************************
** Form generated from reading UI file 'CMakeSetupDialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CMAKESETUPDIALOG_H
#define UI_CMAKESETUPDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSplitter>
#include <QtGui/QTextEdit>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "QCMakeCacheView.h"

QT_BEGIN_NAMESPACE

class Ui_CMakeSetupDialog
{
public:
    QGridLayout *gridLayout;
    QGridLayout *gridLayout1;
    QLabel *label;
    QLineEdit *SourceDirectory;
    QPushButton *BrowseSourceDirectoryButton;
    QLabel *label_2;
    QComboBox *BinaryDirectory;
    QPushButton *BrowseBinaryDirectoryButton;
    QSplitter *Splitter;
    QFrame *frame;
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QLabel *label_4;
    QLineEdit *Search;
    QSpacerItem *spacerItem;
    QCheckBox *groupedCheck;
    QCheckBox *advancedCheck;
    QToolButton *AddEntry;
    QToolButton *RemoveEntry;
    QCMakeCacheView *CacheValues;
    QLabel *label_3;
    QHBoxLayout *hboxLayout1;
    QPushButton *ConfigureButton;
    QPushButton *GenerateButton;
    QPushButton *OpenProjectButton;
    QLabel *Generator;
    QSpacerItem *spacerItem1;
    QProgressBar *ProgressBar;
    QTextEdit *Output;

    void setupUi(QWidget *CMakeSetupDialog)
    {
        if (CMakeSetupDialog->objectName().isEmpty())
            CMakeSetupDialog->setObjectName(QString::fromUtf8("CMakeSetupDialog"));
        CMakeSetupDialog->resize(707, 582);
        gridLayout = new QGridLayout(CMakeSetupDialog);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout1 = new QGridLayout();
#ifndef Q_OS_MAC
        gridLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout1->setContentsMargins(0, 0, 0, 0);
#endif
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        label = new QLabel(CMakeSetupDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout1->addWidget(label, 0, 0, 1, 1);

        SourceDirectory = new QLineEdit(CMakeSetupDialog);
        SourceDirectory->setObjectName(QString::fromUtf8("SourceDirectory"));

        gridLayout1->addWidget(SourceDirectory, 0, 1, 1, 1);

        BrowseSourceDirectoryButton = new QPushButton(CMakeSetupDialog);
        BrowseSourceDirectoryButton->setObjectName(QString::fromUtf8("BrowseSourceDirectoryButton"));

        gridLayout1->addWidget(BrowseSourceDirectoryButton, 0, 2, 1, 1);

        label_2 = new QLabel(CMakeSetupDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout1->addWidget(label_2, 1, 0, 1, 1);

        BinaryDirectory = new QComboBox(CMakeSetupDialog);
        BinaryDirectory->setObjectName(QString::fromUtf8("BinaryDirectory"));
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(BinaryDirectory->sizePolicy().hasHeightForWidth());
        BinaryDirectory->setSizePolicy(sizePolicy);
        BinaryDirectory->setStyleSheet(QString::fromUtf8("padding-left: 0"));
        BinaryDirectory->setEditable(true);

        gridLayout1->addWidget(BinaryDirectory, 1, 1, 1, 1);

        BrowseBinaryDirectoryButton = new QPushButton(CMakeSetupDialog);
        BrowseBinaryDirectoryButton->setObjectName(QString::fromUtf8("BrowseBinaryDirectoryButton"));

        gridLayout1->addWidget(BrowseBinaryDirectoryButton, 1, 2, 1, 1);


        gridLayout->addLayout(gridLayout1, 0, 0, 1, 1);

        Splitter = new QSplitter(CMakeSetupDialog);
        Splitter->setObjectName(QString::fromUtf8("Splitter"));
        Splitter->setOrientation(Qt::Vertical);
        frame = new QFrame(Splitter);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        vboxLayout = new QVBoxLayout(frame);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout->setContentsMargins(0, 0, 0, 0);
#endif
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);

        hboxLayout->addWidget(label_4);

        Search = new QLineEdit(frame);
        Search->setObjectName(QString::fromUtf8("Search"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(Search->sizePolicy().hasHeightForWidth());
        Search->setSizePolicy(sizePolicy2);

        hboxLayout->addWidget(Search);

        spacerItem = new QSpacerItem(12, 23, QSizePolicy::Minimum, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        groupedCheck = new QCheckBox(frame);
        groupedCheck->setObjectName(QString::fromUtf8("groupedCheck"));

        hboxLayout->addWidget(groupedCheck);

        advancedCheck = new QCheckBox(frame);
        advancedCheck->setObjectName(QString::fromUtf8("advancedCheck"));

        hboxLayout->addWidget(advancedCheck);

        AddEntry = new QToolButton(frame);
        AddEntry->setObjectName(QString::fromUtf8("AddEntry"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/Plus16.png"), QSize(), QIcon::Normal, QIcon::Off);
        AddEntry->setIcon(icon);
        AddEntry->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        hboxLayout->addWidget(AddEntry);

        RemoveEntry = new QToolButton(frame);
        RemoveEntry->setObjectName(QString::fromUtf8("RemoveEntry"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Icons/Delete16.png"), QSize(), QIcon::Normal, QIcon::Off);
        RemoveEntry->setIcon(icon1);
        RemoveEntry->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        hboxLayout->addWidget(RemoveEntry);


        vboxLayout->addLayout(hboxLayout);

        CacheValues = new QCMakeCacheView(frame);
        CacheValues->setObjectName(QString::fromUtf8("CacheValues"));
        CacheValues->setAlternatingRowColors(true);
        CacheValues->setSelectionMode(QAbstractItemView::ExtendedSelection);
        CacheValues->setSelectionBehavior(QAbstractItemView::SelectRows);

        vboxLayout->addWidget(CacheValues);

        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);
        label_3->setWordWrap(true);

        vboxLayout->addWidget(label_3);

        hboxLayout1 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout1->setSpacing(6);
#endif
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        ConfigureButton = new QPushButton(frame);
        ConfigureButton->setObjectName(QString::fromUtf8("ConfigureButton"));

        hboxLayout1->addWidget(ConfigureButton);

        GenerateButton = new QPushButton(frame);
        GenerateButton->setObjectName(QString::fromUtf8("GenerateButton"));

        hboxLayout1->addWidget(GenerateButton);

        OpenProjectButton = new QPushButton(frame);
        OpenProjectButton->setObjectName(QString::fromUtf8("OpenProjectButton"));

        hboxLayout1->addWidget(OpenProjectButton);

        Generator = new QLabel(frame);
        Generator->setObjectName(QString::fromUtf8("Generator"));

        hboxLayout1->addWidget(Generator);

        spacerItem1 = new QSpacerItem(121, 27, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem1);

        ProgressBar = new QProgressBar(frame);
        ProgressBar->setObjectName(QString::fromUtf8("ProgressBar"));
        ProgressBar->setMinimum(0);
        ProgressBar->setMaximum(100);
        ProgressBar->setValue(0);
        ProgressBar->setTextVisible(false);
        ProgressBar->setOrientation(Qt::Horizontal);
        ProgressBar->setTextDirection(QProgressBar::BottomToTop);

        hboxLayout1->addWidget(ProgressBar);


        vboxLayout->addLayout(hboxLayout1);

        Splitter->addWidget(frame);
        Output = new QTextEdit(Splitter);
        Output->setObjectName(QString::fromUtf8("Output"));
        Output->setLineWrapMode(QTextEdit::NoWrap);
        Output->setReadOnly(true);
        Splitter->addWidget(Output);

        gridLayout->addWidget(Splitter, 1, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        label_4->setBuddy(Search);
#endif // QT_NO_SHORTCUT

        retranslateUi(CMakeSetupDialog);

        QMetaObject::connectSlotsByName(CMakeSetupDialog);
    } // setupUi

    void retranslateUi(QWidget *CMakeSetupDialog)
    {
        label->setText(QApplication::translate("CMakeSetupDialog", "Where is the source code:", 0, QApplication::UnicodeUTF8));
        BrowseSourceDirectoryButton->setText(QApplication::translate("CMakeSetupDialog", "Browse &Source...", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("CMakeSetupDialog", "Where to build the binaries:", 0, QApplication::UnicodeUTF8));
        BrowseBinaryDirectoryButton->setText(QApplication::translate("CMakeSetupDialog", "Browse &Build...", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("CMakeSetupDialog", "S&earch:", 0, QApplication::UnicodeUTF8));
        groupedCheck->setText(QApplication::translate("CMakeSetupDialog", "Grouped", 0, QApplication::UnicodeUTF8));
        advancedCheck->setText(QApplication::translate("CMakeSetupDialog", "Advanced", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        AddEntry->setToolTip(QApplication::translate("CMakeSetupDialog", "Add New Entry", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        AddEntry->setText(QApplication::translate("CMakeSetupDialog", "&Add Entry", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        RemoveEntry->setToolTip(QApplication::translate("CMakeSetupDialog", "Remove Selected Entries", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        RemoveEntry->setText(QApplication::translate("CMakeSetupDialog", "&Remove Entry", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("CMakeSetupDialog", "Press Configure to update and display new values in red, then press Generate to generate selected build files.", 0, QApplication::UnicodeUTF8));
        ConfigureButton->setText(QApplication::translate("CMakeSetupDialog", "&Configure", 0, QApplication::UnicodeUTF8));
        GenerateButton->setText(QApplication::translate("CMakeSetupDialog", "&Generate", 0, QApplication::UnicodeUTF8));
        OpenProjectButton->setText(QApplication::translate("CMakeSetupDialog", "Open &Project", 0, QApplication::UnicodeUTF8));
        Generator->setText(QApplication::translate("CMakeSetupDialog", "Current Generator:", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(CMakeSetupDialog);
    } // retranslateUi

};

namespace Ui {
    class CMakeSetupDialog: public Ui_CMakeSetupDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CMAKESETUPDIALOG_H
