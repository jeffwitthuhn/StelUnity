/********************************************************************************
** Form generated from reading UI file 'exoplanetsDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXOPLANETSDIALOG_H
#define UI_EXOPLANETSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Dialog.hpp"
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_exoplanetsDialog
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
    QWidget *settingsTab;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *updatesGroup;
    QVBoxLayout *verticalLayout_12;
    QCheckBox *internetUpdatesCheckbox;
    QGridLayout *gridLayout;
    QLabel *lastUpdateLabel;
    QDateTimeEdit *lastUpdateDateTimeEdit;
    QLabel *updateFrequencyLabel;
    QSpinBox *updateFrequencySpinBox;
    QLabel *nextUpdateLabel;
    QSpacerItem *horizontalSpacer;
    QPushButton *updateButton;
    QGroupBox *displayBox;
    QVBoxLayout *verticalLayout;
    QCheckBox *displayModeCheckBox;
    QCheckBox *timelineModeCheckBox;
    QCheckBox *habitableModeCheckBox;
    QCheckBox *displayShowDesignationsCheckBox;
    QCheckBox *displayAtStartupCheckBox;
    QCheckBox *displayShowExoplanetsButton;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *restoreDefaultsButton;
    QPushButton *saveSettingsButton;
    QWidget *diagramTab;
    QGridLayout *gridLayout_3;
    QGroupBox *diagramGroupBox;
    QGridLayout *gridLayout_2;
    QPushButton *plotDiagram;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_9;
    QLabel *labelY;
    QCheckBox *checkBoxLogY;
    QComboBox *comboAxisY;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *minY;
    QLabel *labelMinMaxY;
    QLineEdit *maxY;
    QCustomPlot *customPlot;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_8;
    QLabel *labelX;
    QCheckBox *checkBoxLogX;
    QComboBox *comboAxisX;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *minX;
    QLabel *labelMinMaxX;
    QLineEdit *maxX;
    QWidget *infoTab;
    QVBoxLayout *verticalLayoutInfoBox;
    QTextBrowser *infoTextBrowser;
    QWidget *websitesTab;
    QVBoxLayout *verticalLayoutWebsitesBox;
    QTextBrowser *websitesTextBrowser;
    QWidget *aboutTab;
    QVBoxLayout *verticalLayoutAboutBox;
    QTextBrowser *aboutTextBrowser;

    void setupUi(QWidget *exoplanetsDialog)
    {
        if (exoplanetsDialog->objectName().isEmpty())
            exoplanetsDialog->setObjectName(QStringLiteral("exoplanetsDialog"));
        exoplanetsDialog->resize(530, 501);
        verticalLayout_2 = new QVBoxLayout(exoplanetsDialog);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        TitleBar = new BarFrame(exoplanetsDialog);
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

        tabs = new QTabWidget(exoplanetsDialog);
        tabs->setObjectName(QStringLiteral("tabs"));
        tabs->setDocumentMode(false);
        settingsTab = new QWidget();
        settingsTab->setObjectName(QStringLiteral("settingsTab"));
        verticalLayout_3 = new QVBoxLayout(settingsTab);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        updatesGroup = new QGroupBox(settingsTab);
        updatesGroup->setObjectName(QStringLiteral("updatesGroup"));
        updatesGroup->setFlat(true);
        updatesGroup->setCheckable(false);
        verticalLayout_12 = new QVBoxLayout(updatesGroup);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        internetUpdatesCheckbox = new QCheckBox(updatesGroup);
        internetUpdatesCheckbox->setObjectName(QStringLiteral("internetUpdatesCheckbox"));

        verticalLayout_12->addWidget(internetUpdatesCheckbox);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        lastUpdateLabel = new QLabel(updatesGroup);
        lastUpdateLabel->setObjectName(QStringLiteral("lastUpdateLabel"));

        gridLayout->addWidget(lastUpdateLabel, 0, 0, 1, 1);

        lastUpdateDateTimeEdit = new QDateTimeEdit(updatesGroup);
        lastUpdateDateTimeEdit->setObjectName(QStringLiteral("lastUpdateDateTimeEdit"));
        lastUpdateDateTimeEdit->setEnabled(false);
        lastUpdateDateTimeEdit->setFrame(false);
        lastUpdateDateTimeEdit->setButtonSymbols(QAbstractSpinBox::NoButtons);

        gridLayout->addWidget(lastUpdateDateTimeEdit, 0, 2, 1, 1);

        updateFrequencyLabel = new QLabel(updatesGroup);
        updateFrequencyLabel->setObjectName(QStringLiteral("updateFrequencyLabel"));

        gridLayout->addWidget(updateFrequencyLabel, 1, 0, 1, 1);

        updateFrequencySpinBox = new QSpinBox(updatesGroup);
        updateFrequencySpinBox->setObjectName(QStringLiteral("updateFrequencySpinBox"));
        updateFrequencySpinBox->setMinimum(1);
        updateFrequencySpinBox->setMaximum(9999);
        updateFrequencySpinBox->setValue(1);

        gridLayout->addWidget(updateFrequencySpinBox, 1, 2, 1, 1);

        nextUpdateLabel = new QLabel(updatesGroup);
        nextUpdateLabel->setObjectName(QStringLiteral("nextUpdateLabel"));

        gridLayout->addWidget(nextUpdateLabel, 2, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(17, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 1, 1, 1);

        updateButton = new QPushButton(updatesGroup);
        updateButton->setObjectName(QStringLiteral("updateButton"));

        gridLayout->addWidget(updateButton, 2, 2, 1, 1);


        verticalLayout_12->addLayout(gridLayout);


        verticalLayout_3->addWidget(updatesGroup);

        displayBox = new QGroupBox(settingsTab);
        displayBox->setObjectName(QStringLiteral("displayBox"));
        verticalLayout = new QVBoxLayout(displayBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        displayModeCheckBox = new QCheckBox(displayBox);
        displayModeCheckBox->setObjectName(QStringLiteral("displayModeCheckBox"));

        verticalLayout->addWidget(displayModeCheckBox);

        timelineModeCheckBox = new QCheckBox(displayBox);
        timelineModeCheckBox->setObjectName(QStringLiteral("timelineModeCheckBox"));

        verticalLayout->addWidget(timelineModeCheckBox);

        habitableModeCheckBox = new QCheckBox(displayBox);
        habitableModeCheckBox->setObjectName(QStringLiteral("habitableModeCheckBox"));

        verticalLayout->addWidget(habitableModeCheckBox);

        displayShowDesignationsCheckBox = new QCheckBox(displayBox);
        displayShowDesignationsCheckBox->setObjectName(QStringLiteral("displayShowDesignationsCheckBox"));

        verticalLayout->addWidget(displayShowDesignationsCheckBox);

        displayAtStartupCheckBox = new QCheckBox(displayBox);
        displayAtStartupCheckBox->setObjectName(QStringLiteral("displayAtStartupCheckBox"));

        verticalLayout->addWidget(displayAtStartupCheckBox);

        displayShowExoplanetsButton = new QCheckBox(displayBox);
        displayShowExoplanetsButton->setObjectName(QStringLiteral("displayShowExoplanetsButton"));

        verticalLayout->addWidget(displayShowExoplanetsButton);


        verticalLayout_3->addWidget(displayBox);

        verticalSpacer_3 = new QSpacerItem(20, 120, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        restoreDefaultsButton = new QPushButton(settingsTab);
        restoreDefaultsButton->setObjectName(QStringLiteral("restoreDefaultsButton"));
        sizePolicy.setHeightForWidth(restoreDefaultsButton->sizePolicy().hasHeightForWidth());
        restoreDefaultsButton->setSizePolicy(sizePolicy);

        horizontalLayout_7->addWidget(restoreDefaultsButton);

        saveSettingsButton = new QPushButton(settingsTab);
        saveSettingsButton->setObjectName(QStringLiteral("saveSettingsButton"));
        sizePolicy.setHeightForWidth(saveSettingsButton->sizePolicy().hasHeightForWidth());
        saveSettingsButton->setSizePolicy(sizePolicy);

        horizontalLayout_7->addWidget(saveSettingsButton);


        verticalLayout_3->addLayout(horizontalLayout_7);

        tabs->addTab(settingsTab, QString());
        diagramTab = new QWidget();
        diagramTab->setObjectName(QStringLiteral("diagramTab"));
        gridLayout_3 = new QGridLayout(diagramTab);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(6, 6, 6, 6);
        diagramGroupBox = new QGroupBox(diagramTab);
        diagramGroupBox->setObjectName(QStringLiteral("diagramGroupBox"));
        gridLayout_2 = new QGridLayout(diagramGroupBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        plotDiagram = new QPushButton(diagramGroupBox);
        plotDiagram->setObjectName(QStringLiteral("plotDiagram"));
        plotDiagram->setMaximumSize(QSize(280, 16777215));

        gridLayout_2->addWidget(plotDiagram, 7, 1, 1, 1);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        labelY = new QLabel(diagramGroupBox);
        labelY->setObjectName(QStringLiteral("labelY"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        labelY->setFont(font);

        horizontalLayout_9->addWidget(labelY);

        checkBoxLogY = new QCheckBox(diagramGroupBox);
        checkBoxLogY->setObjectName(QStringLiteral("checkBoxLogY"));

        horizontalLayout_9->addWidget(checkBoxLogY, 0, Qt::AlignRight);


        verticalLayout_5->addLayout(horizontalLayout_9);

        comboAxisY = new QComboBox(diagramGroupBox);
        comboAxisY->setObjectName(QStringLiteral("comboAxisY"));

        verticalLayout_5->addWidget(comboAxisY);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        minY = new QLineEdit(diagramGroupBox);
        minY->setObjectName(QStringLiteral("minY"));
        minY->setInputMethodHints(Qt::ImhDigitsOnly);

        horizontalLayout_3->addWidget(minY);

        labelMinMaxY = new QLabel(diagramGroupBox);
        labelMinMaxY->setObjectName(QStringLiteral("labelMinMaxY"));
        labelMinMaxY->setText(QStringLiteral("-"));

        horizontalLayout_3->addWidget(labelMinMaxY);

        maxY = new QLineEdit(diagramGroupBox);
        maxY->setObjectName(QStringLiteral("maxY"));
        maxY->setInputMethodHints(Qt::ImhDigitsOnly);

        horizontalLayout_3->addWidget(maxY);


        verticalLayout_5->addLayout(horizontalLayout_3);


        gridLayout_2->addLayout(verticalLayout_5, 0, 1, 1, 1);

        customPlot = new QCustomPlot(diagramGroupBox);
        customPlot->setObjectName(QStringLiteral("customPlot"));

        gridLayout_2->addWidget(customPlot, 3, 0, 4, 2);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        labelX = new QLabel(diagramGroupBox);
        labelX->setObjectName(QStringLiteral("labelX"));
        labelX->setFont(font);

        horizontalLayout_8->addWidget(labelX);

        checkBoxLogX = new QCheckBox(diagramGroupBox);
        checkBoxLogX->setObjectName(QStringLiteral("checkBoxLogX"));

        horizontalLayout_8->addWidget(checkBoxLogX, 0, Qt::AlignRight);


        verticalLayout_4->addLayout(horizontalLayout_8);

        comboAxisX = new QComboBox(diagramGroupBox);
        comboAxisX->setObjectName(QStringLiteral("comboAxisX"));

        verticalLayout_4->addWidget(comboAxisX);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        minX = new QLineEdit(diagramGroupBox);
        minX->setObjectName(QStringLiteral("minX"));
        minX->setInputMethodHints(Qt::ImhDigitsOnly);

        horizontalLayout_2->addWidget(minX);

        labelMinMaxX = new QLabel(diagramGroupBox);
        labelMinMaxX->setObjectName(QStringLiteral("labelMinMaxX"));
        labelMinMaxX->setText(QStringLiteral("-"));

        horizontalLayout_2->addWidget(labelMinMaxX);

        maxX = new QLineEdit(diagramGroupBox);
        maxX->setObjectName(QStringLiteral("maxX"));
        maxX->setInputMethodHints(Qt::ImhDigitsOnly);

        horizontalLayout_2->addWidget(maxX);


        verticalLayout_4->addLayout(horizontalLayout_2);


        gridLayout_2->addLayout(verticalLayout_4, 0, 0, 1, 1);


        gridLayout_3->addWidget(diagramGroupBox, 0, 0, 2, 1);

        tabs->addTab(diagramTab, QString());
        infoTab = new QWidget();
        infoTab->setObjectName(QStringLiteral("infoTab"));
        verticalLayoutInfoBox = new QVBoxLayout(infoTab);
        verticalLayoutInfoBox->setSpacing(9);
        verticalLayoutInfoBox->setObjectName(QStringLiteral("verticalLayoutInfoBox"));
        infoTextBrowser = new QTextBrowser(infoTab);
        infoTextBrowser->setObjectName(QStringLiteral("infoTextBrowser"));
        infoTextBrowser->setOpenExternalLinks(true);
        infoTextBrowser->setOpenLinks(true);

        verticalLayoutInfoBox->addWidget(infoTextBrowser);

        tabs->addTab(infoTab, QString());
        websitesTab = new QWidget();
        websitesTab->setObjectName(QStringLiteral("websitesTab"));
        verticalLayoutWebsitesBox = new QVBoxLayout(websitesTab);
        verticalLayoutWebsitesBox->setSpacing(9);
        verticalLayoutWebsitesBox->setObjectName(QStringLiteral("verticalLayoutWebsitesBox"));
        websitesTextBrowser = new QTextBrowser(websitesTab);
        websitesTextBrowser->setObjectName(QStringLiteral("websitesTextBrowser"));
        websitesTextBrowser->setOpenExternalLinks(true);
        websitesTextBrowser->setOpenLinks(true);

        verticalLayoutWebsitesBox->addWidget(websitesTextBrowser);

        tabs->addTab(websitesTab, QString());
        aboutTab = new QWidget();
        aboutTab->setObjectName(QStringLiteral("aboutTab"));
        verticalLayoutAboutBox = new QVBoxLayout(aboutTab);
        verticalLayoutAboutBox->setSpacing(9);
        verticalLayoutAboutBox->setObjectName(QStringLiteral("verticalLayoutAboutBox"));
        aboutTextBrowser = new QTextBrowser(aboutTab);
        aboutTextBrowser->setObjectName(QStringLiteral("aboutTextBrowser"));
        aboutTextBrowser->setOpenExternalLinks(true);
        aboutTextBrowser->setOpenLinks(true);

        verticalLayoutAboutBox->addWidget(aboutTextBrowser);

        tabs->addTab(aboutTab, QString());

        verticalLayout_2->addWidget(tabs);


        retranslateUi(exoplanetsDialog);

        tabs->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(exoplanetsDialog);
    } // setupUi

    void retranslateUi(QWidget *exoplanetsDialog)
    {
        exoplanetsDialog->setWindowTitle(QApplication::translate("exoplanetsDialog", "Exoplanets Configuration", 0));
        stelWindowTitle->setText(QApplication::translate("exoplanetsDialog", "Exoplanets Plug-in Configuration", 0));
        closeStelWindow->setText(QString());
        updatesGroup->setTitle(QApplication::translate("exoplanetsDialog", "Update exoplanets data from Internet", 0));
        internetUpdatesCheckbox->setText(QApplication::translate("exoplanetsDialog", "Update from Internet sources", 0));
        lastUpdateLabel->setText(QApplication::translate("exoplanetsDialog", "Last update:", 0));
        updateFrequencyLabel->setText(QApplication::translate("exoplanetsDialog", "Update frequency (hours):", 0));
        nextUpdateLabel->setText(QApplication::translate("exoplanetsDialog", "[next update info]", 0));
        updateButton->setText(QApplication::translate("exoplanetsDialog", "Update now", 0));
        displayBox->setTitle(QApplication::translate("exoplanetsDialog", "Settings for exoplanets", 0));
#ifndef QT_NO_TOOLTIP
        displayModeCheckBox->setToolTip(QApplication::translate("exoplanetsDialog", "Plot all systems with exoplanets without labels", 0));
#endif // QT_NO_TOOLTIP
        displayModeCheckBox->setText(QApplication::translate("exoplanetsDialog", "Enable display of distribution for exoplanets", 0));
#ifndef QT_NO_TOOLTIP
        timelineModeCheckBox->setToolTip(QApplication::translate("exoplanetsDialog", "Display exoplanets since their discovery", 0));
#endif // QT_NO_TOOLTIP
        timelineModeCheckBox->setText(QApplication::translate("exoplanetsDialog", "Enable timeline discovery of exoplanets", 0));
#ifndef QT_NO_TOOLTIP
        habitableModeCheckBox->setToolTip(QApplication::translate("exoplanetsDialog", "Display of the planetary systems, which contains the potential habitable exoplanets", 0));
#endif // QT_NO_TOOLTIP
        habitableModeCheckBox->setText(QApplication::translate("exoplanetsDialog", "Enable display of the potential habitable exoplanets only", 0));
        displayShowDesignationsCheckBox->setText(QApplication::translate("exoplanetsDialog", "Enable display of designations for exoplanets", 0));
        displayAtStartupCheckBox->setText(QApplication::translate("exoplanetsDialog", "Enable display at startup", 0));
        displayShowExoplanetsButton->setText(QApplication::translate("exoplanetsDialog", "Show exoplanets button on toolbar", 0));
        restoreDefaultsButton->setText(QApplication::translate("exoplanetsDialog", "Restore default settings", 0));
        saveSettingsButton->setText(QApplication::translate("exoplanetsDialog", "Save settings as default", 0));
        tabs->setTabText(tabs->indexOf(settingsTab), QApplication::translate("exoplanetsDialog", "Settings", 0));
        diagramGroupBox->setTitle(QApplication::translate("exoplanetsDialog", "Diagrams: scatter plot", 0));
        plotDiagram->setText(QApplication::translate("exoplanetsDialog", "Plot", 0));
        labelY->setText(QApplication::translate("exoplanetsDialog", "Y axis", 0));
#ifndef QT_NO_TOOLTIP
        checkBoxLogY->setToolTip(QApplication::translate("exoplanetsDialog", "Logarithmic scale", 0));
#endif // QT_NO_TOOLTIP
        checkBoxLogY->setText(QApplication::translate("exoplanetsDialog", "log scale", 0));
        minY->setPlaceholderText(QApplication::translate("exoplanetsDialog", "min", 0));
        maxY->setPlaceholderText(QApplication::translate("exoplanetsDialog", "max", 0));
        labelX->setText(QApplication::translate("exoplanetsDialog", "X axis", 0));
#ifndef QT_NO_TOOLTIP
        checkBoxLogX->setToolTip(QApplication::translate("exoplanetsDialog", "Logarithmic scale", 0));
#endif // QT_NO_TOOLTIP
        checkBoxLogX->setText(QApplication::translate("exoplanetsDialog", "log scale", 0));
        minX->setText(QString());
        minX->setPlaceholderText(QApplication::translate("exoplanetsDialog", "min", 0));
        maxX->setPlaceholderText(QApplication::translate("exoplanetsDialog", "max", 0));
        tabs->setTabText(tabs->indexOf(diagramTab), QApplication::translate("exoplanetsDialog", "Diagram", "tab in plugin windows"));
        tabs->setTabText(tabs->indexOf(infoTab), QApplication::translate("exoplanetsDialog", "Info", "tab in plugin windows"));
        tabs->setTabText(tabs->indexOf(websitesTab), QApplication::translate("exoplanetsDialog", "Websites", "tab in plugin windows"));
        tabs->setTabText(tabs->indexOf(aboutTab), QApplication::translate("exoplanetsDialog", "About", "tab in plugin windows"));
    } // retranslateUi

};

namespace Ui {
    class exoplanetsDialog: public Ui_exoplanetsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXOPLANETSDIALOG_H