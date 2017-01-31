/********************************************************************************
** Form generated from reading UI file 'archaeoLinesDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ARCHAEOLINESDIALOG_H
#define UI_ARCHAEOLINESDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Dialog.hpp"

QT_BEGIN_NAMESPACE

class Ui_archaeoLinesDialog
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
    QLabel *switchToWindowedModeLabel;
    QGridLayout *gridLayout;
    QLabel *geographicLocation2LongitudeLabel;
    QDoubleSpinBox *geographicLocation2LongitudeDoubleSpinBox;
    QLabel *geographicLocation2LatitudeLabel;
    QDoubleSpinBox *geographicLocation2LatitudeDoubleSpinBox;
    QCheckBox *customDeclination1CheckBox;
    QToolButton *customDeclination1ColorToolButton;
    QDoubleSpinBox *customDeclination1DoubleSpinBox;
    QLineEdit *customDeclination1LineEdit;
    QCheckBox *currentSunCheckBox;
    QLineEdit *geographicLocation1LineEdit;
    QCheckBox *geographicLocation1CheckBox;
    QLabel *geographicLocation1LongitudeLabel;
    QToolButton *geographicLocation1ColorToolButton;
    QLabel *geographicLocation1LatitudeLabel;
    QDoubleSpinBox *geographicLocation1LatitudeDoubleSpinBox;
    QToolButton *geographicLocation2ColorToolButton;
    QLineEdit *geographicLocation2LineEdit;
    QDoubleSpinBox *geographicLocation1LongitudeDoubleSpinBox;
    QCheckBox *geographicLocation2CheckBox;
    QToolButton *crossquarterColorToolButton;
    QCheckBox *selectedObjectCheckBox;
    QToolButton *majorStandstillColorToolButton;
    QCheckBox *minorStandstillCheckBox;
    QComboBox *currentPlanetComboBox;
    QDoubleSpinBox *customAzimuth1DoubleSpinBox;
    QCheckBox *nadirPassageCheckBox;
    QToolButton *minorStandstillColorToolButton;
    QToolButton *customAzimuth1ColorToolButton;
    QCheckBox *customAzimuth1CheckBox;
    QToolButton *customAzimuth2ColorToolButton;
    QDoubleSpinBox *customAzimuth2DoubleSpinBox;
    QCheckBox *customAzimuth2CheckBox;
    QLineEdit *customAzimuth1LineEdit;
    QToolButton *nadirPassageColorToolButton;
    QToolButton *currentMoonColorToolButton;
    QToolButton *currentPlanetColorToolButton;
    QLineEdit *customAzimuth2LineEdit;
    QToolButton *solsticesColorToolButton;
    QCheckBox *solsticesCheckBox;
    QToolButton *currentSunColorToolButton;
    QCheckBox *currentMoonCheckBox;
    QCheckBox *zenithPassageCheckBox;
    QToolButton *selectedObjectColorToolButton;
    QToolButton *zenithPassageColorToolButton;
    QCheckBox *crossquarterCheckBox;
    QCheckBox *equinoxCheckBox;
    QToolButton *equinoxColorToolButton;
    QCheckBox *majorStandstillCheckBox;
    QToolButton *customDeclination2ColorToolButton;
    QLineEdit *customDeclination2LineEdit;
    QDoubleSpinBox *customDeclination2DoubleSpinBox;
    QCheckBox *customDeclination2CheckBox;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *restoreDefaultsButton;
    QWidget *aboutTab;
    QVBoxLayout *verticalLayout_11;
    QTextBrowser *aboutTextBrowser;

    void setupUi(QWidget *archaeoLinesDialog)
    {
        if (archaeoLinesDialog->objectName().isEmpty())
            archaeoLinesDialog->setObjectName(QStringLiteral("archaeoLinesDialog"));
        archaeoLinesDialog->resize(530, 606);
        verticalLayout_2 = new QVBoxLayout(archaeoLinesDialog);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        TitleBar = new BarFrame(archaeoLinesDialog);
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

        tabs = new QTabWidget(archaeoLinesDialog);
        tabs->setObjectName(QStringLiteral("tabs"));
        tabs->setDocumentMode(false);
        settingsTab = new QWidget();
        settingsTab->setObjectName(QStringLiteral("settingsTab"));
        verticalLayout_3 = new QVBoxLayout(settingsTab);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        switchToWindowedModeLabel = new QLabel(settingsTab);
        switchToWindowedModeLabel->setObjectName(QStringLiteral("switchToWindowedModeLabel"));

        verticalLayout_3->addWidget(switchToWindowedModeLabel);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        geographicLocation2LongitudeLabel = new QLabel(settingsTab);
        geographicLocation2LongitudeLabel->setObjectName(QStringLiteral("geographicLocation2LongitudeLabel"));
        geographicLocation2LongitudeLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(geographicLocation2LongitudeLabel, 14, 0, 1, 1);

        geographicLocation2LongitudeDoubleSpinBox = new QDoubleSpinBox(settingsTab);
        geographicLocation2LongitudeDoubleSpinBox->setObjectName(QStringLiteral("geographicLocation2LongitudeDoubleSpinBox"));
        geographicLocation2LongitudeDoubleSpinBox->setMinimum(-180);
        geographicLocation2LongitudeDoubleSpinBox->setMaximum(359.99);
        geographicLocation2LongitudeDoubleSpinBox->setSingleStep(0.1);

        gridLayout->addWidget(geographicLocation2LongitudeDoubleSpinBox, 14, 1, 1, 1);

        geographicLocation2LatitudeLabel = new QLabel(settingsTab);
        geographicLocation2LatitudeLabel->setObjectName(QStringLiteral("geographicLocation2LatitudeLabel"));
        geographicLocation2LatitudeLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(geographicLocation2LatitudeLabel, 14, 2, 1, 1);

        geographicLocation2LatitudeDoubleSpinBox = new QDoubleSpinBox(settingsTab);
        geographicLocation2LatitudeDoubleSpinBox->setObjectName(QStringLiteral("geographicLocation2LatitudeDoubleSpinBox"));
        geographicLocation2LatitudeDoubleSpinBox->setMinimum(-90);
        geographicLocation2LatitudeDoubleSpinBox->setMaximum(90);
        geographicLocation2LatitudeDoubleSpinBox->setSingleStep(0.1);

        gridLayout->addWidget(geographicLocation2LatitudeDoubleSpinBox, 14, 3, 1, 1);

        customDeclination1CheckBox = new QCheckBox(settingsTab);
        customDeclination1CheckBox->setObjectName(QStringLiteral("customDeclination1CheckBox"));

        gridLayout->addWidget(customDeclination1CheckBox, 17, 0, 1, 1);

        customDeclination1ColorToolButton = new QToolButton(settingsTab);
        customDeclination1ColorToolButton->setObjectName(QStringLiteral("customDeclination1ColorToolButton"));
        customDeclination1ColorToolButton->setText(QStringLiteral("Custom Declination 1 Color..."));

        gridLayout->addWidget(customDeclination1ColorToolButton, 17, 3, 1, 1);

        customDeclination1DoubleSpinBox = new QDoubleSpinBox(settingsTab);
        customDeclination1DoubleSpinBox->setObjectName(QStringLiteral("customDeclination1DoubleSpinBox"));
        customDeclination1DoubleSpinBox->setMinimum(-89.99);
        customDeclination1DoubleSpinBox->setMaximum(89.99);
        customDeclination1DoubleSpinBox->setSingleStep(0.1);

        gridLayout->addWidget(customDeclination1DoubleSpinBox, 17, 1, 1, 1);

        customDeclination1LineEdit = new QLineEdit(settingsTab);
        customDeclination1LineEdit->setObjectName(QStringLiteral("customDeclination1LineEdit"));

        gridLayout->addWidget(customDeclination1LineEdit, 17, 2, 1, 1);

        currentSunCheckBox = new QCheckBox(settingsTab);
        currentSunCheckBox->setObjectName(QStringLiteral("currentSunCheckBox"));

        gridLayout->addWidget(currentSunCheckBox, 7, 0, 1, 1);

        geographicLocation1LineEdit = new QLineEdit(settingsTab);
        geographicLocation1LineEdit->setObjectName(QStringLiteral("geographicLocation1LineEdit"));

        gridLayout->addWidget(geographicLocation1LineEdit, 11, 2, 1, 1);

        geographicLocation1CheckBox = new QCheckBox(settingsTab);
        geographicLocation1CheckBox->setObjectName(QStringLiteral("geographicLocation1CheckBox"));

        gridLayout->addWidget(geographicLocation1CheckBox, 11, 0, 1, 1);

        geographicLocation1LongitudeLabel = new QLabel(settingsTab);
        geographicLocation1LongitudeLabel->setObjectName(QStringLiteral("geographicLocation1LongitudeLabel"));
        geographicLocation1LongitudeLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(geographicLocation1LongitudeLabel, 12, 0, 1, 1);

        geographicLocation1ColorToolButton = new QToolButton(settingsTab);
        geographicLocation1ColorToolButton->setObjectName(QStringLiteral("geographicLocation1ColorToolButton"));
        geographicLocation1ColorToolButton->setText(QStringLiteral("GeographicLocation1Color..."));

        gridLayout->addWidget(geographicLocation1ColorToolButton, 11, 3, 1, 1);

        geographicLocation1LatitudeLabel = new QLabel(settingsTab);
        geographicLocation1LatitudeLabel->setObjectName(QStringLiteral("geographicLocation1LatitudeLabel"));
        geographicLocation1LatitudeLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(geographicLocation1LatitudeLabel, 12, 2, 1, 1);

        geographicLocation1LatitudeDoubleSpinBox = new QDoubleSpinBox(settingsTab);
        geographicLocation1LatitudeDoubleSpinBox->setObjectName(QStringLiteral("geographicLocation1LatitudeDoubleSpinBox"));
        geographicLocation1LatitudeDoubleSpinBox->setMinimum(-90);
        geographicLocation1LatitudeDoubleSpinBox->setMaximum(90);
        geographicLocation1LatitudeDoubleSpinBox->setSingleStep(0.1);

        gridLayout->addWidget(geographicLocation1LatitudeDoubleSpinBox, 12, 3, 1, 1);

        geographicLocation2ColorToolButton = new QToolButton(settingsTab);
        geographicLocation2ColorToolButton->setObjectName(QStringLiteral("geographicLocation2ColorToolButton"));
        geographicLocation2ColorToolButton->setText(QStringLiteral("GeographicLocation2Color..."));

        gridLayout->addWidget(geographicLocation2ColorToolButton, 13, 3, 1, 1);

        geographicLocation2LineEdit = new QLineEdit(settingsTab);
        geographicLocation2LineEdit->setObjectName(QStringLiteral("geographicLocation2LineEdit"));

        gridLayout->addWidget(geographicLocation2LineEdit, 13, 2, 1, 1);

        geographicLocation1LongitudeDoubleSpinBox = new QDoubleSpinBox(settingsTab);
        geographicLocation1LongitudeDoubleSpinBox->setObjectName(QStringLiteral("geographicLocation1LongitudeDoubleSpinBox"));
        geographicLocation1LongitudeDoubleSpinBox->setMinimum(-180);
        geographicLocation1LongitudeDoubleSpinBox->setMaximum(359.99);
        geographicLocation1LongitudeDoubleSpinBox->setSingleStep(0.1);

        gridLayout->addWidget(geographicLocation1LongitudeDoubleSpinBox, 12, 1, 1, 1);

        geographicLocation2CheckBox = new QCheckBox(settingsTab);
        geographicLocation2CheckBox->setObjectName(QStringLiteral("geographicLocation2CheckBox"));

        gridLayout->addWidget(geographicLocation2CheckBox, 13, 0, 1, 1);

        crossquarterColorToolButton = new QToolButton(settingsTab);
        crossquarterColorToolButton->setObjectName(QStringLiteral("crossquarterColorToolButton"));
        crossquarterColorToolButton->setText(QStringLiteral("CrossquarterColor..."));

        gridLayout->addWidget(crossquarterColorToolButton, 2, 3, 1, 1);

        selectedObjectCheckBox = new QCheckBox(settingsTab);
        selectedObjectCheckBox->setObjectName(QStringLiteral("selectedObjectCheckBox"));

        gridLayout->addWidget(selectedObjectCheckBox, 10, 0, 1, 1);

        majorStandstillColorToolButton = new QToolButton(settingsTab);
        majorStandstillColorToolButton->setObjectName(QStringLiteral("majorStandstillColorToolButton"));
        majorStandstillColorToolButton->setText(QStringLiteral("majorLunarStandstillColor..."));

        gridLayout->addWidget(majorStandstillColorToolButton, 3, 3, 1, 1);

        minorStandstillCheckBox = new QCheckBox(settingsTab);
        minorStandstillCheckBox->setObjectName(QStringLiteral("minorStandstillCheckBox"));

        gridLayout->addWidget(minorStandstillCheckBox, 4, 0, 1, 1);

        currentPlanetComboBox = new QComboBox(settingsTab);
        currentPlanetComboBox->setObjectName(QStringLiteral("currentPlanetComboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(currentPlanetComboBox->sizePolicy().hasHeightForWidth());
        currentPlanetComboBox->setSizePolicy(sizePolicy1);
        currentPlanetComboBox->setMinimumSize(QSize(150, 0));

        gridLayout->addWidget(currentPlanetComboBox, 9, 0, 1, 1);

        customAzimuth1DoubleSpinBox = new QDoubleSpinBox(settingsTab);
        customAzimuth1DoubleSpinBox->setObjectName(QStringLiteral("customAzimuth1DoubleSpinBox"));
        customAzimuth1DoubleSpinBox->setMaximum(359.99);

        gridLayout->addWidget(customAzimuth1DoubleSpinBox, 15, 1, 1, 1);

        nadirPassageCheckBox = new QCheckBox(settingsTab);
        nadirPassageCheckBox->setObjectName(QStringLiteral("nadirPassageCheckBox"));

        gridLayout->addWidget(nadirPassageCheckBox, 6, 0, 1, 1);

        minorStandstillColorToolButton = new QToolButton(settingsTab);
        minorStandstillColorToolButton->setObjectName(QStringLiteral("minorStandstillColorToolButton"));
        minorStandstillColorToolButton->setText(QStringLiteral("minorLunarStandstillColor..."));

        gridLayout->addWidget(minorStandstillColorToolButton, 4, 3, 1, 1);

        customAzimuth1ColorToolButton = new QToolButton(settingsTab);
        customAzimuth1ColorToolButton->setObjectName(QStringLiteral("customAzimuth1ColorToolButton"));
        customAzimuth1ColorToolButton->setText(QStringLiteral("Custom Azimuth 1 Color..."));

        gridLayout->addWidget(customAzimuth1ColorToolButton, 15, 3, 1, 1);

        customAzimuth1CheckBox = new QCheckBox(settingsTab);
        customAzimuth1CheckBox->setObjectName(QStringLiteral("customAzimuth1CheckBox"));

        gridLayout->addWidget(customAzimuth1CheckBox, 15, 0, 1, 1);

        customAzimuth2ColorToolButton = new QToolButton(settingsTab);
        customAzimuth2ColorToolButton->setObjectName(QStringLiteral("customAzimuth2ColorToolButton"));
        customAzimuth2ColorToolButton->setText(QStringLiteral("Custom Azimuth 2 Color..."));

        gridLayout->addWidget(customAzimuth2ColorToolButton, 16, 3, 1, 1);

        customAzimuth2DoubleSpinBox = new QDoubleSpinBox(settingsTab);
        customAzimuth2DoubleSpinBox->setObjectName(QStringLiteral("customAzimuth2DoubleSpinBox"));
        customAzimuth2DoubleSpinBox->setMaximum(359.99);

        gridLayout->addWidget(customAzimuth2DoubleSpinBox, 16, 1, 1, 1);

        customAzimuth2CheckBox = new QCheckBox(settingsTab);
        customAzimuth2CheckBox->setObjectName(QStringLiteral("customAzimuth2CheckBox"));

        gridLayout->addWidget(customAzimuth2CheckBox, 16, 0, 1, 1);

        customAzimuth1LineEdit = new QLineEdit(settingsTab);
        customAzimuth1LineEdit->setObjectName(QStringLiteral("customAzimuth1LineEdit"));

        gridLayout->addWidget(customAzimuth1LineEdit, 15, 2, 1, 1);

        nadirPassageColorToolButton = new QToolButton(settingsTab);
        nadirPassageColorToolButton->setObjectName(QStringLiteral("nadirPassageColorToolButton"));
        nadirPassageColorToolButton->setText(QStringLiteral("NadirPassageColor..."));

        gridLayout->addWidget(nadirPassageColorToolButton, 6, 3, 1, 1);

        currentMoonColorToolButton = new QToolButton(settingsTab);
        currentMoonColorToolButton->setObjectName(QStringLiteral("currentMoonColorToolButton"));
        currentMoonColorToolButton->setText(QStringLiteral("MoonColor..."));

        gridLayout->addWidget(currentMoonColorToolButton, 8, 3, 1, 1);

        currentPlanetColorToolButton = new QToolButton(settingsTab);
        currentPlanetColorToolButton->setObjectName(QStringLiteral("currentPlanetColorToolButton"));
        currentPlanetColorToolButton->setText(QStringLiteral("PlanetColor..."));

        gridLayout->addWidget(currentPlanetColorToolButton, 9, 3, 1, 1);

        customAzimuth2LineEdit = new QLineEdit(settingsTab);
        customAzimuth2LineEdit->setObjectName(QStringLiteral("customAzimuth2LineEdit"));

        gridLayout->addWidget(customAzimuth2LineEdit, 16, 2, 1, 1);

        solsticesColorToolButton = new QToolButton(settingsTab);
        solsticesColorToolButton->setObjectName(QStringLiteral("solsticesColorToolButton"));
        solsticesColorToolButton->setText(QStringLiteral("SolsticeColor..."));

        gridLayout->addWidget(solsticesColorToolButton, 1, 3, 1, 1);

        solsticesCheckBox = new QCheckBox(settingsTab);
        solsticesCheckBox->setObjectName(QStringLiteral("solsticesCheckBox"));

        gridLayout->addWidget(solsticesCheckBox, 1, 0, 1, 1);

        currentSunColorToolButton = new QToolButton(settingsTab);
        currentSunColorToolButton->setObjectName(QStringLiteral("currentSunColorToolButton"));
        currentSunColorToolButton->setText(QStringLiteral("SunColor..."));

        gridLayout->addWidget(currentSunColorToolButton, 7, 3, 1, 1);

        currentMoonCheckBox = new QCheckBox(settingsTab);
        currentMoonCheckBox->setObjectName(QStringLiteral("currentMoonCheckBox"));

        gridLayout->addWidget(currentMoonCheckBox, 8, 0, 1, 1);

        zenithPassageCheckBox = new QCheckBox(settingsTab);
        zenithPassageCheckBox->setObjectName(QStringLiteral("zenithPassageCheckBox"));

        gridLayout->addWidget(zenithPassageCheckBox, 5, 0, 1, 1);

        selectedObjectColorToolButton = new QToolButton(settingsTab);
        selectedObjectColorToolButton->setObjectName(QStringLiteral("selectedObjectColorToolButton"));
        selectedObjectColorToolButton->setText(QStringLiteral("SelectedObjectColor..."));

        gridLayout->addWidget(selectedObjectColorToolButton, 10, 3, 1, 1);

        zenithPassageColorToolButton = new QToolButton(settingsTab);
        zenithPassageColorToolButton->setObjectName(QStringLiteral("zenithPassageColorToolButton"));
        zenithPassageColorToolButton->setText(QStringLiteral("zenithPassageColor..."));

        gridLayout->addWidget(zenithPassageColorToolButton, 5, 3, 1, 1);

        crossquarterCheckBox = new QCheckBox(settingsTab);
        crossquarterCheckBox->setObjectName(QStringLiteral("crossquarterCheckBox"));

        gridLayout->addWidget(crossquarterCheckBox, 2, 0, 1, 1);

        equinoxCheckBox = new QCheckBox(settingsTab);
        equinoxCheckBox->setObjectName(QStringLiteral("equinoxCheckBox"));

        gridLayout->addWidget(equinoxCheckBox, 0, 0, 1, 1);

        equinoxColorToolButton = new QToolButton(settingsTab);
        equinoxColorToolButton->setObjectName(QStringLiteral("equinoxColorToolButton"));
        equinoxColorToolButton->setText(QStringLiteral("EquinoxColor..."));

        gridLayout->addWidget(equinoxColorToolButton, 0, 3, 1, 1);

        majorStandstillCheckBox = new QCheckBox(settingsTab);
        majorStandstillCheckBox->setObjectName(QStringLiteral("majorStandstillCheckBox"));

        gridLayout->addWidget(majorStandstillCheckBox, 3, 0, 1, 1);

        customDeclination2ColorToolButton = new QToolButton(settingsTab);
        customDeclination2ColorToolButton->setObjectName(QStringLiteral("customDeclination2ColorToolButton"));
        customDeclination2ColorToolButton->setText(QStringLiteral("Custom Declination 2 Color..."));

        gridLayout->addWidget(customDeclination2ColorToolButton, 18, 3, 1, 1);

        customDeclination2LineEdit = new QLineEdit(settingsTab);
        customDeclination2LineEdit->setObjectName(QStringLiteral("customDeclination2LineEdit"));

        gridLayout->addWidget(customDeclination2LineEdit, 18, 2, 1, 1);

        customDeclination2DoubleSpinBox = new QDoubleSpinBox(settingsTab);
        customDeclination2DoubleSpinBox->setObjectName(QStringLiteral("customDeclination2DoubleSpinBox"));
        customDeclination2DoubleSpinBox->setMinimum(-89.99);
        customDeclination2DoubleSpinBox->setMaximum(89.99);
        customDeclination2DoubleSpinBox->setSingleStep(0.1);

        gridLayout->addWidget(customDeclination2DoubleSpinBox, 18, 1, 1, 1);

        customDeclination2CheckBox = new QCheckBox(settingsTab);
        customDeclination2CheckBox->setObjectName(QStringLiteral("customDeclination2CheckBox"));

        gridLayout->addWidget(customDeclination2CheckBox, 18, 0, 1, 1);


        verticalLayout_3->addLayout(gridLayout);

        verticalSpacer_3 = new QSpacerItem(20, 120, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        restoreDefaultsButton = new QPushButton(settingsTab);
        restoreDefaultsButton->setObjectName(QStringLiteral("restoreDefaultsButton"));
        sizePolicy.setHeightForWidth(restoreDefaultsButton->sizePolicy().hasHeightForWidth());
        restoreDefaultsButton->setSizePolicy(sizePolicy);

        horizontalLayout_7->addWidget(restoreDefaultsButton);


        verticalLayout_3->addLayout(horizontalLayout_7);

        tabs->addTab(settingsTab, QString());
        aboutTab = new QWidget();
        aboutTab->setObjectName(QStringLiteral("aboutTab"));
        verticalLayout_11 = new QVBoxLayout(aboutTab);
        verticalLayout_11->setSpacing(9);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        aboutTextBrowser = new QTextBrowser(aboutTab);
        aboutTextBrowser->setObjectName(QStringLiteral("aboutTextBrowser"));
        aboutTextBrowser->setOpenExternalLinks(true);
        aboutTextBrowser->setOpenLinks(true);

        verticalLayout_11->addWidget(aboutTextBrowser);

        tabs->addTab(aboutTab, QString());

        verticalLayout_2->addWidget(tabs);


        retranslateUi(archaeoLinesDialog);

        tabs->setCurrentIndex(0);
        currentPlanetComboBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(archaeoLinesDialog);
    } // setupUi

    void retranslateUi(QWidget *archaeoLinesDialog)
    {
        archaeoLinesDialog->setWindowTitle(QApplication::translate("archaeoLinesDialog", "ArchaeoLines Configuration", 0));
        stelWindowTitle->setText(QApplication::translate("archaeoLinesDialog", "ArchaeoLines Plug-in Configuration", 0));
        closeStelWindow->setText(QString());
        switchToWindowedModeLabel->setText(QApplication::translate("archaeoLinesDialog", "To change colors you may have to leave fullscreen mode!", 0));
        geographicLocation2LongitudeLabel->setText(QApplication::translate("archaeoLinesDialog", "Longitude", 0));
        geographicLocation2LatitudeLabel->setText(QApplication::translate("archaeoLinesDialog", "Latitude", 0));
        customDeclination1CheckBox->setText(QApplication::translate("archaeoLinesDialog", "Custom Declination 1", 0));
        currentSunCheckBox->setText(QApplication::translate("archaeoLinesDialog", "Current Sun", 0));
#ifndef QT_NO_TOOLTIP
        geographicLocation1LineEdit->setToolTip(QApplication::translate("archaeoLinesDialog", "Enter a label (location name) for this line", 0));
#endif // QT_NO_TOOLTIP
        geographicLocation1CheckBox->setText(QApplication::translate("archaeoLinesDialog", "Geographic Location 1", 0));
        geographicLocation1LongitudeLabel->setText(QApplication::translate("archaeoLinesDialog", "Longitude", 0));
        geographicLocation1LatitudeLabel->setText(QApplication::translate("archaeoLinesDialog", "Latitude", 0));
#ifndef QT_NO_TOOLTIP
        geographicLocation2LineEdit->setToolTip(QApplication::translate("archaeoLinesDialog", "Enter a label (location name) for this line", 0));
#endif // QT_NO_TOOLTIP
        geographicLocation2CheckBox->setText(QApplication::translate("archaeoLinesDialog", "Geographic Location 2", 0));
#ifndef QT_NO_TOOLTIP
        crossquarterColorToolButton->setToolTip(QApplication::translate("archaeoLinesDialog", "Change color", 0));
#endif // QT_NO_TOOLTIP
        selectedObjectCheckBox->setText(QApplication::translate("archaeoLinesDialog", "Selected Object", 0));
        minorStandstillCheckBox->setText(QApplication::translate("archaeoLinesDialog", "Minor Lunar Standstill lines", 0));
        currentPlanetComboBox->clear();
        currentPlanetComboBox->insertItems(0, QStringList()
         << QApplication::translate("archaeoLinesDialog", "Current Planet: None", 0)
         << QApplication::translate("archaeoLinesDialog", "Current Planet: Mercury", 0)
         << QApplication::translate("archaeoLinesDialog", "Current Planet: Venus", 0)
         << QApplication::translate("archaeoLinesDialog", "Current Planet: Mars", 0)
         << QApplication::translate("archaeoLinesDialog", "Current Planet: Jupiter", 0)
         << QApplication::translate("archaeoLinesDialog", "Current Planet: Saturn", 0)
        );
        nadirPassageCheckBox->setText(QApplication::translate("archaeoLinesDialog", "Declination of Nadir passage", 0));
        customAzimuth1CheckBox->setText(QApplication::translate("archaeoLinesDialog", "Custom Azimuth 1", 0));
        customAzimuth2CheckBox->setText(QApplication::translate("archaeoLinesDialog", "Custom Azimuth 2", 0));
#ifndef QT_NO_TOOLTIP
        customAzimuth1LineEdit->setToolTip(QApplication::translate("archaeoLinesDialog", "Enter a label for this line", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        customAzimuth2LineEdit->setToolTip(QApplication::translate("archaeoLinesDialog", "Enter a label for this line", 0));
#endif // QT_NO_TOOLTIP
        solsticesCheckBox->setText(QApplication::translate("archaeoLinesDialog", "Solstice Lines", 0));
        currentMoonCheckBox->setText(QApplication::translate("archaeoLinesDialog", "Current Moon", 0));
        zenithPassageCheckBox->setText(QApplication::translate("archaeoLinesDialog", "Declination of Zenith passage", 0));
        crossquarterCheckBox->setText(QApplication::translate("archaeoLinesDialog", "Crossquarter Lines", 0));
        equinoxCheckBox->setText(QApplication::translate("archaeoLinesDialog", "Equinox line (Equator)", 0));
        majorStandstillCheckBox->setText(QApplication::translate("archaeoLinesDialog", "Major Lunar Standstill lines", 0));
        customDeclination2CheckBox->setText(QApplication::translate("archaeoLinesDialog", "Custom Declination 2", 0));
        restoreDefaultsButton->setText(QApplication::translate("archaeoLinesDialog", "Restore default settings", 0));
        tabs->setTabText(tabs->indexOf(settingsTab), QApplication::translate("archaeoLinesDialog", "ArchaeoLines", 0));
        tabs->setTabText(tabs->indexOf(aboutTab), QApplication::translate("archaeoLinesDialog", "About", "tab in plugin windows"));
    } // retranslateUi

};

namespace Ui {
    class archaeoLinesDialog: public Ui_archaeoLinesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ARCHAEOLINESDIALOG_H
