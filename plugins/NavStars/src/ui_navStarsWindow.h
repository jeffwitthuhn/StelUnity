/********************************************************************************
** Form generated from reading UI file 'navStarsWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NAVSTARSWINDOW_H
#define UI_NAVSTARSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Dialog.hpp"

QT_BEGIN_NAMESPACE

class Ui_navStarsWindowForm
{
public:
    QVBoxLayout *verticalLayout;
    BarFrame *TitleBar;
    QHBoxLayout *hboxLayout;
    QSpacerItem *leftSpacer;
    QLabel *stelWindowTitle;
    QSpacerItem *rightSpacer;
    QPushButton *closeStelWindow;
    QTabWidget *tabWidget;
    QWidget *tabNavStars;
    QVBoxLayout *verticalLayoutTimeZone;
    QGroupBox *groupBoxNavStars;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout;
    QLabel *nsSetLabel;
    QComboBox *nsSetComboBox;
    QLabel *labelNote;
    QLabel *nsSetDescription;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayoutNsSettings;
    QPushButton *pushButtonSave;
    QPushButton *pushButtonReset;
    QWidget *tabAbout;
    QVBoxLayout *verticalLayout_3;
    QTextBrowser *aboutTextBrowser;

    void setupUi(QWidget *navStarsWindowForm)
    {
        if (navStarsWindowForm->objectName().isEmpty())
            navStarsWindowForm->setObjectName(QStringLiteral("navStarsWindowForm"));
        navStarsWindowForm->resize(522, 459);
        verticalLayout = new QVBoxLayout(navStarsWindowForm);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        TitleBar = new BarFrame(navStarsWindowForm);
        TitleBar->setObjectName(QStringLiteral("TitleBar"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TitleBar->sizePolicy().hasHeightForWidth());
        TitleBar->setSizePolicy(sizePolicy);
        TitleBar->setMinimumSize(QSize(0, 25));
        TitleBar->setMaximumSize(QSize(16777215, 30));
        TitleBar->setFocusPolicy(Qt::NoFocus);
        TitleBar->setAutoFillBackground(false);
        TitleBar->setFrameShape(QFrame::StyledPanel);
        hboxLayout = new QHBoxLayout(TitleBar);
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 4, 0);
        leftSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(leftSpacer);

        stelWindowTitle = new QLabel(TitleBar);
        stelWindowTitle->setObjectName(QStringLiteral("stelWindowTitle"));

        hboxLayout->addWidget(stelWindowTitle);

        rightSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(rightSpacer);

        closeStelWindow = new QPushButton(TitleBar);
        closeStelWindow->setObjectName(QStringLiteral("closeStelWindow"));
        closeStelWindow->setMinimumSize(QSize(16, 16));
        closeStelWindow->setMaximumSize(QSize(16, 16));
        closeStelWindow->setFocusPolicy(Qt::NoFocus);

        hboxLayout->addWidget(closeStelWindow);


        verticalLayout->addWidget(TitleBar);

        tabWidget = new QTabWidget(navStarsWindowForm);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabNavStars = new QWidget();
        tabNavStars->setObjectName(QStringLiteral("tabNavStars"));
        verticalLayoutTimeZone = new QVBoxLayout(tabNavStars);
        verticalLayoutTimeZone->setSpacing(0);
        verticalLayoutTimeZone->setObjectName(QStringLiteral("verticalLayoutTimeZone"));
        verticalLayoutTimeZone->setContentsMargins(0, 0, 0, 0);
        groupBoxNavStars = new QGroupBox(tabNavStars);
        groupBoxNavStars->setObjectName(QStringLiteral("groupBoxNavStars"));
        groupBoxNavStars->setMinimumSize(QSize(0, 400));
        groupBoxNavStars->setAlignment(Qt::AlignCenter);
        verticalLayout_2 = new QVBoxLayout(groupBoxNavStars);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        nsSetLabel = new QLabel(groupBoxNavStars);
        nsSetLabel->setObjectName(QStringLiteral("nsSetLabel"));
        nsSetLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(nsSetLabel, 0, 0, 1, 1);

        nsSetComboBox = new QComboBox(groupBoxNavStars);
        nsSetComboBox->setObjectName(QStringLiteral("nsSetComboBox"));
        nsSetComboBox->setEditable(false);
        nsSetComboBox->setInsertPolicy(QComboBox::NoInsert);
        nsSetComboBox->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout->addWidget(nsSetComboBox, 0, 1, 1, 1);

        labelNote = new QLabel(groupBoxNavStars);
        labelNote->setObjectName(QStringLiteral("labelNote"));
        labelNote->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);

        gridLayout->addWidget(labelNote, 1, 0, 1, 1);

        nsSetDescription = new QLabel(groupBoxNavStars);
        nsSetDescription->setObjectName(QStringLiteral("nsSetDescription"));
        nsSetDescription->setWordWrap(true);

        gridLayout->addWidget(nsSetDescription, 1, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayoutNsSettings = new QHBoxLayout();
        horizontalLayoutNsSettings->setObjectName(QStringLiteral("horizontalLayoutNsSettings"));
        pushButtonSave = new QPushButton(groupBoxNavStars);
        pushButtonSave->setObjectName(QStringLiteral("pushButtonSave"));

        horizontalLayoutNsSettings->addWidget(pushButtonSave);

        pushButtonReset = new QPushButton(groupBoxNavStars);
        pushButtonReset->setObjectName(QStringLiteral("pushButtonReset"));

        horizontalLayoutNsSettings->addWidget(pushButtonReset);


        verticalLayout_2->addLayout(horizontalLayoutNsSettings);


        verticalLayoutTimeZone->addWidget(groupBoxNavStars);

        tabWidget->addTab(tabNavStars, QString());
        tabAbout = new QWidget();
        tabAbout->setObjectName(QStringLiteral("tabAbout"));
        verticalLayout_3 = new QVBoxLayout(tabAbout);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        aboutTextBrowser = new QTextBrowser(tabAbout);
        aboutTextBrowser->setObjectName(QStringLiteral("aboutTextBrowser"));

        verticalLayout_3->addWidget(aboutTextBrowser);

        tabWidget->addTab(tabAbout, QString());

        verticalLayout->addWidget(tabWidget);


        retranslateUi(navStarsWindowForm);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(navStarsWindowForm);
    } // setupUi

    void retranslateUi(QWidget *navStarsWindowForm)
    {
        stelWindowTitle->setText(QApplication::translate("navStarsWindowForm", "Navigational stars", 0));
        closeStelWindow->setText(QString());
        groupBoxNavStars->setTitle(QApplication::translate("navStarsWindowForm", "Set of navigational stars", 0));
#ifndef QT_NO_TOOLTIP
        nsSetLabel->setToolTip(QApplication::translate("navStarsWindowForm", "Place of the string with coordinates of the mouse pointer", 0));
#endif // QT_NO_TOOLTIP
        nsSetLabel->setText(QApplication::translate("navStarsWindowForm", "Current set:", 0));
        labelNote->setText(QApplication::translate("navStarsWindowForm", "Note:", 0));
        nsSetDescription->setText(QString());
        pushButtonSave->setText(QApplication::translate("navStarsWindowForm", "Save settings", 0));
        pushButtonReset->setText(QApplication::translate("navStarsWindowForm", "Restore defaults", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabNavStars), QApplication::translate("navStarsWindowForm", "Navigational stars", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabAbout), QApplication::translate("navStarsWindowForm", "About", "tab in plugin windows"));
        Q_UNUSED(navStarsWindowForm);
    } // retranslateUi

};

namespace Ui {
    class navStarsWindowForm: public Ui_navStarsWindowForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NAVSTARSWINDOW_H
