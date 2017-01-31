/********************************************************************************
** Form generated from reading UI file 'MSConfigDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MSCONFIGDIALOG_H
#define UI_MSCONFIGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Dialog.hpp"

QT_BEGIN_NAMESPACE

class Ui_MSConfigDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    BarFrame *TitleBar;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QLabel *stelWindowTitle;
    QSpacerItem *spacerItem1;
    QPushButton *closeStelWindow;
    QTabWidget *tabs;
    QWidget *generalTab;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *displayMeteorShowerBox;
    QGridLayout *gridLayout_8;
    QCheckBox *enableAtStartUp;
    QCheckBox *showEnableButton;
    QCheckBox *showSearchButton;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *bRestoreDefaults;
    QWidget *radiantTab;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *enableMarker;
    QGridLayout *gridLayout_9;
    QCheckBox *enableLabels;
    QCheckBox *activeRadiantsOnly;
    QSpinBox *fontSize;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_5;
    QGroupBox *activeGenericData;
    QGridLayout *gridLayout_3;
    QPushButton *setColorARG;
    QGroupBox *inactive;
    QGridLayout *gridLayout_4;
    QPushButton *setColorIR;
    QGroupBox *activeConfirmedData;
    QGridLayout *gridLayout_2;
    QPushButton *setColorARC;
    QSpacerItem *verticalSpacer;
    QWidget *updatesTab;
    QVBoxLayout *updatesTab_2;
    QGroupBox *enableUpdates;
    QVBoxLayout *verticalLayout_12;
    QGridLayout *gridLayout;
    QSpinBox *updateFrequency;
    QDateTimeEdit *nextUpdate;
    QLabel *lUpdateFrequency;
    QLabel *lNextUpdate;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_6;
    QLabel *lLastUpdate;
    QLabel *lStatus;
    QDateTimeEdit *lastUpdate;
    QLabel *status;
    QSpacerItem *verticalSpacer_31;
    QPushButton *bUpdate;
    QWidget *aboutTab;
    QVBoxLayout *verticalLayout_11;
    QTextBrowser *about;

    void setupUi(QWidget *MSConfigDialog)
    {
        if (MSConfigDialog->objectName().isEmpty())
            MSConfigDialog->setObjectName(QStringLiteral("MSConfigDialog"));
        MSConfigDialog->resize(530, 404);
        verticalLayout_2 = new QVBoxLayout(MSConfigDialog);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        TitleBar = new BarFrame(MSConfigDialog);
        TitleBar->setObjectName(QStringLiteral("TitleBar"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TitleBar->sizePolicy().hasHeightForWidth());
        TitleBar->setSizePolicy(sizePolicy);
        TitleBar->setMinimumSize(QSize(530, 25));
        TitleBar->setMaximumSize(QSize(16777215, 25));
        TitleBar->setFocusPolicy(Qt::NoFocus);
        TitleBar->setAutoFillBackground(false);
        TitleBar->setFrameShape(QFrame::StyledPanel);
        hboxLayout = new QHBoxLayout(TitleBar);
        hboxLayout->setSpacing(0);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 4, 0);
        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        stelWindowTitle = new QLabel(TitleBar);
        stelWindowTitle->setObjectName(QStringLiteral("stelWindowTitle"));

        hboxLayout->addWidget(stelWindowTitle);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem1);

        closeStelWindow = new QPushButton(TitleBar);
        closeStelWindow->setObjectName(QStringLiteral("closeStelWindow"));
        closeStelWindow->setMinimumSize(QSize(16, 16));
        closeStelWindow->setMaximumSize(QSize(16, 16));
        closeStelWindow->setFocusPolicy(Qt::NoFocus);

        hboxLayout->addWidget(closeStelWindow);


        verticalLayout_2->addWidget(TitleBar);

        tabs = new QTabWidget(MSConfigDialog);
        tabs->setObjectName(QStringLiteral("tabs"));
        tabs->setDocumentMode(false);
        generalTab = new QWidget();
        generalTab->setObjectName(QStringLiteral("generalTab"));
        verticalLayout_3 = new QVBoxLayout(generalTab);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        displayMeteorShowerBox = new QGroupBox(generalTab);
        displayMeteorShowerBox->setObjectName(QStringLiteral("displayMeteorShowerBox"));
        displayMeteorShowerBox->setFlat(true);
        displayMeteorShowerBox->setCheckable(false);
        gridLayout_8 = new QGridLayout(displayMeteorShowerBox);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        enableAtStartUp = new QCheckBox(displayMeteorShowerBox);
        enableAtStartUp->setObjectName(QStringLiteral("enableAtStartUp"));

        gridLayout_8->addWidget(enableAtStartUp, 0, 0, 1, 1);

        showEnableButton = new QCheckBox(displayMeteorShowerBox);
        showEnableButton->setObjectName(QStringLiteral("showEnableButton"));

        gridLayout_8->addWidget(showEnableButton, 1, 0, 1, 1);

        showSearchButton = new QCheckBox(displayMeteorShowerBox);
        showSearchButton->setObjectName(QStringLiteral("showSearchButton"));

        gridLayout_8->addWidget(showSearchButton, 2, 0, 1, 1);


        verticalLayout_3->addWidget(displayMeteorShowerBox);

        verticalSpacer_3 = new QSpacerItem(20, 120, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        bRestoreDefaults = new QPushButton(generalTab);
        bRestoreDefaults->setObjectName(QStringLiteral("bRestoreDefaults"));
        sizePolicy.setHeightForWidth(bRestoreDefaults->sizePolicy().hasHeightForWidth());
        bRestoreDefaults->setSizePolicy(sizePolicy);

        horizontalLayout_7->addWidget(bRestoreDefaults);


        verticalLayout_3->addLayout(horizontalLayout_7);

        tabs->addTab(generalTab, QString());
        radiantTab = new QWidget();
        radiantTab->setObjectName(QStringLiteral("radiantTab"));
        radiantTab->setEnabled(true);
        verticalLayout_4 = new QVBoxLayout(radiantTab);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        enableMarker = new QGroupBox(radiantTab);
        enableMarker->setObjectName(QStringLiteral("enableMarker"));
        enableMarker->setFlat(true);
        enableMarker->setCheckable(true);
        gridLayout_9 = new QGridLayout(enableMarker);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        enableLabels = new QCheckBox(enableMarker);
        enableLabels->setObjectName(QStringLiteral("enableLabels"));

        gridLayout_9->addWidget(enableLabels, 1, 0, 1, 1);

        activeRadiantsOnly = new QCheckBox(enableMarker);
        activeRadiantsOnly->setObjectName(QStringLiteral("activeRadiantsOnly"));

        gridLayout_9->addWidget(activeRadiantsOnly, 0, 0, 1, 1);

        fontSize = new QSpinBox(enableMarker);
        fontSize->setObjectName(QStringLiteral("fontSize"));

        gridLayout_9->addWidget(fontSize, 1, 1, 1, 1);


        verticalLayout_4->addWidget(enableMarker);

        groupBox = new QGroupBox(radiantTab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_5 = new QGridLayout(groupBox);
        gridLayout_5->setSpacing(0);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        activeGenericData = new QGroupBox(groupBox);
        activeGenericData->setObjectName(QStringLiteral("activeGenericData"));
        activeGenericData->setMinimumSize(QSize(130, 100));
        activeGenericData->setAlignment(Qt::AlignCenter);
        gridLayout_3 = new QGridLayout(activeGenericData);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        setColorARG = new QPushButton(activeGenericData);
        setColorARG->setObjectName(QStringLiteral("setColorARG"));
        setColorARG->setMinimumSize(QSize(0, 30));
        setColorARG->setMaximumSize(QSize(100, 16777215));
        setColorARG->setText(QStringLiteral(""));

        gridLayout_3->addWidget(setColorARG, 0, 0, 1, 1);


        gridLayout_5->addWidget(activeGenericData, 0, 1, 1, 1, Qt::AlignHCenter);

        inactive = new QGroupBox(groupBox);
        inactive->setObjectName(QStringLiteral("inactive"));
        inactive->setMinimumSize(QSize(130, 100));
        inactive->setAlignment(Qt::AlignCenter);
        gridLayout_4 = new QGridLayout(inactive);
        gridLayout_4->setSpacing(0);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        setColorIR = new QPushButton(inactive);
        setColorIR->setObjectName(QStringLiteral("setColorIR"));
        setColorIR->setMinimumSize(QSize(0, 30));
        setColorIR->setMaximumSize(QSize(100, 16777215));
        setColorIR->setText(QStringLiteral(""));

        gridLayout_4->addWidget(setColorIR, 0, 0, 1, 1);


        gridLayout_5->addWidget(inactive, 0, 2, 1, 1, Qt::AlignHCenter);

        activeConfirmedData = new QGroupBox(groupBox);
        activeConfirmedData->setObjectName(QStringLiteral("activeConfirmedData"));
        activeConfirmedData->setMinimumSize(QSize(130, 100));
        activeConfirmedData->setAlignment(Qt::AlignCenter);
        gridLayout_2 = new QGridLayout(activeConfirmedData);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        setColorARC = new QPushButton(activeConfirmedData);
        setColorARC->setObjectName(QStringLiteral("setColorARC"));
        setColorARC->setMinimumSize(QSize(0, 30));
        setColorARC->setMaximumSize(QSize(100, 16777215));
        setColorARC->setText(QStringLiteral(""));

        gridLayout_2->addWidget(setColorARC, 0, 0, 1, 1);


        gridLayout_5->addWidget(activeConfirmedData, 0, 0, 1, 1, Qt::AlignHCenter);


        verticalLayout_4->addWidget(groupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        tabs->addTab(radiantTab, QString());
        updatesTab = new QWidget();
        updatesTab->setObjectName(QStringLiteral("updatesTab"));
        updatesTab_2 = new QVBoxLayout(updatesTab);
        updatesTab_2->setObjectName(QStringLiteral("updatesTab_2"));
        enableUpdates = new QGroupBox(updatesTab);
        enableUpdates->setObjectName(QStringLiteral("enableUpdates"));
        enableUpdates->setFlat(true);
        enableUpdates->setCheckable(true);
        enableUpdates->setChecked(true);
        verticalLayout_12 = new QVBoxLayout(enableUpdates);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        updateFrequency = new QSpinBox(enableUpdates);
        updateFrequency->setObjectName(QStringLiteral("updateFrequency"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(updateFrequency->sizePolicy().hasHeightForWidth());
        updateFrequency->setSizePolicy(sizePolicy1);
        updateFrequency->setMinimum(1);
        updateFrequency->setMaximum(9999);
        updateFrequency->setValue(1);

        gridLayout->addWidget(updateFrequency, 1, 1, 1, 1);

        nextUpdate = new QDateTimeEdit(enableUpdates);
        nextUpdate->setObjectName(QStringLiteral("nextUpdate"));
        nextUpdate->setEnabled(false);
        nextUpdate->setFrame(false);
        nextUpdate->setButtonSymbols(QAbstractSpinBox::NoButtons);

        gridLayout->addWidget(nextUpdate, 2, 1, 1, 1);

        lUpdateFrequency = new QLabel(enableUpdates);
        lUpdateFrequency->setObjectName(QStringLiteral("lUpdateFrequency"));

        gridLayout->addWidget(lUpdateFrequency, 1, 0, 1, 1);

        lNextUpdate = new QLabel(enableUpdates);
        lNextUpdate->setObjectName(QStringLiteral("lNextUpdate"));

        gridLayout->addWidget(lNextUpdate, 2, 0, 1, 1);


        verticalLayout_12->addLayout(gridLayout);


        updatesTab_2->addWidget(enableUpdates);

        groupBox_2 = new QGroupBox(updatesTab);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        lLastUpdate = new QLabel(groupBox_2);
        lLastUpdate->setObjectName(QStringLiteral("lLastUpdate"));

        gridLayout_6->addWidget(lLastUpdate, 0, 0, 1, 1);

        lStatus = new QLabel(groupBox_2);
        lStatus->setObjectName(QStringLiteral("lStatus"));

        gridLayout_6->addWidget(lStatus, 1, 0, 1, 1);

        lastUpdate = new QDateTimeEdit(groupBox_2);
        lastUpdate->setObjectName(QStringLiteral("lastUpdate"));
        lastUpdate->setEnabled(false);
        sizePolicy1.setHeightForWidth(lastUpdate->sizePolicy().hasHeightForWidth());
        lastUpdate->setSizePolicy(sizePolicy1);
        lastUpdate->setFrame(false);
        lastUpdate->setButtonSymbols(QAbstractSpinBox::NoButtons);

        gridLayout_6->addWidget(lastUpdate, 0, 1, 1, 1);

        status = new QLabel(groupBox_2);
        status->setObjectName(QStringLiteral("status"));

        gridLayout_6->addWidget(status, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_6);


        updatesTab_2->addWidget(groupBox_2);

        verticalSpacer_31 = new QSpacerItem(20, 120, QSizePolicy::Minimum, QSizePolicy::Expanding);

        updatesTab_2->addItem(verticalSpacer_31);

        bUpdate = new QPushButton(updatesTab);
        bUpdate->setObjectName(QStringLiteral("bUpdate"));
        sizePolicy1.setHeightForWidth(bUpdate->sizePolicy().hasHeightForWidth());
        bUpdate->setSizePolicy(sizePolicy1);

        updatesTab_2->addWidget(bUpdate);

        tabs->addTab(updatesTab, QString());
        aboutTab = new QWidget();
        aboutTab->setObjectName(QStringLiteral("aboutTab"));
        verticalLayout_11 = new QVBoxLayout(aboutTab);
        verticalLayout_11->setSpacing(9);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        about = new QTextBrowser(aboutTab);
        about->setObjectName(QStringLiteral("about"));
        about->setOpenExternalLinks(true);
        about->setOpenLinks(true);

        verticalLayout_11->addWidget(about);

        tabs->addTab(aboutTab, QString());

        verticalLayout_2->addWidget(tabs);

        tabs->raise();
        TitleBar->raise();

        retranslateUi(MSConfigDialog);

        tabs->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MSConfigDialog);
    } // setupUi

    void retranslateUi(QWidget *MSConfigDialog)
    {
        MSConfigDialog->setWindowTitle(QApplication::translate("MSConfigDialog", "Meteor Showers Configuration", 0));
        stelWindowTitle->setText(QApplication::translate("MSConfigDialog", "Meteor Showers: Settings", 0));
        closeStelWindow->setText(QString());
#ifndef QT_NO_TOOLTIP
        displayMeteorShowerBox->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        displayMeteorShowerBox->setTitle(QApplication::translate("MSConfigDialog", "General settings", 0));
        enableAtStartUp->setText(QApplication::translate("MSConfigDialog", "Enable plugin at startup", 0));
        showEnableButton->setText(QApplication::translate("MSConfigDialog", "Show a button to enable/disable the plugin", 0));
        showSearchButton->setText(QApplication::translate("MSConfigDialog", "Show a button to open the search panel", 0));
        bRestoreDefaults->setText(QApplication::translate("MSConfigDialog", "Restore default settings", 0));
        tabs->setTabText(tabs->indexOf(generalTab), QApplication::translate("MSConfigDialog", "General", 0));
        enableMarker->setTitle(QApplication::translate("MSConfigDialog", "Show radiant marker", 0));
        enableLabels->setText(QApplication::translate("MSConfigDialog", "Show radiant labels", 0));
        activeRadiantsOnly->setText(QApplication::translate("MSConfigDialog", "Show active radiants only", 0));
#ifndef QT_NO_TOOLTIP
        fontSize->setToolTip(QApplication::translate("MSConfigDialog", "Label font size (pixels)", 0));
#endif // QT_NO_TOOLTIP
        groupBox->setTitle(QApplication::translate("MSConfigDialog", "Set radiant color", 0));
#ifndef QT_NO_TOOLTIP
        activeGenericData->setToolTip(QApplication::translate("MSConfigDialog", "Active Radiant - Generic Data", 0));
#endif // QT_NO_TOOLTIP
        activeGenericData->setTitle(QApplication::translate("MSConfigDialog", "Generic", 0));
#ifndef QT_NO_TOOLTIP
        inactive->setToolTip(QApplication::translate("MSConfigDialog", "Inactive Radiant", 0));
#endif // QT_NO_TOOLTIP
        inactive->setTitle(QApplication::translate("MSConfigDialog", "Inactive", 0));
#ifndef QT_NO_TOOLTIP
        activeConfirmedData->setToolTip(QApplication::translate("MSConfigDialog", "Active Radiant - Confirmed Data", 0));
#endif // QT_NO_TOOLTIP
        activeConfirmedData->setTitle(QApplication::translate("MSConfigDialog", "Confirmed", 0));
        tabs->setTabText(tabs->indexOf(radiantTab), QApplication::translate("MSConfigDialog", "Radiant", 0));
        enableUpdates->setTitle(QApplication::translate("MSConfigDialog", "Enable automatic updates", 0));
        lUpdateFrequency->setText(QApplication::translate("MSConfigDialog", "Update frequency (hours):", 0));
        lNextUpdate->setText(QApplication::translate("MSConfigDialog", "Next update:", 0));
        groupBox_2->setTitle(QApplication::translate("MSConfigDialog", "Last attempt to update", 0));
        lLastUpdate->setText(QApplication::translate("MSConfigDialog", "Date:", 0));
        lStatus->setText(QApplication::translate("MSConfigDialog", "Status:", 0));
        status->setText(QString());
        bUpdate->setText(QApplication::translate("MSConfigDialog", "Update now", 0));
        tabs->setTabText(tabs->indexOf(updatesTab), QApplication::translate("MSConfigDialog", "Update", 0));
        tabs->setTabText(tabs->indexOf(aboutTab), QApplication::translate("MSConfigDialog", "About", "tab in plugin windows"));
    } // retranslateUi

};

namespace Ui {
    class MSConfigDialog: public Ui_MSConfigDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MSCONFIGDIALOG_H
