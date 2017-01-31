/********************************************************************************
** Form generated from reading UI file 'viewDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWDIALOG_H
#define UI_VIEWDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Dialog.hpp"

QT_BEGIN_NAMESPACE

class Ui_viewDialogForm
{
public:
    QVBoxLayout *vboxLayout;
    BarFrame *TitleBar;
    QHBoxLayout *hboxLayout;
    QSpacerItem *horizontalSpacer_2;
    QLabel *stelWindowTitle;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *closeStelWindow;
    QFrame *viewContent;
    QGridLayout *gridLayout_8;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *starGroupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_starScale;
    QLabel *label_5;
    QDoubleSpinBox *starScaleRadiusDoubleSpinBox;
    QHBoxLayout *horizontalLayout_starRelativeScale;
    QLabel *label_7;
    QDoubleSpinBox *starRelativeScaleDoubleSpinBox;
    QHBoxLayout *horizontalLayout_starTwinkle;
    QCheckBox *starTwinkleCheckBox;
    QDoubleSpinBox *starTwinkleAmountDoubleSpinBox;
    QHBoxLayout *horizontalLayout_starLimitMag;
    QCheckBox *starLimitMagnitudeCheckBox;
    QDoubleSpinBox *starLimitMagnitudeDoubleSpinBox;
    QHBoxLayout *horizontalLayout_starLabel;
    QCheckBox *starLabelCheckBox;
    QSlider *starsLabelsHorizontalSlider;
    QGroupBox *atmosphereGroupBox;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *useLocationDataCheckBox;
    QHBoxLayout *_2;
    QLabel *label_4;
    QSpinBox *lightPollutionSpinBox;
    QPushButton *pushButtonAtmosphereDetails;
    QGroupBox *shootingStarsGroupBox;
    QHBoxLayout *horizontalLayout_6;
    QGridLayout *gridLayout_6;
    QSpinBox *zhrSpinBox;
    QLabel *zhrLabel;
    QSlider *zhrSlider;
    QLabel *label_14;
    QGroupBox *planetsGroupBox;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *planetMarkerCheckBox;
    QHBoxLayout *horizontalLayout_16;
    QCheckBox *planetOrbitCheckBox;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButtonOrbitColors;
    QCheckBox *planetIsolatedOrbitCheckBox;
    QCheckBox *planetIsolatedTrailsCheckBox;
    QCheckBox *planetLightSpeedCheckBox;
    QHBoxLayout *horizontalLayout_15;
    QCheckBox *customGrsSettingsCheckBox;
    QPushButton *pushButtonGrsDetails;
    QHBoxLayout *planetLimMagHorizontalLayout;
    QCheckBox *planetLimitMagnitudeCheckBox;
    QDoubleSpinBox *planetLimitMagnitudeDoubleSpinBox;
    QHBoxLayout *horizontalLayout;
    QCheckBox *planetScaleMoonCheckBox;
    QDoubleSpinBox *moonScaleFactor;
    QHBoxLayout *horizontalLayout_17;
    QCheckBox *planetLabelCheckBox;
    QSlider *planetsLabelsHorizontalSlider;
    QGroupBox *largeObjectsGroupbox;
    QVBoxLayout *verticalLayout_largeObjects;
    QHBoxLayout *horizontalLayout_milkyWay;
    QCheckBox *milkyWayCheckBox;
    QDoubleSpinBox *milkyWayBrightnessDoubleSpinBox;
    QHBoxLayout *horizontalLayout_zodiacalLight;
    QCheckBox *zodiacalLightCheckBox;
    QDoubleSpinBox *zodiacalLightBrightnessDoubleSpinBox;
    QCheckBox *adaptationCheckbox;
    QWidget *page_DSO;
    QGridLayout *gridLayout_11;
    QGroupBox *groupDSOCatalogs;
    QGridLayout *gridLayout_10;
    QCheckBox *checkBoxIC;
    QCheckBox *checkBoxNGC;
    QCheckBox *checkBoxLBN;
    QCheckBox *checkBoxM;
    QCheckBox *checkBoxC;
    QCheckBox *checkBoxB;
    QCheckBox *checkBoxSh2;
    QCheckBox *checkBoxVdB;
    QCheckBox *checkBoxRCW;
    QCheckBox *checkBoxLDN;
    QCheckBox *checkBoxCr;
    QCheckBox *checkBoxMel;
    QCheckBox *checkBoxPGC;
    QCheckBox *checkBoxUGC;
    QCheckBox *checkBoxCed;
    QSpacerItem *verticalSpacer_3;
    QGroupBox *groupBoxDSOTypeFilters;
    QGridLayout *gridLayout_13;
    QCheckBox *checkBoxSupernovaRemnantsType;
    QCheckBox *checkBoxInteractingGalaxiesType;
    QCheckBox *checkBoxHydrogenRegionsType;
    QCheckBox *checkBoxOtherType;
    QCheckBox *checkBoxStarClustersType;
    QCheckBox *checkBoxPlanetaryNebulaeType;
    QCheckBox *checkBoxGalaxiesType;
    QCheckBox *checkBoxActiveGalaxiesType;
    QCheckBox *checkBoxDarkNebulaeType;
    QCheckBox *checkBoxBrightNebulaeType;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBoxLabelsAndMarkers;
    QGridLayout *gridLayout_12;
    QCheckBox *checkBoxProportionalHints;
    QCheckBox *checkBoxSurfaceBrightnessUsage;
    QHBoxLayout *horizontalLayout_7;
    QCheckBox *nebulaLimitMagnitudeCheckBox;
    QDoubleSpinBox *nebulaLimitMagnitudeDoubleSpinBox;
    QCheckBox *checkBoxDesignationsOnlyUsage;
    QGridLayout *gridLayout_15;
    QSlider *nebulasLabelsHorizontalSlider;
    QLabel *labelLabels;
    QLabel *labelHints;
    QSlider *nebulasHintsHorizontalSlider;
    QPushButton *pushButtonConfigureDSOColors;
    QWidget *page_2;
    QGridLayout *gridLayout_2;
    QGroupBox *celestialSphereGroupBox;
    QVBoxLayout *verticalLayout_10;
    QGridLayout *gridLayout_16;
    QGridLayout *gridLayout_14;
    QCheckBox *showEclipticLineJ2000CheckBox;
    QCheckBox *showEquatorLineCheckBox;
    QCheckBox *showEquatorJ2000LineCheckBox;
    QToolButton *colorEquatorJ2000Line;
    QCheckBox *showEclipticLineOfDateCheckBox;
    QToolButton *colorEquatorLine;
    QCheckBox *showGalacticEquatorLineCheckBox;
    QToolButton *colorSupergalacticEquatorLine;
    QToolButton *colorEclipticLineOfDate;
    QToolButton *colorEclipticLineJ2000;
    QToolButton *colorGalacticEquatorLine;
    QCheckBox *showHorizonLineCheckBox;
    QToolButton *colorHorizonLine;
    QCheckBox *showSupergalacticEquatorLineCheckBox;
    QCheckBox *showMeridianLineCheckBox;
    QToolButton *colorMeridianLine;
    QCheckBox *showLongitudeLineCheckBox;
    QToolButton *colorLongitudeLine;
    QCheckBox *showColuresLineCheckBox;
    QToolButton *colorColuresLine;
    QGridLayout *gridLayout_17;
    QCheckBox *showSupergalacticPolesCheckBox;
    QToolButton *colorEclipticJ2000Poles;
    QToolButton *colorPrimeVerticalLine;
    QCheckBox *showEclipticJ2000PolesCheckBox;
    QToolButton *colorCelestialJ2000Poles;
    QCheckBox *showCelestialPolesCheckBox;
    QToolButton *colorEclipticPoles;
    QToolButton *colorCelestialPoles;
    QToolButton *colorSupergalacticPoles;
    QCheckBox *showEclipticPolesCheckBox;
    QCheckBox *showPrimeVerticalLineCheckBox;
    QToolButton *colorGalacticPoles;
    QCheckBox *showZenithNadirCheckBox;
    QCheckBox *showGalacticPolesCheckBox;
    QToolButton *colorZenithNadir;
    QCheckBox *showCelestialJ2000PolesCheckBox;
    QCheckBox *showCircumpolarCirclesCheckBox;
    QToolButton *colorCircumpolarCircles;
    QCheckBox *showPrecessionCirclesCheckBox;
    QToolButton *colorPrecessionCircles;
    QGridLayout *gridLayout_9;
    QCheckBox *showAzimuthalGridCheckBox;
    QCheckBox *showEclipticGridOfDateCheckBox;
    QToolButton *colorEquatorialJ2000Grid;
    QToolButton *colorEquinoxJ2000Points;
    QCheckBox *showEclipticGridJ2000CheckBox;
    QToolButton *colorSupergalacticGrid;
    QToolButton *colorGalacticGrid;
    QCheckBox *showSupergalacticGridCheckBox;
    QCheckBox *showEquatorialJ2000GridCheckBox;
    QToolButton *colorEclipticGridJ2000;
    QCheckBox *showGalacticGridCheckBox;
    QCheckBox *showEquinoxJ2000PointsCheckBox;
    QToolButton *colorEclipticGridOfDate;
    QToolButton *colorEquatorialGrid;
    QToolButton *colorAzimuthalGrid;
    QCheckBox *showEquatorialGridCheckBox;
    QCheckBox *showEquinoxPointsCheckBox;
    QToolButton *colorEquinoxPoints;
    QCheckBox *showCardinalPointsCheckBox;
    QToolButton *colorCardinalPoints;
    QGroupBox *setProjectionGroupBox;
    QHBoxLayout *horizontalLayout_10;
    QListWidget *projectionListWidget;
    QVBoxLayout *projectionDetailsVerticalLayout;
    QTextBrowser *projectionTextBrowser;
    QHBoxLayout *viewportOffsetHorizontalLayout;
    QLabel *viewportOffsetLabel;
    QDoubleSpinBox *viewportOffsetSpinBox;
    QLabel *percentLabel;
    QSpacerItem *horizontalSpacer;
    QWidget *page_3;
    QGridLayout *gridLayout_3;
    QListWidget *landscapesListWidget;
    QTextBrowser *landscapeTextBrowser;
    QGroupBox *landscapeOptionsGroupBox;
    QGridLayout *gridLayout_7;
    QCheckBox *showFogCheckBox;
    QCheckBox *landscapePositionCheckBox;
    QCheckBox *useAsDefaultLandscapeCheckBox;
    QCheckBox *showGroundCheckBox;
    QHBoxLayout *horizontalLayout_11;
    QCheckBox *landscapeBrightnessCheckBox;
    QDoubleSpinBox *landscapeBrightnessSpinBox;
    QCheckBox *localLandscapeBrightnessCheckBox;
    QCheckBox *landscapeIlluminationCheckBox;
    QCheckBox *landscapeLabelsCheckBox;
    QPushButton *pushButtonAddRemoveLandscapes;
    QWidget *page_4;
    QGridLayout *gridLayout_4;
    QTextBrowser *skyCultureTextBrowser;
    QListWidget *culturesListWidget;
    QGroupBox *starloreOptionsgroupBox;
    QGridLayout *formLayout_2;
    QHBoxLayout *horizontalLayout_constArtbrightness;
    QCheckBox *showConstellationArtCheckBox;
    QDoubleSpinBox *constellationArtBrightnessSpinBox;
    QHBoxLayout *horizontalLayout_constLines;
    QCheckBox *showConstellationLinesCheckBox;
    QDoubleSpinBox *constellationLineThicknessSpinBox;
    QToolButton *colorConstellationLines;
    QCheckBox *nativeNameCheckBox;
    QCheckBox *useAsDefaultSkyCultureCheckBox;
    QHBoxLayout *horizontalLayout_constLabels;
    QCheckBox *showConstellationLabelsCheckBox;
    QComboBox *skyCultureNamesStyleComboBox;
    QToolButton *colorConstellationLabels;
    QHBoxLayout *horizontalLayout_5;
    QCheckBox *showConstellationBoundariesCheckBox;
    QToolButton *colorConstellationBoundaries;
    QWidget *page_5;
    QVBoxLayout *verticalLayout_12;
    QFrame *frame_13;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_6;
    QListWidget *skyLayerListWidget;
    QFrame *frame_14;
    QVBoxLayout *verticalLayout_7;
    QTextBrowser *skyLayerTextBrowser;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_5;
    QCheckBox *skyLayerEnableCheckBox;
    QListWidget *stackListWidget;
    QButtonGroup *buttonGroupDisplayedDSOCatalogs;
    QButtonGroup *buttonGroupDisplayedDSOTypes;

    void setupUi(QWidget *viewDialogForm)
    {
        if (viewDialogForm->objectName().isEmpty())
            viewDialogForm->setObjectName(QStringLiteral("viewDialogForm"));
        viewDialogForm->resize(755, 597);
        QFont font;
        viewDialogForm->setFont(font);
        vboxLayout = new QVBoxLayout(viewDialogForm);
        vboxLayout->setSpacing(0);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        TitleBar = new BarFrame(viewDialogForm);
        TitleBar->setObjectName(QStringLiteral("TitleBar"));
        TitleBar->setMinimumSize(QSize(16, 25));
        TitleBar->setMaximumSize(QSize(16777215, 25));
        TitleBar->setFont(font);
        TitleBar->setFrameShape(QFrame::StyledPanel);
        hboxLayout = new QHBoxLayout(TitleBar);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 4, 0);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(horizontalSpacer_2);

        stelWindowTitle = new QLabel(TitleBar);
        stelWindowTitle->setObjectName(QStringLiteral("stelWindowTitle"));
        QPalette palette;
        QBrush brush(QColor(194, 194, 195, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        stelWindowTitle->setPalette(palette);
        QFont font1;
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        stelWindowTitle->setFont(font1);
        stelWindowTitle->setStyleSheet(QStringLiteral(""));
        stelWindowTitle->setFrameShape(QFrame::StyledPanel);
        stelWindowTitle->setLineWidth(0);
        stelWindowTitle->setIndent(-1);

        hboxLayout->addWidget(stelWindowTitle);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(horizontalSpacer_3);

        closeStelWindow = new QPushButton(TitleBar);
        closeStelWindow->setObjectName(QStringLiteral("closeStelWindow"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(closeStelWindow->sizePolicy().hasHeightForWidth());
        closeStelWindow->setSizePolicy(sizePolicy);
        closeStelWindow->setMinimumSize(QSize(16, 16));
        closeStelWindow->setMaximumSize(QSize(16, 16));
        closeStelWindow->setFocusPolicy(Qt::NoFocus);
        closeStelWindow->setContextMenuPolicy(Qt::DefaultContextMenu);

        hboxLayout->addWidget(closeStelWindow);


        vboxLayout->addWidget(TitleBar);

        viewContent = new QFrame(viewDialogForm);
        viewContent->setObjectName(QStringLiteral("viewContent"));
        viewContent->setFrameShape(QFrame::StyledPanel);
        gridLayout_8 = new QGridLayout(viewContent);
        gridLayout_8->setSpacing(0);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        stackedWidget = new QStackedWidget(viewContent);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        gridLayout = new QGridLayout(page);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 3, 0, 1, 1);

        starGroupBox = new QGroupBox(page);
        starGroupBox->setObjectName(QStringLiteral("starGroupBox"));
        starGroupBox->setAlignment(Qt::AlignLeading);
        starGroupBox->setFlat(true);
        starGroupBox->setCheckable(true);
        starGroupBox->setChecked(true);
        verticalLayout = new QVBoxLayout(starGroupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_starScale = new QHBoxLayout();
        horizontalLayout_starScale->setObjectName(QStringLiteral("horizontalLayout_starScale"));
        label_5 = new QLabel(starGroupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);
        label_5->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_starScale->addWidget(label_5);

        starScaleRadiusDoubleSpinBox = new QDoubleSpinBox(starGroupBox);
        starScaleRadiusDoubleSpinBox->setObjectName(QStringLiteral("starScaleRadiusDoubleSpinBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(starScaleRadiusDoubleSpinBox->sizePolicy().hasHeightForWidth());
        starScaleRadiusDoubleSpinBox->setSizePolicy(sizePolicy2);
        starScaleRadiusDoubleSpinBox->setMinimumSize(QSize(0, 0));
        starScaleRadiusDoubleSpinBox->setMaximumSize(QSize(70, 16777215));
        starScaleRadiusDoubleSpinBox->setAlignment(Qt::AlignCenter);
        starScaleRadiusDoubleSpinBox->setDecimals(2);
        starScaleRadiusDoubleSpinBox->setMaximum(9);
        starScaleRadiusDoubleSpinBox->setSingleStep(0.1);
        starScaleRadiusDoubleSpinBox->setValue(1);

        horizontalLayout_starScale->addWidget(starScaleRadiusDoubleSpinBox);


        verticalLayout->addLayout(horizontalLayout_starScale);

        horizontalLayout_starRelativeScale = new QHBoxLayout();
        horizontalLayout_starRelativeScale->setObjectName(QStringLiteral("horizontalLayout_starRelativeScale"));
        label_7 = new QLabel(starGroupBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        sizePolicy1.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy1);
        label_7->setMinimumSize(QSize(0, 0));
        label_7->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_starRelativeScale->addWidget(label_7);

        starRelativeScaleDoubleSpinBox = new QDoubleSpinBox(starGroupBox);
        starRelativeScaleDoubleSpinBox->setObjectName(QStringLiteral("starRelativeScaleDoubleSpinBox"));
        sizePolicy2.setHeightForWidth(starRelativeScaleDoubleSpinBox->sizePolicy().hasHeightForWidth());
        starRelativeScaleDoubleSpinBox->setSizePolicy(sizePolicy2);
        starRelativeScaleDoubleSpinBox->setMinimumSize(QSize(0, 0));
        starRelativeScaleDoubleSpinBox->setMaximumSize(QSize(70, 16777215));
        starRelativeScaleDoubleSpinBox->setFrame(true);
        starRelativeScaleDoubleSpinBox->setAlignment(Qt::AlignCenter);
        starRelativeScaleDoubleSpinBox->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        starRelativeScaleDoubleSpinBox->setDecimals(2);
        starRelativeScaleDoubleSpinBox->setMinimum(0.25);
        starRelativeScaleDoubleSpinBox->setMaximum(5);
        starRelativeScaleDoubleSpinBox->setSingleStep(0.05);
        starRelativeScaleDoubleSpinBox->setValue(1);

        horizontalLayout_starRelativeScale->addWidget(starRelativeScaleDoubleSpinBox);


        verticalLayout->addLayout(horizontalLayout_starRelativeScale);

        horizontalLayout_starTwinkle = new QHBoxLayout();
        horizontalLayout_starTwinkle->setObjectName(QStringLiteral("horizontalLayout_starTwinkle"));
        starTwinkleCheckBox = new QCheckBox(starGroupBox);
        starTwinkleCheckBox->setObjectName(QStringLiteral("starTwinkleCheckBox"));
        starTwinkleCheckBox->setChecked(true);

        horizontalLayout_starTwinkle->addWidget(starTwinkleCheckBox);

        starTwinkleAmountDoubleSpinBox = new QDoubleSpinBox(starGroupBox);
        starTwinkleAmountDoubleSpinBox->setObjectName(QStringLiteral("starTwinkleAmountDoubleSpinBox"));
        starTwinkleAmountDoubleSpinBox->setMaximumSize(QSize(70, 16777215));
        starTwinkleAmountDoubleSpinBox->setAlignment(Qt::AlignCenter);
        starTwinkleAmountDoubleSpinBox->setDecimals(2);
        starTwinkleAmountDoubleSpinBox->setMaximum(1.5);
        starTwinkleAmountDoubleSpinBox->setSingleStep(0.1);

        horizontalLayout_starTwinkle->addWidget(starTwinkleAmountDoubleSpinBox);


        verticalLayout->addLayout(horizontalLayout_starTwinkle);

        horizontalLayout_starLimitMag = new QHBoxLayout();
        horizontalLayout_starLimitMag->setObjectName(QStringLiteral("horizontalLayout_starLimitMag"));
        starLimitMagnitudeCheckBox = new QCheckBox(starGroupBox);
        starLimitMagnitudeCheckBox->setObjectName(QStringLiteral("starLimitMagnitudeCheckBox"));

        horizontalLayout_starLimitMag->addWidget(starLimitMagnitudeCheckBox);

        starLimitMagnitudeDoubleSpinBox = new QDoubleSpinBox(starGroupBox);
        starLimitMagnitudeDoubleSpinBox->setObjectName(QStringLiteral("starLimitMagnitudeDoubleSpinBox"));
        sizePolicy2.setHeightForWidth(starLimitMagnitudeDoubleSpinBox->sizePolicy().hasHeightForWidth());
        starLimitMagnitudeDoubleSpinBox->setSizePolicy(sizePolicy2);
        starLimitMagnitudeDoubleSpinBox->setMinimumSize(QSize(0, 0));
        starLimitMagnitudeDoubleSpinBox->setMaximumSize(QSize(70, 16777215));
        starLimitMagnitudeDoubleSpinBox->setFrame(true);
        starLimitMagnitudeDoubleSpinBox->setAlignment(Qt::AlignCenter);
        starLimitMagnitudeDoubleSpinBox->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        starLimitMagnitudeDoubleSpinBox->setDecimals(2);
        starLimitMagnitudeDoubleSpinBox->setMinimum(0);
        starLimitMagnitudeDoubleSpinBox->setMaximum(21);
        starLimitMagnitudeDoubleSpinBox->setSingleStep(0.1);
        starLimitMagnitudeDoubleSpinBox->setValue(6.5);

        horizontalLayout_starLimitMag->addWidget(starLimitMagnitudeDoubleSpinBox);


        verticalLayout->addLayout(horizontalLayout_starLimitMag);

        horizontalLayout_starLabel = new QHBoxLayout();
        horizontalLayout_starLabel->setObjectName(QStringLiteral("horizontalLayout_starLabel"));
        starLabelCheckBox = new QCheckBox(starGroupBox);
        starLabelCheckBox->setObjectName(QStringLiteral("starLabelCheckBox"));

        horizontalLayout_starLabel->addWidget(starLabelCheckBox);

        starsLabelsHorizontalSlider = new QSlider(starGroupBox);
        starsLabelsHorizontalSlider->setObjectName(QStringLiteral("starsLabelsHorizontalSlider"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(starsLabelsHorizontalSlider->sizePolicy().hasHeightForWidth());
        starsLabelsHorizontalSlider->setSizePolicy(sizePolicy3);
        starsLabelsHorizontalSlider->setMinimumSize(QSize(180, 0));
        starsLabelsHorizontalSlider->setValue(33);
        starsLabelsHorizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_starLabel->addWidget(starsLabelsHorizontalSlider);


        verticalLayout->addLayout(horizontalLayout_starLabel);


        gridLayout->addWidget(starGroupBox, 0, 0, 1, 1);

        atmosphereGroupBox = new QGroupBox(page);
        atmosphereGroupBox->setObjectName(QStringLiteral("atmosphereGroupBox"));
        atmosphereGroupBox->setFlat(true);
        atmosphereGroupBox->setCheckable(true);
        verticalLayout_3 = new QVBoxLayout(atmosphereGroupBox);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        useLocationDataCheckBox = new QCheckBox(atmosphereGroupBox);
        useLocationDataCheckBox->setObjectName(QStringLiteral("useLocationDataCheckBox"));

        verticalLayout_3->addWidget(useLocationDataCheckBox);

        _2 = new QHBoxLayout();
        _2->setObjectName(QStringLiteral("_2"));
        label_4 = new QLabel(atmosphereGroupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        _2->addWidget(label_4);

        lightPollutionSpinBox = new QSpinBox(atmosphereGroupBox);
        lightPollutionSpinBox->setObjectName(QStringLiteral("lightPollutionSpinBox"));
        lightPollutionSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lightPollutionSpinBox->setMinimum(1);
        lightPollutionSpinBox->setMaximum(9);
        lightPollutionSpinBox->setValue(1);

        _2->addWidget(lightPollutionSpinBox);


        verticalLayout_3->addLayout(_2);

        pushButtonAtmosphereDetails = new QPushButton(atmosphereGroupBox);
        pushButtonAtmosphereDetails->setObjectName(QStringLiteral("pushButtonAtmosphereDetails"));
        pushButtonAtmosphereDetails->setFocusPolicy(Qt::NoFocus);

        verticalLayout_3->addWidget(pushButtonAtmosphereDetails);


        gridLayout->addWidget(atmosphereGroupBox, 2, 0, 1, 1);

        shootingStarsGroupBox = new QGroupBox(page);
        shootingStarsGroupBox->setObjectName(QStringLiteral("shootingStarsGroupBox"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(shootingStarsGroupBox->sizePolicy().hasHeightForWidth());
        shootingStarsGroupBox->setSizePolicy(sizePolicy4);
        shootingStarsGroupBox->setCheckable(false);
        horizontalLayout_6 = new QHBoxLayout(shootingStarsGroupBox);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        zhrSpinBox = new QSpinBox(shootingStarsGroupBox);
        zhrSpinBox->setObjectName(QStringLiteral("zhrSpinBox"));
        sizePolicy2.setHeightForWidth(zhrSpinBox->sizePolicy().hasHeightForWidth());
        zhrSpinBox->setSizePolicy(sizePolicy2);
        zhrSpinBox->setFrame(true);
        zhrSpinBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        zhrSpinBox->setMaximum(240000);
        zhrSpinBox->setValue(10);

        gridLayout_6->addWidget(zhrSpinBox, 0, 2, 1, 1);

        zhrLabel = new QLabel(shootingStarsGroupBox);
        zhrLabel->setObjectName(QStringLiteral("zhrLabel"));
        zhrLabel->setTextFormat(Qt::RichText);
        zhrLabel->setScaledContents(false);

        gridLayout_6->addWidget(zhrLabel, 1, 1, 1, 2);

        zhrSlider = new QSlider(shootingStarsGroupBox);
        zhrSlider->setObjectName(QStringLiteral("zhrSlider"));
        zhrSlider->setMaximum(240000);
        zhrSlider->setSliderPosition(10);
        zhrSlider->setOrientation(Qt::Horizontal);
        zhrSlider->setTickPosition(QSlider::NoTicks);

        gridLayout_6->addWidget(zhrSlider, 0, 1, 1, 1);

        label_14 = new QLabel(shootingStarsGroupBox);
        label_14->setObjectName(QStringLiteral("label_14"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy5);
        label_14->setTextFormat(Qt::PlainText);
        label_14->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_6->addWidget(label_14, 0, 0, 1, 1);


        horizontalLayout_6->addLayout(gridLayout_6);


        gridLayout->addWidget(shootingStarsGroupBox, 2, 1, 1, 1);

        planetsGroupBox = new QGroupBox(page);
        planetsGroupBox->setObjectName(QStringLiteral("planetsGroupBox"));
        planetsGroupBox->setFlat(true);
        planetsGroupBox->setCheckable(true);
        verticalLayout_2 = new QVBoxLayout(planetsGroupBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        planetMarkerCheckBox = new QCheckBox(planetsGroupBox);
        planetMarkerCheckBox->setObjectName(QStringLiteral("planetMarkerCheckBox"));

        verticalLayout_2->addWidget(planetMarkerCheckBox);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        horizontalLayout_16->setContentsMargins(-1, -1, -1, 0);
        planetOrbitCheckBox = new QCheckBox(planetsGroupBox);
        planetOrbitCheckBox->setObjectName(QStringLiteral("planetOrbitCheckBox"));
        sizePolicy2.setHeightForWidth(planetOrbitCheckBox->sizePolicy().hasHeightForWidth());
        planetOrbitCheckBox->setSizePolicy(sizePolicy2);

        horizontalLayout_16->addWidget(planetOrbitCheckBox);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_4);

        pushButtonOrbitColors = new QPushButton(planetsGroupBox);
        pushButtonOrbitColors->setObjectName(QStringLiteral("pushButtonOrbitColors"));

        horizontalLayout_16->addWidget(pushButtonOrbitColors);


        verticalLayout_2->addLayout(horizontalLayout_16);

        planetIsolatedOrbitCheckBox = new QCheckBox(planetsGroupBox);
        planetIsolatedOrbitCheckBox->setObjectName(QStringLiteral("planetIsolatedOrbitCheckBox"));

        verticalLayout_2->addWidget(planetIsolatedOrbitCheckBox);

        planetIsolatedTrailsCheckBox = new QCheckBox(planetsGroupBox);
        planetIsolatedTrailsCheckBox->setObjectName(QStringLiteral("planetIsolatedTrailsCheckBox"));

        verticalLayout_2->addWidget(planetIsolatedTrailsCheckBox);

        planetLightSpeedCheckBox = new QCheckBox(planetsGroupBox);
        planetLightSpeedCheckBox->setObjectName(QStringLiteral("planetLightSpeedCheckBox"));

        verticalLayout_2->addWidget(planetLightSpeedCheckBox);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        customGrsSettingsCheckBox = new QCheckBox(planetsGroupBox);
        customGrsSettingsCheckBox->setObjectName(QStringLiteral("customGrsSettingsCheckBox"));

        horizontalLayout_15->addWidget(customGrsSettingsCheckBox);

        pushButtonGrsDetails = new QPushButton(planetsGroupBox);
        pushButtonGrsDetails->setObjectName(QStringLiteral("pushButtonGrsDetails"));

        horizontalLayout_15->addWidget(pushButtonGrsDetails);


        verticalLayout_2->addLayout(horizontalLayout_15);

        planetLimMagHorizontalLayout = new QHBoxLayout();
        planetLimMagHorizontalLayout->setObjectName(QStringLiteral("planetLimMagHorizontalLayout"));
        planetLimitMagnitudeCheckBox = new QCheckBox(planetsGroupBox);
        planetLimitMagnitudeCheckBox->setObjectName(QStringLiteral("planetLimitMagnitudeCheckBox"));

        planetLimMagHorizontalLayout->addWidget(planetLimitMagnitudeCheckBox);

        planetLimitMagnitudeDoubleSpinBox = new QDoubleSpinBox(planetsGroupBox);
        planetLimitMagnitudeDoubleSpinBox->setObjectName(QStringLiteral("planetLimitMagnitudeDoubleSpinBox"));
        planetLimitMagnitudeDoubleSpinBox->setMaximum(22);
        planetLimitMagnitudeDoubleSpinBox->setSingleStep(0.1);
        planetLimitMagnitudeDoubleSpinBox->setValue(6.5);

        planetLimMagHorizontalLayout->addWidget(planetLimitMagnitudeDoubleSpinBox);


        verticalLayout_2->addLayout(planetLimMagHorizontalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        planetScaleMoonCheckBox = new QCheckBox(planetsGroupBox);
        planetScaleMoonCheckBox->setObjectName(QStringLiteral("planetScaleMoonCheckBox"));

        horizontalLayout->addWidget(planetScaleMoonCheckBox);

        moonScaleFactor = new QDoubleSpinBox(planetsGroupBox);
        moonScaleFactor->setObjectName(QStringLiteral("moonScaleFactor"));
        moonScaleFactor->setDecimals(1);
        moonScaleFactor->setMinimum(1);
        moonScaleFactor->setMaximum(20);
        moonScaleFactor->setSingleStep(0.1);
        moonScaleFactor->setValue(4);

        horizontalLayout->addWidget(moonScaleFactor);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        planetLabelCheckBox = new QCheckBox(planetsGroupBox);
        planetLabelCheckBox->setObjectName(QStringLiteral("planetLabelCheckBox"));

        horizontalLayout_17->addWidget(planetLabelCheckBox);

        planetsLabelsHorizontalSlider = new QSlider(planetsGroupBox);
        planetsLabelsHorizontalSlider->setObjectName(QStringLiteral("planetsLabelsHorizontalSlider"));
        sizePolicy3.setHeightForWidth(planetsLabelsHorizontalSlider->sizePolicy().hasHeightForWidth());
        planetsLabelsHorizontalSlider->setSizePolicy(sizePolicy3);
        planetsLabelsHorizontalSlider->setMinimumSize(QSize(180, 0));
        planetsLabelsHorizontalSlider->setValue(33);
        planetsLabelsHorizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_17->addWidget(planetsLabelsHorizontalSlider);


        verticalLayout_2->addLayout(horizontalLayout_17);


        gridLayout->addWidget(planetsGroupBox, 0, 1, 2, 1);

        largeObjectsGroupbox = new QGroupBox(page);
        largeObjectsGroupbox->setObjectName(QStringLiteral("largeObjectsGroupbox"));
        largeObjectsGroupbox->setAlignment(Qt::AlignLeading);
        largeObjectsGroupbox->setFlat(true);
        largeObjectsGroupbox->setCheckable(false);
        verticalLayout_largeObjects = new QVBoxLayout(largeObjectsGroupbox);
        verticalLayout_largeObjects->setObjectName(QStringLiteral("verticalLayout_largeObjects"));
        verticalLayout_largeObjects->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_milkyWay = new QHBoxLayout();
        horizontalLayout_milkyWay->setObjectName(QStringLiteral("horizontalLayout_milkyWay"));
        milkyWayCheckBox = new QCheckBox(largeObjectsGroupbox);
        milkyWayCheckBox->setObjectName(QStringLiteral("milkyWayCheckBox"));

        horizontalLayout_milkyWay->addWidget(milkyWayCheckBox);

        milkyWayBrightnessDoubleSpinBox = new QDoubleSpinBox(largeObjectsGroupbox);
        milkyWayBrightnessDoubleSpinBox->setObjectName(QStringLiteral("milkyWayBrightnessDoubleSpinBox"));
        milkyWayBrightnessDoubleSpinBox->setMaximumSize(QSize(70, 16777215));
        milkyWayBrightnessDoubleSpinBox->setAlignment(Qt::AlignCenter);
        milkyWayBrightnessDoubleSpinBox->setDecimals(2);
        milkyWayBrightnessDoubleSpinBox->setMaximum(10);
        milkyWayBrightnessDoubleSpinBox->setSingleStep(0.1);
        milkyWayBrightnessDoubleSpinBox->setValue(1);

        horizontalLayout_milkyWay->addWidget(milkyWayBrightnessDoubleSpinBox);


        verticalLayout_largeObjects->addLayout(horizontalLayout_milkyWay);

        horizontalLayout_zodiacalLight = new QHBoxLayout();
        horizontalLayout_zodiacalLight->setObjectName(QStringLiteral("horizontalLayout_zodiacalLight"));
        zodiacalLightCheckBox = new QCheckBox(largeObjectsGroupbox);
        zodiacalLightCheckBox->setObjectName(QStringLiteral("zodiacalLightCheckBox"));

        horizontalLayout_zodiacalLight->addWidget(zodiacalLightCheckBox);

        zodiacalLightBrightnessDoubleSpinBox = new QDoubleSpinBox(largeObjectsGroupbox);
        zodiacalLightBrightnessDoubleSpinBox->setObjectName(QStringLiteral("zodiacalLightBrightnessDoubleSpinBox"));
        zodiacalLightBrightnessDoubleSpinBox->setMaximumSize(QSize(70, 16777215));
        zodiacalLightBrightnessDoubleSpinBox->setAlignment(Qt::AlignCenter);
        zodiacalLightBrightnessDoubleSpinBox->setDecimals(2);
        zodiacalLightBrightnessDoubleSpinBox->setMaximum(10);
        zodiacalLightBrightnessDoubleSpinBox->setSingleStep(0.1);
        zodiacalLightBrightnessDoubleSpinBox->setValue(1);

        horizontalLayout_zodiacalLight->addWidget(zodiacalLightBrightnessDoubleSpinBox);


        verticalLayout_largeObjects->addLayout(horizontalLayout_zodiacalLight);

        adaptationCheckbox = new QCheckBox(largeObjectsGroupbox);
        adaptationCheckbox->setObjectName(QStringLiteral("adaptationCheckbox"));
        adaptationCheckbox->setChecked(false);

        verticalLayout_largeObjects->addWidget(adaptationCheckbox);


        gridLayout->addWidget(largeObjectsGroupbox, 1, 0, 1, 1);

        stackedWidget->addWidget(page);
        page_DSO = new QWidget();
        page_DSO->setObjectName(QStringLiteral("page_DSO"));
        gridLayout_11 = new QGridLayout(page_DSO);
        gridLayout_11->setSpacing(0);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        gridLayout_11->setContentsMargins(0, 0, 0, 0);
        groupDSOCatalogs = new QGroupBox(page_DSO);
        groupDSOCatalogs->setObjectName(QStringLiteral("groupDSOCatalogs"));
        gridLayout_10 = new QGridLayout(groupDSOCatalogs);
        gridLayout_10->setSpacing(6);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        gridLayout_10->setContentsMargins(0, 0, 0, 0);
        checkBoxIC = new QCheckBox(groupDSOCatalogs);
        buttonGroupDisplayedDSOCatalogs = new QButtonGroup(viewDialogForm);
        buttonGroupDisplayedDSOCatalogs->setObjectName(QStringLiteral("buttonGroupDisplayedDSOCatalogs"));
        buttonGroupDisplayedDSOCatalogs->setExclusive(false);
        buttonGroupDisplayedDSOCatalogs->addButton(checkBoxIC);
        checkBoxIC->setObjectName(QStringLiteral("checkBoxIC"));
        checkBoxIC->setText(QStringLiteral("IC"));

        gridLayout_10->addWidget(checkBoxIC, 0, 1, 1, 1);

        checkBoxNGC = new QCheckBox(groupDSOCatalogs);
        buttonGroupDisplayedDSOCatalogs->addButton(checkBoxNGC);
        checkBoxNGC->setObjectName(QStringLiteral("checkBoxNGC"));
        checkBoxNGC->setText(QStringLiteral("NGC"));

        gridLayout_10->addWidget(checkBoxNGC, 2, 0, 1, 1);

        checkBoxLBN = new QCheckBox(groupDSOCatalogs);
        buttonGroupDisplayedDSOCatalogs->addButton(checkBoxLBN);
        checkBoxLBN->setObjectName(QStringLiteral("checkBoxLBN"));
        checkBoxLBN->setText(QStringLiteral("LBN"));

        gridLayout_10->addWidget(checkBoxLBN, 2, 2, 1, 1);

        checkBoxM = new QCheckBox(groupDSOCatalogs);
        buttonGroupDisplayedDSOCatalogs->addButton(checkBoxM);
        checkBoxM->setObjectName(QStringLiteral("checkBoxM"));
        checkBoxM->setText(QStringLiteral("M"));

        gridLayout_10->addWidget(checkBoxM, 0, 0, 1, 1);

        checkBoxC = new QCheckBox(groupDSOCatalogs);
        buttonGroupDisplayedDSOCatalogs->addButton(checkBoxC);
        checkBoxC->setObjectName(QStringLiteral("checkBoxC"));
        checkBoxC->setText(QStringLiteral("C"));

        gridLayout_10->addWidget(checkBoxC, 1, 0, 1, 1);

        checkBoxB = new QCheckBox(groupDSOCatalogs);
        buttonGroupDisplayedDSOCatalogs->addButton(checkBoxB);
        checkBoxB->setObjectName(QStringLiteral("checkBoxB"));
        checkBoxB->setText(QStringLiteral("B"));

        gridLayout_10->addWidget(checkBoxB, 1, 1, 1, 1);

        checkBoxSh2 = new QCheckBox(groupDSOCatalogs);
        buttonGroupDisplayedDSOCatalogs->addButton(checkBoxSh2);
        checkBoxSh2->setObjectName(QStringLiteral("checkBoxSh2"));
        checkBoxSh2->setText(QStringLiteral("SH 2"));

        gridLayout_10->addWidget(checkBoxSh2, 2, 1, 1, 1);

        checkBoxVdB = new QCheckBox(groupDSOCatalogs);
        buttonGroupDisplayedDSOCatalogs->addButton(checkBoxVdB);
        checkBoxVdB->setObjectName(QStringLiteral("checkBoxVdB"));
        checkBoxVdB->setText(QStringLiteral("VdB"));

        gridLayout_10->addWidget(checkBoxVdB, 0, 2, 1, 1);

        checkBoxRCW = new QCheckBox(groupDSOCatalogs);
        buttonGroupDisplayedDSOCatalogs->addButton(checkBoxRCW);
        checkBoxRCW->setObjectName(QStringLiteral("checkBoxRCW"));
        checkBoxRCW->setText(QStringLiteral("RCW"));

        gridLayout_10->addWidget(checkBoxRCW, 1, 2, 1, 1);

        checkBoxLDN = new QCheckBox(groupDSOCatalogs);
        buttonGroupDisplayedDSOCatalogs->addButton(checkBoxLDN);
        checkBoxLDN->setObjectName(QStringLiteral("checkBoxLDN"));
        checkBoxLDN->setText(QStringLiteral("LDN"));

        gridLayout_10->addWidget(checkBoxLDN, 0, 3, 1, 1);

        checkBoxCr = new QCheckBox(groupDSOCatalogs);
        buttonGroupDisplayedDSOCatalogs->addButton(checkBoxCr);
        checkBoxCr->setObjectName(QStringLiteral("checkBoxCr"));
        checkBoxCr->setText(QStringLiteral("Cr"));

        gridLayout_10->addWidget(checkBoxCr, 1, 3, 1, 1);

        checkBoxMel = new QCheckBox(groupDSOCatalogs);
        buttonGroupDisplayedDSOCatalogs->addButton(checkBoxMel);
        checkBoxMel->setObjectName(QStringLiteral("checkBoxMel"));
        checkBoxMel->setText(QStringLiteral("Mel"));

        gridLayout_10->addWidget(checkBoxMel, 2, 3, 1, 1);

        checkBoxPGC = new QCheckBox(groupDSOCatalogs);
        buttonGroupDisplayedDSOCatalogs->addButton(checkBoxPGC);
        checkBoxPGC->setObjectName(QStringLiteral("checkBoxPGC"));
        checkBoxPGC->setText(QStringLiteral("PGC"));

        gridLayout_10->addWidget(checkBoxPGC, 0, 4, 1, 1);

        checkBoxUGC = new QCheckBox(groupDSOCatalogs);
        buttonGroupDisplayedDSOCatalogs->addButton(checkBoxUGC);
        checkBoxUGC->setObjectName(QStringLiteral("checkBoxUGC"));
        checkBoxUGC->setText(QStringLiteral("UGC"));

        gridLayout_10->addWidget(checkBoxUGC, 1, 4, 1, 1);

        checkBoxCed = new QCheckBox(groupDSOCatalogs);
        buttonGroupDisplayedDSOCatalogs->addButton(checkBoxCed);
        checkBoxCed->setObjectName(QStringLiteral("checkBoxCed"));
        checkBoxCed->setText(QStringLiteral("Ced"));

        gridLayout_10->addWidget(checkBoxCed, 2, 4, 1, 1);


        gridLayout_11->addWidget(groupDSOCatalogs, 0, 0, 1, 2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_11->addItem(verticalSpacer_3, 3, 0, 1, 1);

        groupBoxDSOTypeFilters = new QGroupBox(page_DSO);
        groupBoxDSOTypeFilters->setObjectName(QStringLiteral("groupBoxDSOTypeFilters"));
        groupBoxDSOTypeFilters->setFlat(true);
        groupBoxDSOTypeFilters->setCheckable(true);
        groupBoxDSOTypeFilters->setChecked(false);
        gridLayout_13 = new QGridLayout(groupBoxDSOTypeFilters);
        gridLayout_13->setSpacing(6);
        gridLayout_13->setObjectName(QStringLiteral("gridLayout_13"));
        gridLayout_13->setContentsMargins(0, 0, 0, 0);
        checkBoxSupernovaRemnantsType = new QCheckBox(groupBoxDSOTypeFilters);
        buttonGroupDisplayedDSOTypes = new QButtonGroup(viewDialogForm);
        buttonGroupDisplayedDSOTypes->setObjectName(QStringLiteral("buttonGroupDisplayedDSOTypes"));
        buttonGroupDisplayedDSOTypes->setExclusive(false);
        buttonGroupDisplayedDSOTypes->addButton(checkBoxSupernovaRemnantsType);
        checkBoxSupernovaRemnantsType->setObjectName(QStringLiteral("checkBoxSupernovaRemnantsType"));

        gridLayout_13->addWidget(checkBoxSupernovaRemnantsType, 5, 1, 1, 1);

        checkBoxInteractingGalaxiesType = new QCheckBox(groupBoxDSOTypeFilters);
        buttonGroupDisplayedDSOTypes->addButton(checkBoxInteractingGalaxiesType);
        checkBoxInteractingGalaxiesType->setObjectName(QStringLiteral("checkBoxInteractingGalaxiesType"));

        gridLayout_13->addWidget(checkBoxInteractingGalaxiesType, 4, 0, 1, 1);

        checkBoxHydrogenRegionsType = new QCheckBox(groupBoxDSOTypeFilters);
        buttonGroupDisplayedDSOTypes->addButton(checkBoxHydrogenRegionsType);
        checkBoxHydrogenRegionsType->setObjectName(QStringLiteral("checkBoxHydrogenRegionsType"));

        gridLayout_13->addWidget(checkBoxHydrogenRegionsType, 6, 0, 1, 1);

        checkBoxOtherType = new QCheckBox(groupBoxDSOTypeFilters);
        buttonGroupDisplayedDSOTypes->addButton(checkBoxOtherType);
        checkBoxOtherType->setObjectName(QStringLiteral("checkBoxOtherType"));

        gridLayout_13->addWidget(checkBoxOtherType, 6, 1, 1, 1);

        checkBoxStarClustersType = new QCheckBox(groupBoxDSOTypeFilters);
        buttonGroupDisplayedDSOTypes->addButton(checkBoxStarClustersType);
        checkBoxStarClustersType->setObjectName(QStringLiteral("checkBoxStarClustersType"));

        gridLayout_13->addWidget(checkBoxStarClustersType, 5, 0, 1, 1);

        checkBoxPlanetaryNebulaeType = new QCheckBox(groupBoxDSOTypeFilters);
        buttonGroupDisplayedDSOTypes->addButton(checkBoxPlanetaryNebulaeType);
        checkBoxPlanetaryNebulaeType->setObjectName(QStringLiteral("checkBoxPlanetaryNebulaeType"));

        gridLayout_13->addWidget(checkBoxPlanetaryNebulaeType, 4, 1, 1, 1);

        checkBoxGalaxiesType = new QCheckBox(groupBoxDSOTypeFilters);
        buttonGroupDisplayedDSOTypes->addButton(checkBoxGalaxiesType);
        checkBoxGalaxiesType->setObjectName(QStringLiteral("checkBoxGalaxiesType"));

        gridLayout_13->addWidget(checkBoxGalaxiesType, 1, 0, 1, 1);

        checkBoxActiveGalaxiesType = new QCheckBox(groupBoxDSOTypeFilters);
        buttonGroupDisplayedDSOTypes->addButton(checkBoxActiveGalaxiesType);
        checkBoxActiveGalaxiesType->setObjectName(QStringLiteral("checkBoxActiveGalaxiesType"));

        gridLayout_13->addWidget(checkBoxActiveGalaxiesType, 3, 0, 1, 1);

        checkBoxDarkNebulaeType = new QCheckBox(groupBoxDSOTypeFilters);
        buttonGroupDisplayedDSOTypes->addButton(checkBoxDarkNebulaeType);
        checkBoxDarkNebulaeType->setObjectName(QStringLiteral("checkBoxDarkNebulaeType"));

        gridLayout_13->addWidget(checkBoxDarkNebulaeType, 3, 1, 1, 1);

        checkBoxBrightNebulaeType = new QCheckBox(groupBoxDSOTypeFilters);
        buttonGroupDisplayedDSOTypes->addButton(checkBoxBrightNebulaeType);
        checkBoxBrightNebulaeType->setObjectName(QStringLiteral("checkBoxBrightNebulaeType"));

        gridLayout_13->addWidget(checkBoxBrightNebulaeType, 1, 1, 1, 1);


        gridLayout_11->addWidget(groupBoxDSOTypeFilters, 1, 0, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        groupBoxLabelsAndMarkers = new QGroupBox(page_DSO);
        groupBoxLabelsAndMarkers->setObjectName(QStringLiteral("groupBoxLabelsAndMarkers"));
        groupBoxLabelsAndMarkers->setFlat(true);
        groupBoxLabelsAndMarkers->setCheckable(true);
        groupBoxLabelsAndMarkers->setChecked(false);
        gridLayout_12 = new QGridLayout(groupBoxLabelsAndMarkers);
        gridLayout_12->setSpacing(6);
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        gridLayout_12->setContentsMargins(0, 0, 0, 0);
        checkBoxProportionalHints = new QCheckBox(groupBoxLabelsAndMarkers);
        checkBoxProportionalHints->setObjectName(QStringLiteral("checkBoxProportionalHints"));

        gridLayout_12->addWidget(checkBoxProportionalHints, 4, 0, 1, 1);

        checkBoxSurfaceBrightnessUsage = new QCheckBox(groupBoxLabelsAndMarkers);
        checkBoxSurfaceBrightnessUsage->setObjectName(QStringLiteral("checkBoxSurfaceBrightnessUsage"));

        gridLayout_12->addWidget(checkBoxSurfaceBrightnessUsage, 5, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        nebulaLimitMagnitudeCheckBox = new QCheckBox(groupBoxLabelsAndMarkers);
        nebulaLimitMagnitudeCheckBox->setObjectName(QStringLiteral("nebulaLimitMagnitudeCheckBox"));

        horizontalLayout_7->addWidget(nebulaLimitMagnitudeCheckBox);

        nebulaLimitMagnitudeDoubleSpinBox = new QDoubleSpinBox(groupBoxLabelsAndMarkers);
        nebulaLimitMagnitudeDoubleSpinBox->setObjectName(QStringLiteral("nebulaLimitMagnitudeDoubleSpinBox"));
        nebulaLimitMagnitudeDoubleSpinBox->setMinimum(3);
        nebulaLimitMagnitudeDoubleSpinBox->setMaximum(21);
        nebulaLimitMagnitudeDoubleSpinBox->setSingleStep(0.25);
        nebulaLimitMagnitudeDoubleSpinBox->setValue(8.5);

        horizontalLayout_7->addWidget(nebulaLimitMagnitudeDoubleSpinBox);


        gridLayout_12->addLayout(horizontalLayout_7, 6, 0, 1, 1);

        checkBoxDesignationsOnlyUsage = new QCheckBox(groupBoxLabelsAndMarkers);
        checkBoxDesignationsOnlyUsage->setObjectName(QStringLiteral("checkBoxDesignationsOnlyUsage"));

        gridLayout_12->addWidget(checkBoxDesignationsOnlyUsage, 3, 0, 1, 1);

        gridLayout_15 = new QGridLayout();
        gridLayout_15->setObjectName(QStringLiteral("gridLayout_15"));
        nebulasLabelsHorizontalSlider = new QSlider(groupBoxLabelsAndMarkers);
        nebulasLabelsHorizontalSlider->setObjectName(QStringLiteral("nebulasLabelsHorizontalSlider"));
        nebulasLabelsHorizontalSlider->setValue(33);
        nebulasLabelsHorizontalSlider->setOrientation(Qt::Horizontal);

        gridLayout_15->addWidget(nebulasLabelsHorizontalSlider, 0, 1, 1, 1);

        labelLabels = new QLabel(groupBoxLabelsAndMarkers);
        labelLabels->setObjectName(QStringLiteral("labelLabels"));

        gridLayout_15->addWidget(labelLabels, 0, 0, 1, 1);

        labelHints = new QLabel(groupBoxLabelsAndMarkers);
        labelHints->setObjectName(QStringLiteral("labelHints"));

        gridLayout_15->addWidget(labelHints, 1, 0, 1, 1);

        nebulasHintsHorizontalSlider = new QSlider(groupBoxLabelsAndMarkers);
        nebulasHintsHorizontalSlider->setObjectName(QStringLiteral("nebulasHintsHorizontalSlider"));
        nebulasHintsHorizontalSlider->setValue(33);
        nebulasHintsHorizontalSlider->setOrientation(Qt::Horizontal);

        gridLayout_15->addWidget(nebulasHintsHorizontalSlider, 1, 1, 1, 1);


        gridLayout_12->addLayout(gridLayout_15, 2, 0, 1, 1);

        pushButtonConfigureDSOColors = new QPushButton(groupBoxLabelsAndMarkers);
        pushButtonConfigureDSOColors->setObjectName(QStringLiteral("pushButtonConfigureDSOColors"));

        gridLayout_12->addWidget(pushButtonConfigureDSOColors, 7, 0, 1, 1);


        verticalLayout_4->addWidget(groupBoxLabelsAndMarkers);


        gridLayout_11->addLayout(verticalLayout_4, 1, 1, 1, 1);

        stackedWidget->addWidget(page_DSO);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        gridLayout_2 = new QGridLayout(page_2);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        celestialSphereGroupBox = new QGroupBox(page_2);
        celestialSphereGroupBox->setObjectName(QStringLiteral("celestialSphereGroupBox"));
        celestialSphereGroupBox->setCheckable(false);
        verticalLayout_10 = new QVBoxLayout(celestialSphereGroupBox);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        gridLayout_16 = new QGridLayout();
        gridLayout_16->setObjectName(QStringLiteral("gridLayout_16"));
        gridLayout_14 = new QGridLayout();
        gridLayout_14->setObjectName(QStringLiteral("gridLayout_14"));
        showEclipticLineJ2000CheckBox = new QCheckBox(celestialSphereGroupBox);
        showEclipticLineJ2000CheckBox->setObjectName(QStringLiteral("showEclipticLineJ2000CheckBox"));

        gridLayout_14->addWidget(showEclipticLineJ2000CheckBox, 2, 0, 1, 1);

        showEquatorLineCheckBox = new QCheckBox(celestialSphereGroupBox);
        showEquatorLineCheckBox->setObjectName(QStringLiteral("showEquatorLineCheckBox"));

        gridLayout_14->addWidget(showEquatorLineCheckBox, 1, 0, 1, 1);

        showEquatorJ2000LineCheckBox = new QCheckBox(celestialSphereGroupBox);
        showEquatorJ2000LineCheckBox->setObjectName(QStringLiteral("showEquatorJ2000LineCheckBox"));

        gridLayout_14->addWidget(showEquatorJ2000LineCheckBox, 0, 0, 1, 1);

        colorEquatorJ2000Line = new QToolButton(celestialSphereGroupBox);
        colorEquatorJ2000Line->setObjectName(QStringLiteral("colorEquatorJ2000Line"));
        colorEquatorJ2000Line->setText(QStringLiteral(""));

        gridLayout_14->addWidget(colorEquatorJ2000Line, 0, 1, 1, 1);

        showEclipticLineOfDateCheckBox = new QCheckBox(celestialSphereGroupBox);
        showEclipticLineOfDateCheckBox->setObjectName(QStringLiteral("showEclipticLineOfDateCheckBox"));

        gridLayout_14->addWidget(showEclipticLineOfDateCheckBox, 3, 0, 1, 1);

        colorEquatorLine = new QToolButton(celestialSphereGroupBox);
        colorEquatorLine->setObjectName(QStringLiteral("colorEquatorLine"));
        colorEquatorLine->setText(QStringLiteral(""));

        gridLayout_14->addWidget(colorEquatorLine, 1, 1, 1, 1);

        showGalacticEquatorLineCheckBox = new QCheckBox(celestialSphereGroupBox);
        showGalacticEquatorLineCheckBox->setObjectName(QStringLiteral("showGalacticEquatorLineCheckBox"));

        gridLayout_14->addWidget(showGalacticEquatorLineCheckBox, 5, 0, 1, 1);

        colorSupergalacticEquatorLine = new QToolButton(celestialSphereGroupBox);
        colorSupergalacticEquatorLine->setObjectName(QStringLiteral("colorSupergalacticEquatorLine"));
        colorSupergalacticEquatorLine->setText(QStringLiteral(""));

        gridLayout_14->addWidget(colorSupergalacticEquatorLine, 6, 1, 1, 1);

        colorEclipticLineOfDate = new QToolButton(celestialSphereGroupBox);
        colorEclipticLineOfDate->setObjectName(QStringLiteral("colorEclipticLineOfDate"));
        colorEclipticLineOfDate->setText(QStringLiteral(""));

        gridLayout_14->addWidget(colorEclipticLineOfDate, 3, 1, 1, 1);

        colorEclipticLineJ2000 = new QToolButton(celestialSphereGroupBox);
        colorEclipticLineJ2000->setObjectName(QStringLiteral("colorEclipticLineJ2000"));
        colorEclipticLineJ2000->setText(QStringLiteral(""));

        gridLayout_14->addWidget(colorEclipticLineJ2000, 2, 1, 1, 1);

        colorGalacticEquatorLine = new QToolButton(celestialSphereGroupBox);
        colorGalacticEquatorLine->setObjectName(QStringLiteral("colorGalacticEquatorLine"));
        colorGalacticEquatorLine->setText(QStringLiteral(""));

        gridLayout_14->addWidget(colorGalacticEquatorLine, 5, 1, 1, 1);

        showHorizonLineCheckBox = new QCheckBox(celestialSphereGroupBox);
        showHorizonLineCheckBox->setObjectName(QStringLiteral("showHorizonLineCheckBox"));

        gridLayout_14->addWidget(showHorizonLineCheckBox, 4, 0, 1, 1);

        colorHorizonLine = new QToolButton(celestialSphereGroupBox);
        colorHorizonLine->setObjectName(QStringLiteral("colorHorizonLine"));
        colorHorizonLine->setText(QStringLiteral(""));

        gridLayout_14->addWidget(colorHorizonLine, 4, 1, 1, 1);

        showSupergalacticEquatorLineCheckBox = new QCheckBox(celestialSphereGroupBox);
        showSupergalacticEquatorLineCheckBox->setObjectName(QStringLiteral("showSupergalacticEquatorLineCheckBox"));

        gridLayout_14->addWidget(showSupergalacticEquatorLineCheckBox, 6, 0, 1, 1);

        showMeridianLineCheckBox = new QCheckBox(celestialSphereGroupBox);
        showMeridianLineCheckBox->setObjectName(QStringLiteral("showMeridianLineCheckBox"));

        gridLayout_14->addWidget(showMeridianLineCheckBox, 7, 0, 1, 1);

        colorMeridianLine = new QToolButton(celestialSphereGroupBox);
        colorMeridianLine->setObjectName(QStringLiteral("colorMeridianLine"));
        colorMeridianLine->setText(QStringLiteral(""));

        gridLayout_14->addWidget(colorMeridianLine, 7, 1, 1, 1);

        showLongitudeLineCheckBox = new QCheckBox(celestialSphereGroupBox);
        showLongitudeLineCheckBox->setObjectName(QStringLiteral("showLongitudeLineCheckBox"));

        gridLayout_14->addWidget(showLongitudeLineCheckBox, 8, 0, 1, 1);

        colorLongitudeLine = new QToolButton(celestialSphereGroupBox);
        colorLongitudeLine->setObjectName(QStringLiteral("colorLongitudeLine"));
        colorLongitudeLine->setText(QStringLiteral(""));

        gridLayout_14->addWidget(colorLongitudeLine, 8, 1, 1, 1);

        showColuresLineCheckBox = new QCheckBox(celestialSphereGroupBox);
        showColuresLineCheckBox->setObjectName(QStringLiteral("showColuresLineCheckBox"));

        gridLayout_14->addWidget(showColuresLineCheckBox, 9, 0, 1, 1);

        colorColuresLine = new QToolButton(celestialSphereGroupBox);
        colorColuresLine->setObjectName(QStringLiteral("colorColuresLine"));
        colorColuresLine->setText(QStringLiteral(""));

        gridLayout_14->addWidget(colorColuresLine, 9, 1, 1, 1);


        gridLayout_16->addLayout(gridLayout_14, 0, 1, 1, 1);

        gridLayout_17 = new QGridLayout();
        gridLayout_17->setObjectName(QStringLiteral("gridLayout_17"));
        showSupergalacticPolesCheckBox = new QCheckBox(celestialSphereGroupBox);
        showSupergalacticPolesCheckBox->setObjectName(QStringLiteral("showSupergalacticPolesCheckBox"));

        gridLayout_17->addWidget(showSupergalacticPolesCheckBox, 6, 0, 1, 1);

        colorEclipticJ2000Poles = new QToolButton(celestialSphereGroupBox);
        colorEclipticJ2000Poles->setObjectName(QStringLiteral("colorEclipticJ2000Poles"));
        colorEclipticJ2000Poles->setText(QStringLiteral(""));

        gridLayout_17->addWidget(colorEclipticJ2000Poles, 2, 1, 1, 1);

        colorPrimeVerticalLine = new QToolButton(celestialSphereGroupBox);
        colorPrimeVerticalLine->setObjectName(QStringLiteral("colorPrimeVerticalLine"));
        colorPrimeVerticalLine->setText(QStringLiteral(""));

        gridLayout_17->addWidget(colorPrimeVerticalLine, 7, 1, 1, 1);

        showEclipticJ2000PolesCheckBox = new QCheckBox(celestialSphereGroupBox);
        showEclipticJ2000PolesCheckBox->setObjectName(QStringLiteral("showEclipticJ2000PolesCheckBox"));

        gridLayout_17->addWidget(showEclipticJ2000PolesCheckBox, 2, 0, 1, 1);

        colorCelestialJ2000Poles = new QToolButton(celestialSphereGroupBox);
        colorCelestialJ2000Poles->setObjectName(QStringLiteral("colorCelestialJ2000Poles"));
        colorCelestialJ2000Poles->setText(QStringLiteral(""));

        gridLayout_17->addWidget(colorCelestialJ2000Poles, 0, 1, 1, 1);

        showCelestialPolesCheckBox = new QCheckBox(celestialSphereGroupBox);
        showCelestialPolesCheckBox->setObjectName(QStringLiteral("showCelestialPolesCheckBox"));

        gridLayout_17->addWidget(showCelestialPolesCheckBox, 1, 0, 1, 1);

        colorEclipticPoles = new QToolButton(celestialSphereGroupBox);
        colorEclipticPoles->setObjectName(QStringLiteral("colorEclipticPoles"));
        colorEclipticPoles->setText(QStringLiteral(""));

        gridLayout_17->addWidget(colorEclipticPoles, 3, 1, 1, 1);

        colorCelestialPoles = new QToolButton(celestialSphereGroupBox);
        colorCelestialPoles->setObjectName(QStringLiteral("colorCelestialPoles"));
        colorCelestialPoles->setText(QStringLiteral(""));

        gridLayout_17->addWidget(colorCelestialPoles, 1, 1, 1, 1);

        colorSupergalacticPoles = new QToolButton(celestialSphereGroupBox);
        colorSupergalacticPoles->setObjectName(QStringLiteral("colorSupergalacticPoles"));
        colorSupergalacticPoles->setText(QStringLiteral(""));

        gridLayout_17->addWidget(colorSupergalacticPoles, 6, 1, 1, 1);

        showEclipticPolesCheckBox = new QCheckBox(celestialSphereGroupBox);
        showEclipticPolesCheckBox->setObjectName(QStringLiteral("showEclipticPolesCheckBox"));

        gridLayout_17->addWidget(showEclipticPolesCheckBox, 3, 0, 1, 1);

        showPrimeVerticalLineCheckBox = new QCheckBox(celestialSphereGroupBox);
        showPrimeVerticalLineCheckBox->setObjectName(QStringLiteral("showPrimeVerticalLineCheckBox"));

        gridLayout_17->addWidget(showPrimeVerticalLineCheckBox, 7, 0, 1, 1);

        colorGalacticPoles = new QToolButton(celestialSphereGroupBox);
        colorGalacticPoles->setObjectName(QStringLiteral("colorGalacticPoles"));
        colorGalacticPoles->setText(QStringLiteral(""));

        gridLayout_17->addWidget(colorGalacticPoles, 5, 1, 1, 1);

        showZenithNadirCheckBox = new QCheckBox(celestialSphereGroupBox);
        showZenithNadirCheckBox->setObjectName(QStringLiteral("showZenithNadirCheckBox"));

        gridLayout_17->addWidget(showZenithNadirCheckBox, 4, 0, 1, 1);

        showGalacticPolesCheckBox = new QCheckBox(celestialSphereGroupBox);
        showGalacticPolesCheckBox->setObjectName(QStringLiteral("showGalacticPolesCheckBox"));

        gridLayout_17->addWidget(showGalacticPolesCheckBox, 5, 0, 1, 1);

        colorZenithNadir = new QToolButton(celestialSphereGroupBox);
        colorZenithNadir->setObjectName(QStringLiteral("colorZenithNadir"));
        colorZenithNadir->setText(QStringLiteral(""));

        gridLayout_17->addWidget(colorZenithNadir, 4, 1, 1, 1);

        showCelestialJ2000PolesCheckBox = new QCheckBox(celestialSphereGroupBox);
        showCelestialJ2000PolesCheckBox->setObjectName(QStringLiteral("showCelestialJ2000PolesCheckBox"));

        gridLayout_17->addWidget(showCelestialJ2000PolesCheckBox, 0, 0, 1, 1);

        showCircumpolarCirclesCheckBox = new QCheckBox(celestialSphereGroupBox);
        showCircumpolarCirclesCheckBox->setObjectName(QStringLiteral("showCircumpolarCirclesCheckBox"));

        gridLayout_17->addWidget(showCircumpolarCirclesCheckBox, 8, 0, 1, 1);

        colorCircumpolarCircles = new QToolButton(celestialSphereGroupBox);
        colorCircumpolarCircles->setObjectName(QStringLiteral("colorCircumpolarCircles"));
        colorCircumpolarCircles->setText(QStringLiteral(""));

        gridLayout_17->addWidget(colorCircumpolarCircles, 8, 1, 1, 1);

        showPrecessionCirclesCheckBox = new QCheckBox(celestialSphereGroupBox);
        showPrecessionCirclesCheckBox->setObjectName(QStringLiteral("showPrecessionCirclesCheckBox"));

        gridLayout_17->addWidget(showPrecessionCirclesCheckBox, 9, 0, 1, 1);

        colorPrecessionCircles = new QToolButton(celestialSphereGroupBox);
        colorPrecessionCircles->setObjectName(QStringLiteral("colorPrecessionCircles"));
        colorPrecessionCircles->setText(QStringLiteral(""));

        gridLayout_17->addWidget(colorPrecessionCircles, 9, 1, 1, 1);


        gridLayout_16->addLayout(gridLayout_17, 0, 2, 1, 1);

        gridLayout_9 = new QGridLayout();
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        showAzimuthalGridCheckBox = new QCheckBox(celestialSphereGroupBox);
        showAzimuthalGridCheckBox->setObjectName(QStringLiteral("showAzimuthalGridCheckBox"));

        gridLayout_9->addWidget(showAzimuthalGridCheckBox, 4, 0, 1, 1);

        showEclipticGridOfDateCheckBox = new QCheckBox(celestialSphereGroupBox);
        showEclipticGridOfDateCheckBox->setObjectName(QStringLiteral("showEclipticGridOfDateCheckBox"));

        gridLayout_9->addWidget(showEclipticGridOfDateCheckBox, 3, 0, 1, 1);

        colorEquatorialJ2000Grid = new QToolButton(celestialSphereGroupBox);
        colorEquatorialJ2000Grid->setObjectName(QStringLiteral("colorEquatorialJ2000Grid"));
        colorEquatorialJ2000Grid->setText(QStringLiteral(""));

        gridLayout_9->addWidget(colorEquatorialJ2000Grid, 0, 1, 1, 1);

        colorEquinoxJ2000Points = new QToolButton(celestialSphereGroupBox);
        colorEquinoxJ2000Points->setObjectName(QStringLiteral("colorEquinoxJ2000Points"));
        colorEquinoxJ2000Points->setText(QStringLiteral(""));

        gridLayout_9->addWidget(colorEquinoxJ2000Points, 7, 1, 1, 1);

        showEclipticGridJ2000CheckBox = new QCheckBox(celestialSphereGroupBox);
        showEclipticGridJ2000CheckBox->setObjectName(QStringLiteral("showEclipticGridJ2000CheckBox"));

        gridLayout_9->addWidget(showEclipticGridJ2000CheckBox, 2, 0, 1, 1);

        colorSupergalacticGrid = new QToolButton(celestialSphereGroupBox);
        colorSupergalacticGrid->setObjectName(QStringLiteral("colorSupergalacticGrid"));
        colorSupergalacticGrid->setText(QStringLiteral(""));

        gridLayout_9->addWidget(colorSupergalacticGrid, 6, 1, 1, 1);

        colorGalacticGrid = new QToolButton(celestialSphereGroupBox);
        colorGalacticGrid->setObjectName(QStringLiteral("colorGalacticGrid"));
        colorGalacticGrid->setText(QStringLiteral(""));

        gridLayout_9->addWidget(colorGalacticGrid, 5, 1, 1, 1);

        showSupergalacticGridCheckBox = new QCheckBox(celestialSphereGroupBox);
        showSupergalacticGridCheckBox->setObjectName(QStringLiteral("showSupergalacticGridCheckBox"));

        gridLayout_9->addWidget(showSupergalacticGridCheckBox, 6, 0, 1, 1);

        showEquatorialJ2000GridCheckBox = new QCheckBox(celestialSphereGroupBox);
        showEquatorialJ2000GridCheckBox->setObjectName(QStringLiteral("showEquatorialJ2000GridCheckBox"));

        gridLayout_9->addWidget(showEquatorialJ2000GridCheckBox, 0, 0, 1, 1);

        colorEclipticGridJ2000 = new QToolButton(celestialSphereGroupBox);
        colorEclipticGridJ2000->setObjectName(QStringLiteral("colorEclipticGridJ2000"));
        colorEclipticGridJ2000->setText(QStringLiteral(""));

        gridLayout_9->addWidget(colorEclipticGridJ2000, 2, 1, 1, 1);

        showGalacticGridCheckBox = new QCheckBox(celestialSphereGroupBox);
        showGalacticGridCheckBox->setObjectName(QStringLiteral("showGalacticGridCheckBox"));

        gridLayout_9->addWidget(showGalacticGridCheckBox, 5, 0, 1, 1);

        showEquinoxJ2000PointsCheckBox = new QCheckBox(celestialSphereGroupBox);
        showEquinoxJ2000PointsCheckBox->setObjectName(QStringLiteral("showEquinoxJ2000PointsCheckBox"));

        gridLayout_9->addWidget(showEquinoxJ2000PointsCheckBox, 7, 0, 1, 1);

        colorEclipticGridOfDate = new QToolButton(celestialSphereGroupBox);
        colorEclipticGridOfDate->setObjectName(QStringLiteral("colorEclipticGridOfDate"));
        colorEclipticGridOfDate->setText(QStringLiteral(""));

        gridLayout_9->addWidget(colorEclipticGridOfDate, 3, 1, 1, 1);

        colorEquatorialGrid = new QToolButton(celestialSphereGroupBox);
        colorEquatorialGrid->setObjectName(QStringLiteral("colorEquatorialGrid"));
        colorEquatorialGrid->setText(QStringLiteral(""));

        gridLayout_9->addWidget(colorEquatorialGrid, 1, 1, 1, 1);

        colorAzimuthalGrid = new QToolButton(celestialSphereGroupBox);
        colorAzimuthalGrid->setObjectName(QStringLiteral("colorAzimuthalGrid"));
        colorAzimuthalGrid->setText(QStringLiteral(""));

        gridLayout_9->addWidget(colorAzimuthalGrid, 4, 1, 1, 1);

        showEquatorialGridCheckBox = new QCheckBox(celestialSphereGroupBox);
        showEquatorialGridCheckBox->setObjectName(QStringLiteral("showEquatorialGridCheckBox"));

        gridLayout_9->addWidget(showEquatorialGridCheckBox, 1, 0, 1, 1);

        showEquinoxPointsCheckBox = new QCheckBox(celestialSphereGroupBox);
        showEquinoxPointsCheckBox->setObjectName(QStringLiteral("showEquinoxPointsCheckBox"));

        gridLayout_9->addWidget(showEquinoxPointsCheckBox, 8, 0, 1, 1);

        colorEquinoxPoints = new QToolButton(celestialSphereGroupBox);
        colorEquinoxPoints->setObjectName(QStringLiteral("colorEquinoxPoints"));
        colorEquinoxPoints->setText(QStringLiteral(""));

        gridLayout_9->addWidget(colorEquinoxPoints, 8, 1, 1, 1);

        showCardinalPointsCheckBox = new QCheckBox(celestialSphereGroupBox);
        showCardinalPointsCheckBox->setObjectName(QStringLiteral("showCardinalPointsCheckBox"));

        gridLayout_9->addWidget(showCardinalPointsCheckBox, 9, 0, 1, 1);

        colorCardinalPoints = new QToolButton(celestialSphereGroupBox);
        colorCardinalPoints->setObjectName(QStringLiteral("colorCardinalPoints"));
        colorCardinalPoints->setText(QStringLiteral(""));

        gridLayout_9->addWidget(colorCardinalPoints, 9, 1, 1, 1);


        gridLayout_16->addLayout(gridLayout_9, 0, 0, 1, 1);


        verticalLayout_10->addLayout(gridLayout_16);


        gridLayout_2->addWidget(celestialSphereGroupBox, 0, 0, 1, 3);

        setProjectionGroupBox = new QGroupBox(page_2);
        setProjectionGroupBox->setObjectName(QStringLiteral("setProjectionGroupBox"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(setProjectionGroupBox->sizePolicy().hasHeightForWidth());
        setProjectionGroupBox->setSizePolicy(sizePolicy6);
        setProjectionGroupBox->setMinimumSize(QSize(0, 150));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(false);
        font2.setWeight(50);
        setProjectionGroupBox->setFont(font2);
        setProjectionGroupBox->setCheckable(false);
        horizontalLayout_10 = new QHBoxLayout(setProjectionGroupBox);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        projectionListWidget = new QListWidget(setProjectionGroupBox);
        projectionListWidget->setObjectName(QStringLiteral("projectionListWidget"));
        QSizePolicy sizePolicy7(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(projectionListWidget->sizePolicy().hasHeightForWidth());
        projectionListWidget->setSizePolicy(sizePolicy7);
        projectionListWidget->setMinimumSize(QSize(230, 0));
        projectionListWidget->setMaximumSize(QSize(180, 16777215));
        projectionListWidget->setFocusPolicy(Qt::NoFocus);
        projectionListWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        projectionListWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        horizontalLayout_10->addWidget(projectionListWidget);

        projectionDetailsVerticalLayout = new QVBoxLayout();
        projectionDetailsVerticalLayout->setObjectName(QStringLiteral("projectionDetailsVerticalLayout"));
        projectionTextBrowser = new QTextBrowser(setProjectionGroupBox);
        projectionTextBrowser->setObjectName(QStringLiteral("projectionTextBrowser"));
        projectionTextBrowser->setOpenExternalLinks(true);

        projectionDetailsVerticalLayout->addWidget(projectionTextBrowser);

        viewportOffsetHorizontalLayout = new QHBoxLayout();
        viewportOffsetHorizontalLayout->setObjectName(QStringLiteral("viewportOffsetHorizontalLayout"));
        viewportOffsetHorizontalLayout->setContentsMargins(5, -1, -1, -1);
        viewportOffsetLabel = new QLabel(setProjectionGroupBox);
        viewportOffsetLabel->setObjectName(QStringLiteral("viewportOffsetLabel"));

        viewportOffsetHorizontalLayout->addWidget(viewportOffsetLabel);

        viewportOffsetSpinBox = new QDoubleSpinBox(setProjectionGroupBox);
        viewportOffsetSpinBox->setObjectName(QStringLiteral("viewportOffsetSpinBox"));
        sizePolicy3.setHeightForWidth(viewportOffsetSpinBox->sizePolicy().hasHeightForWidth());
        viewportOffsetSpinBox->setSizePolicy(sizePolicy3);
        viewportOffsetSpinBox->setDecimals(0);
        viewportOffsetSpinBox->setMinimum(-50);
        viewportOffsetSpinBox->setMaximum(50);

        viewportOffsetHorizontalLayout->addWidget(viewportOffsetSpinBox);

        percentLabel = new QLabel(setProjectionGroupBox);
        percentLabel->setObjectName(QStringLiteral("percentLabel"));
        sizePolicy1.setHeightForWidth(percentLabel->sizePolicy().hasHeightForWidth());
        percentLabel->setSizePolicy(sizePolicy1);
        percentLabel->setText(QStringLiteral("%"));

        viewportOffsetHorizontalLayout->addWidget(percentLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        viewportOffsetHorizontalLayout->addItem(horizontalSpacer);


        projectionDetailsVerticalLayout->addLayout(viewportOffsetHorizontalLayout);


        horizontalLayout_10->addLayout(projectionDetailsVerticalLayout);


        gridLayout_2->addWidget(setProjectionGroupBox, 1, 0, 1, 3);

        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        gridLayout_3 = new QGridLayout(page_3);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        landscapesListWidget = new QListWidget(page_3);
        landscapesListWidget->setObjectName(QStringLiteral("landscapesListWidget"));
        sizePolicy6.setHeightForWidth(landscapesListWidget->sizePolicy().hasHeightForWidth());
        landscapesListWidget->setSizePolicy(sizePolicy6);
        landscapesListWidget->setMinimumSize(QSize(220, 0));
        landscapesListWidget->setMaximumSize(QSize(120, 16777215));
        landscapesListWidget->setFocusPolicy(Qt::NoFocus);
        landscapesListWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        gridLayout_3->addWidget(landscapesListWidget, 0, 0, 4, 1);

        landscapeTextBrowser = new QTextBrowser(page_3);
        landscapeTextBrowser->setObjectName(QStringLiteral("landscapeTextBrowser"));
        landscapeTextBrowser->setEnabled(true);
        sizePolicy7.setHeightForWidth(landscapeTextBrowser->sizePolicy().hasHeightForWidth());
        landscapeTextBrowser->setSizePolicy(sizePolicy7);
        QFont font3;
        font3.setPointSize(10);
        landscapeTextBrowser->setFont(font3);
        landscapeTextBrowser->setFrameShape(QFrame::StyledPanel);
        landscapeTextBrowser->setLineWidth(1);
        landscapeTextBrowser->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        landscapeTextBrowser->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        landscapeTextBrowser->setOpenExternalLinks(true);

        gridLayout_3->addWidget(landscapeTextBrowser, 0, 1, 1, 1);

        landscapeOptionsGroupBox = new QGroupBox(page_3);
        landscapeOptionsGroupBox->setObjectName(QStringLiteral("landscapeOptionsGroupBox"));
        sizePolicy5.setHeightForWidth(landscapeOptionsGroupBox->sizePolicy().hasHeightForWidth());
        landscapeOptionsGroupBox->setSizePolicy(sizePolicy5);
        landscapeOptionsGroupBox->setCheckable(false);
        gridLayout_7 = new QGridLayout(landscapeOptionsGroupBox);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        showFogCheckBox = new QCheckBox(landscapeOptionsGroupBox);
        showFogCheckBox->setObjectName(QStringLiteral("showFogCheckBox"));

        gridLayout_7->addWidget(showFogCheckBox, 3, 0, 1, 1);

        landscapePositionCheckBox = new QCheckBox(landscapeOptionsGroupBox);
        landscapePositionCheckBox->setObjectName(QStringLiteral("landscapePositionCheckBox"));

        gridLayout_7->addWidget(landscapePositionCheckBox, 2, 0, 1, 1);

        useAsDefaultLandscapeCheckBox = new QCheckBox(landscapeOptionsGroupBox);
        useAsDefaultLandscapeCheckBox->setObjectName(QStringLiteral("useAsDefaultLandscapeCheckBox"));

        gridLayout_7->addWidget(useAsDefaultLandscapeCheckBox, 0, 1, 1, 1);

        showGroundCheckBox = new QCheckBox(landscapeOptionsGroupBox);
        showGroundCheckBox->setObjectName(QStringLiteral("showGroundCheckBox"));

        gridLayout_7->addWidget(showGroundCheckBox, 0, 0, 1, 1);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        landscapeBrightnessCheckBox = new QCheckBox(landscapeOptionsGroupBox);
        landscapeBrightnessCheckBox->setObjectName(QStringLiteral("landscapeBrightnessCheckBox"));

        horizontalLayout_11->addWidget(landscapeBrightnessCheckBox);

        landscapeBrightnessSpinBox = new QDoubleSpinBox(landscapeOptionsGroupBox);
        landscapeBrightnessSpinBox->setObjectName(QStringLiteral("landscapeBrightnessSpinBox"));
        landscapeBrightnessSpinBox->setEnabled(false);
        landscapeBrightnessSpinBox->setMaximum(1);
        landscapeBrightnessSpinBox->setSingleStep(0.01);

        horizontalLayout_11->addWidget(landscapeBrightnessSpinBox);


        gridLayout_7->addLayout(horizontalLayout_11, 4, 0, 1, 1);

        localLandscapeBrightnessCheckBox = new QCheckBox(landscapeOptionsGroupBox);
        localLandscapeBrightnessCheckBox->setObjectName(QStringLiteral("localLandscapeBrightnessCheckBox"));
        localLandscapeBrightnessCheckBox->setEnabled(false);

        gridLayout_7->addWidget(localLandscapeBrightnessCheckBox, 4, 1, 1, 1);

        landscapeIlluminationCheckBox = new QCheckBox(landscapeOptionsGroupBox);
        landscapeIlluminationCheckBox->setObjectName(QStringLiteral("landscapeIlluminationCheckBox"));
        landscapeIlluminationCheckBox->setChecked(true);

        gridLayout_7->addWidget(landscapeIlluminationCheckBox, 3, 1, 1, 1);

        landscapeLabelsCheckBox = new QCheckBox(landscapeOptionsGroupBox);
        landscapeLabelsCheckBox->setObjectName(QStringLiteral("landscapeLabelsCheckBox"));

        gridLayout_7->addWidget(landscapeLabelsCheckBox, 2, 1, 1, 1);


        gridLayout_3->addWidget(landscapeOptionsGroupBox, 1, 1, 1, 1);

        pushButtonAddRemoveLandscapes = new QPushButton(page_3);
        pushButtonAddRemoveLandscapes->setObjectName(QStringLiteral("pushButtonAddRemoveLandscapes"));
        pushButtonAddRemoveLandscapes->setMinimumSize(QSize(0, 37));
        pushButtonAddRemoveLandscapes->setStyleSheet(QStringLiteral("margin-left: 10px; margin-right: 10px; margin-bottom:10px;"));

        gridLayout_3->addWidget(pushButtonAddRemoveLandscapes, 2, 1, 1, 1);

        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        gridLayout_4 = new QGridLayout(page_4);
        gridLayout_4->setSpacing(0);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        skyCultureTextBrowser = new QTextBrowser(page_4);
        skyCultureTextBrowser->setObjectName(QStringLiteral("skyCultureTextBrowser"));
        sizePolicy7.setHeightForWidth(skyCultureTextBrowser->sizePolicy().hasHeightForWidth());
        skyCultureTextBrowser->setSizePolicy(sizePolicy7);
        skyCultureTextBrowser->setMinimumSize(QSize(0, 0));
        skyCultureTextBrowser->setFont(font3);
        skyCultureTextBrowser->setFrameShape(QFrame::StyledPanel);
        skyCultureTextBrowser->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        skyCultureTextBrowser->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        skyCultureTextBrowser->setOpenExternalLinks(true);

        gridLayout_4->addWidget(skyCultureTextBrowser, 0, 1, 1, 1);

        culturesListWidget = new QListWidget(page_4);
        culturesListWidget->setObjectName(QStringLiteral("culturesListWidget"));
        QSizePolicy sizePolicy8(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy8.setHorizontalStretch(100);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(culturesListWidget->sizePolicy().hasHeightForWidth());
        culturesListWidget->setSizePolicy(sizePolicy8);
        culturesListWidget->setMinimumSize(QSize(220, 0));
        culturesListWidget->setMaximumSize(QSize(120, 16777213));
        culturesListWidget->setFocusPolicy(Qt::NoFocus);
        culturesListWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        culturesListWidget->setSelectionRectVisible(false);

        gridLayout_4->addWidget(culturesListWidget, 0, 0, 3, 1);

        starloreOptionsgroupBox = new QGroupBox(page_4);
        starloreOptionsgroupBox->setObjectName(QStringLiteral("starloreOptionsgroupBox"));
        starloreOptionsgroupBox->setEnabled(true);
        QSizePolicy sizePolicy9(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(starloreOptionsgroupBox->sizePolicy().hasHeightForWidth());
        starloreOptionsgroupBox->setSizePolicy(sizePolicy9);
        starloreOptionsgroupBox->setMinimumSize(QSize(0, 0));
        formLayout_2 = new QGridLayout(starloreOptionsgroupBox);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_constArtbrightness = new QHBoxLayout();
        horizontalLayout_constArtbrightness->setObjectName(QStringLiteral("horizontalLayout_constArtbrightness"));
        showConstellationArtCheckBox = new QCheckBox(starloreOptionsgroupBox);
        showConstellationArtCheckBox->setObjectName(QStringLiteral("showConstellationArtCheckBox"));

        horizontalLayout_constArtbrightness->addWidget(showConstellationArtCheckBox);

        constellationArtBrightnessSpinBox = new QDoubleSpinBox(starloreOptionsgroupBox);
        constellationArtBrightnessSpinBox->setObjectName(QStringLiteral("constellationArtBrightnessSpinBox"));
        constellationArtBrightnessSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        constellationArtBrightnessSpinBox->setMaximum(1);
        constellationArtBrightnessSpinBox->setSingleStep(0.05);

        horizontalLayout_constArtbrightness->addWidget(constellationArtBrightnessSpinBox);


        formLayout_2->addLayout(horizontalLayout_constArtbrightness, 3, 1, 1, 1);

        horizontalLayout_constLines = new QHBoxLayout();
        horizontalLayout_constLines->setObjectName(QStringLiteral("horizontalLayout_constLines"));
        showConstellationLinesCheckBox = new QCheckBox(starloreOptionsgroupBox);
        showConstellationLinesCheckBox->setObjectName(QStringLiteral("showConstellationLinesCheckBox"));

        horizontalLayout_constLines->addWidget(showConstellationLinesCheckBox);

        constellationLineThicknessSpinBox = new QDoubleSpinBox(starloreOptionsgroupBox);
        constellationLineThicknessSpinBox->setObjectName(QStringLiteral("constellationLineThicknessSpinBox"));
        constellationLineThicknessSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        constellationLineThicknessSpinBox->setDecimals(0);
        constellationLineThicknessSpinBox->setMinimum(1);
        constellationLineThicknessSpinBox->setMaximum(5);
        constellationLineThicknessSpinBox->setSingleStep(1);

        horizontalLayout_constLines->addWidget(constellationLineThicknessSpinBox);

        colorConstellationLines = new QToolButton(starloreOptionsgroupBox);
        colorConstellationLines->setObjectName(QStringLiteral("colorConstellationLines"));

        horizontalLayout_constLines->addWidget(colorConstellationLines);


        formLayout_2->addLayout(horizontalLayout_constLines, 3, 0, 1, 1);

        nativeNameCheckBox = new QCheckBox(starloreOptionsgroupBox);
        nativeNameCheckBox->setObjectName(QStringLiteral("nativeNameCheckBox"));

        formLayout_2->addWidget(nativeNameCheckBox, 2, 1, 1, 1);

        useAsDefaultSkyCultureCheckBox = new QCheckBox(starloreOptionsgroupBox);
        useAsDefaultSkyCultureCheckBox->setObjectName(QStringLiteral("useAsDefaultSkyCultureCheckBox"));

        formLayout_2->addWidget(useAsDefaultSkyCultureCheckBox, 0, 0, 1, 1);

        horizontalLayout_constLabels = new QHBoxLayout();
        horizontalLayout_constLabels->setObjectName(QStringLiteral("horizontalLayout_constLabels"));
        showConstellationLabelsCheckBox = new QCheckBox(starloreOptionsgroupBox);
        showConstellationLabelsCheckBox->setObjectName(QStringLiteral("showConstellationLabelsCheckBox"));

        horizontalLayout_constLabels->addWidget(showConstellationLabelsCheckBox);

        skyCultureNamesStyleComboBox = new QComboBox(starloreOptionsgroupBox);
        skyCultureNamesStyleComboBox->setObjectName(QStringLiteral("skyCultureNamesStyleComboBox"));

        horizontalLayout_constLabels->addWidget(skyCultureNamesStyleComboBox);

        colorConstellationLabels = new QToolButton(starloreOptionsgroupBox);
        colorConstellationLabels->setObjectName(QStringLiteral("colorConstellationLabels"));

        horizontalLayout_constLabels->addWidget(colorConstellationLabels);


        formLayout_2->addLayout(horizontalLayout_constLabels, 2, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(-1, -1, -1, 0);
        showConstellationBoundariesCheckBox = new QCheckBox(starloreOptionsgroupBox);
        showConstellationBoundariesCheckBox->setObjectName(QStringLiteral("showConstellationBoundariesCheckBox"));

        horizontalLayout_5->addWidget(showConstellationBoundariesCheckBox);

        colorConstellationBoundaries = new QToolButton(starloreOptionsgroupBox);
        colorConstellationBoundaries->setObjectName(QStringLiteral("colorConstellationBoundaries"));

        horizontalLayout_5->addWidget(colorConstellationBoundaries);


        formLayout_2->addLayout(horizontalLayout_5, 0, 1, 1, 1);


        gridLayout_4->addWidget(starloreOptionsgroupBox, 1, 1, 1, 1);

        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        verticalLayout_12 = new QVBoxLayout(page_5);
        verticalLayout_12->setSpacing(0);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        frame_13 = new QFrame(page_5);
        frame_13->setObjectName(QStringLiteral("frame_13"));
        frame_13->setFrameShape(QFrame::StyledPanel);
        frame_13->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(frame_13);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        skyLayerListWidget = new QListWidget(frame_13);
        skyLayerListWidget->setObjectName(QStringLiteral("skyLayerListWidget"));

        verticalLayout_6->addWidget(skyLayerListWidget);


        horizontalLayout_4->addLayout(verticalLayout_6);

        frame_14 = new QFrame(frame_13);
        frame_14->setObjectName(QStringLiteral("frame_14"));
        frame_14->setFrameShape(QFrame::StyledPanel);
        frame_14->setFrameShadow(QFrame::Raised);
        verticalLayout_7 = new QVBoxLayout(frame_14);
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        skyLayerTextBrowser = new QTextBrowser(frame_14);
        skyLayerTextBrowser->setObjectName(QStringLiteral("skyLayerTextBrowser"));
        skyLayerTextBrowser->setOpenExternalLinks(true);
        skyLayerTextBrowser->setOpenLinks(true);

        verticalLayout_7->addWidget(skyLayerTextBrowser);

        groupBox = new QGroupBox(frame_14);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_5 = new QGridLayout(groupBox);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        skyLayerEnableCheckBox = new QCheckBox(groupBox);
        skyLayerEnableCheckBox->setObjectName(QStringLiteral("skyLayerEnableCheckBox"));

        gridLayout_5->addWidget(skyLayerEnableCheckBox, 0, 0, 1, 1);


        verticalLayout_7->addWidget(groupBox);


        horizontalLayout_4->addWidget(frame_14);


        verticalLayout_12->addWidget(frame_13);

        stackedWidget->addWidget(page_5);

        gridLayout_8->addWidget(stackedWidget, 1, 0, 1, 1);

        stackListWidget = new QListWidget(viewContent);
        QIcon icon;
        icon.addFile(QStringLiteral(":/graphicGui/tabicon-sky.png"), QSize(), QIcon::Normal, QIcon::On);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(stackListWidget);
        __qlistwidgetitem->setIcon(icon);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/graphicGui/tabicon-deep-sky.png"), QSize(), QIcon::Normal, QIcon::On);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(stackListWidget);
        __qlistwidgetitem1->setIcon(icon1);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/graphicGui/tabicon-markings.png"), QSize(), QIcon::Normal, QIcon::On);
        QListWidgetItem *__qlistwidgetitem2 = new QListWidgetItem(stackListWidget);
        __qlistwidgetitem2->setIcon(icon2);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/graphicGui/tabicon-landscape.png"), QSize(), QIcon::Normal, QIcon::On);
        QListWidgetItem *__qlistwidgetitem3 = new QListWidgetItem(stackListWidget);
        __qlistwidgetitem3->setIcon(icon3);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/graphicGui/tabicon-starlore.png"), QSize(), QIcon::Normal, QIcon::On);
        QListWidgetItem *__qlistwidgetitem4 = new QListWidgetItem(stackListWidget);
        __qlistwidgetitem4->setIcon(icon4);
        stackListWidget->setObjectName(QStringLiteral("stackListWidget"));
        stackListWidget->setMinimumSize(QSize(0, 74));
        stackListWidget->setMaximumSize(QSize(16777215, 74));
        stackListWidget->setFocusPolicy(Qt::NoFocus);
        stackListWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        stackListWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        stackListWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        stackListWidget->setIconSize(QSize(50, 50));
        stackListWidget->setMovement(QListView::Static);
        stackListWidget->setFlow(QListView::LeftToRight);
        stackListWidget->setProperty("isWrapping", QVariant(false));
        stackListWidget->setResizeMode(QListView::Adjust);
        stackListWidget->setLayoutMode(QListView::SinglePass);
        stackListWidget->setSpacing(0);
        stackListWidget->setViewMode(QListView::IconMode);
        stackListWidget->setUniformItemSizes(false);
        stackListWidget->setWordWrap(false);
        stackListWidget->setSelectionRectVisible(false);

        gridLayout_8->addWidget(stackListWidget, 0, 0, 1, 1);


        vboxLayout->addWidget(viewContent);

        QWidget::setTabOrder(planetMarkerCheckBox, planetLightSpeedCheckBox);
        QWidget::setTabOrder(planetLightSpeedCheckBox, useLocationDataCheckBox);
        QWidget::setTabOrder(useLocationDataCheckBox, lightPollutionSpinBox);
        QWidget::setTabOrder(lightPollutionSpinBox, showEquatorialJ2000GridCheckBox);
        QWidget::setTabOrder(showEquatorialJ2000GridCheckBox, showEquatorialGridCheckBox);
        QWidget::setTabOrder(showEquatorialGridCheckBox, showEclipticGridJ2000CheckBox);
        QWidget::setTabOrder(showEclipticGridJ2000CheckBox, showAzimuthalGridCheckBox);
        QWidget::setTabOrder(showAzimuthalGridCheckBox, showGalacticGridCheckBox);
        QWidget::setTabOrder(showGalacticGridCheckBox, showEquatorLineCheckBox);
        QWidget::setTabOrder(showEquatorLineCheckBox, showEclipticLineOfDateCheckBox);
        QWidget::setTabOrder(showEclipticLineOfDateCheckBox, showHorizonLineCheckBox);
        QWidget::setTabOrder(showHorizonLineCheckBox, showGalacticEquatorLineCheckBox);
        QWidget::setTabOrder(showGalacticEquatorLineCheckBox, showConstellationLinesCheckBox);
        QWidget::setTabOrder(showConstellationLinesCheckBox, showConstellationLabelsCheckBox);
        QWidget::setTabOrder(showConstellationLabelsCheckBox, landscapeTextBrowser);
        QWidget::setTabOrder(landscapeTextBrowser, showGroundCheckBox);
        QWidget::setTabOrder(showGroundCheckBox, showFogCheckBox);
        QWidget::setTabOrder(showFogCheckBox, landscapePositionCheckBox);
        QWidget::setTabOrder(landscapePositionCheckBox, useAsDefaultLandscapeCheckBox);
        QWidget::setTabOrder(useAsDefaultLandscapeCheckBox, pushButtonAddRemoveLandscapes);
        QWidget::setTabOrder(pushButtonAddRemoveLandscapes, skyCultureTextBrowser);
        QWidget::setTabOrder(skyCultureTextBrowser, useAsDefaultSkyCultureCheckBox);
        QWidget::setTabOrder(useAsDefaultSkyCultureCheckBox, skyLayerListWidget);
        QWidget::setTabOrder(skyLayerListWidget, skyLayerTextBrowser);
        QWidget::setTabOrder(skyLayerTextBrowser, skyLayerEnableCheckBox);

        retranslateUi(viewDialogForm);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(viewDialogForm);
    } // setupUi

    void retranslateUi(QWidget *viewDialogForm)
    {
        stelWindowTitle->setText(QApplication::translate("viewDialogForm", "View", 0));
        closeStelWindow->setText(QString());
        starGroupBox->setTitle(QApplication::translate("viewDialogForm", "Stars", 0));
        label_5->setText(QApplication::translate("viewDialogForm", "Absolute scale:", 0));
        label_7->setText(QApplication::translate("viewDialogForm", "Relative scale:", 0));
        starTwinkleCheckBox->setText(QApplication::translate("viewDialogForm", "Twinkle:", 0));
#ifndef QT_NO_TOOLTIP
        starLimitMagnitudeCheckBox->setToolTip(QApplication::translate("viewDialogForm", "Limit the magnitude of stars", 0));
#endif // QT_NO_TOOLTIP
        starLimitMagnitudeCheckBox->setText(QApplication::translate("viewDialogForm", "Limit magnitude:", 0));
        starLabelCheckBox->setText(QApplication::translate("viewDialogForm", "Labels and Markers", 0));
#ifndef QT_NO_TOOLTIP
        atmosphereGroupBox->setToolTip(QApplication::translate("viewDialogForm", "Show atmosphere", 0));
#endif // QT_NO_TOOLTIP
        atmosphereGroupBox->setTitle(QApplication::translate("viewDialogForm", "Atmosphere", 0));
#ifndef QT_NO_TOOLTIP
        useLocationDataCheckBox->setToolTip(QApplication::translate("viewDialogForm", "Use light pollution data from locations database and ignore settings for light pollution below", 0));
#endif // QT_NO_TOOLTIP
        useLocationDataCheckBox->setText(QApplication::translate("viewDialogForm", "Light pollution data from locations database", 0));
        label_4->setText(QApplication::translate("viewDialogForm", "Light pollution:", 0));
#ifndef QT_NO_TOOLTIP
        pushButtonAtmosphereDetails->setToolTip(QApplication::translate("viewDialogForm", "pressure, temperature, extinction coefficient", 0));
#endif // QT_NO_TOOLTIP
        pushButtonAtmosphereDetails->setText(QApplication::translate("viewDialogForm", "Refraction/Extinction settings...", 0));
#ifndef QT_NO_TOOLTIP
        shootingStarsGroupBox->setToolTip(QApplication::translate("viewDialogForm", "Settings for sporadic meteors", 0));
#endif // QT_NO_TOOLTIP
        shootingStarsGroupBox->setTitle(QApplication::translate("viewDialogForm", "Shooting Stars", 0));
        zhrLabel->setText(QString());
#ifndef QT_NO_TOOLTIP
        label_14->setToolTip(QApplication::translate("viewDialogForm", "Hourly zenith rate", 0));
#endif // QT_NO_TOOLTIP
        label_14->setText(QApplication::translate("viewDialogForm", "ZHR:", "Zenithal Hourly Rate"));
        planetsGroupBox->setTitle(QApplication::translate("viewDialogForm", "Solar System objects", 0));
        planetMarkerCheckBox->setText(QApplication::translate("viewDialogForm", "Show planet markers", 0));
        planetOrbitCheckBox->setText(QApplication::translate("viewDialogForm", "Show planet orbits", 0));
#ifndef QT_NO_TOOLTIP
        pushButtonOrbitColors->setToolTip(QApplication::translate("viewDialogForm", "Configure colors of orbit lines", 0));
#endif // QT_NO_TOOLTIP
        pushButtonOrbitColors->setText(QApplication::translate("viewDialogForm", "Colors...", 0));
#ifndef QT_NO_TOOLTIP
        planetIsolatedOrbitCheckBox->setToolTip(QApplication::translate("viewDialogForm", "Deactivate this option if you want to see orbit for selected planet and its moons.", 0));
#endif // QT_NO_TOOLTIP
        planetIsolatedOrbitCheckBox->setText(QApplication::translate("viewDialogForm", "Show orbit for selected planet", 0));
#ifndef QT_NO_TOOLTIP
        planetIsolatedTrailsCheckBox->setToolTip(QApplication::translate("viewDialogForm", "Deactivate this option if you want to see the trails for all Solar system bodies.", 0));
#endif // QT_NO_TOOLTIP
        planetIsolatedTrailsCheckBox->setText(QApplication::translate("viewDialogForm", "Show trail only for selected planet", 0));
#ifndef QT_NO_TOOLTIP
        planetLightSpeedCheckBox->setToolTip(QApplication::translate("viewDialogForm", "Activate this option to simulate the effect of real speed of light (recommended).", 0));
#endif // QT_NO_TOOLTIP
        planetLightSpeedCheckBox->setText(QApplication::translate("viewDialogForm", "Simulate light speed", 0));
        customGrsSettingsCheckBox->setText(QApplication::translate("viewDialogForm", "Use custom settings of GRS:", 0));
        pushButtonGrsDetails->setText(QApplication::translate("viewDialogForm", "GRS details...", 0));
#ifndef QT_NO_TOOLTIP
        planetLimitMagnitudeCheckBox->setToolTip(QApplication::translate("viewDialogForm", "Limit the magnitude of solar system objects", 0));
#endif // QT_NO_TOOLTIP
        planetLimitMagnitudeCheckBox->setText(QApplication::translate("viewDialogForm", "Limit magnitude:", 0));
        planetScaleMoonCheckBox->setText(QApplication::translate("viewDialogForm", "Scale Moon:", 0));
#ifndef QT_NO_TOOLTIP
        moonScaleFactor->setToolTip(QApplication::translate("viewDialogForm", "Scale factor", 0));
#endif // QT_NO_TOOLTIP
        planetLabelCheckBox->setText(QApplication::translate("viewDialogForm", "Labels and Markers", 0));
        largeObjectsGroupbox->setTitle(QApplication::translate("viewDialogForm", "Sky", 0));
        milkyWayCheckBox->setText(QApplication::translate("viewDialogForm", "Milky Way brightness:", 0));
        zodiacalLightCheckBox->setText(QApplication::translate("viewDialogForm", "Zodiacal Light brightness:", 0));
#ifndef QT_NO_TOOLTIP
        adaptationCheckbox->setToolTip(QApplication::translate("viewDialogForm", "Dim faint stars when a very bright object is visible", 0));
#endif // QT_NO_TOOLTIP
        adaptationCheckbox->setText(QApplication::translate("viewDialogForm", "Dynamic eye adaptation", 0));
        groupDSOCatalogs->setTitle(QApplication::translate("viewDialogForm", "Display objects from catalogs", 0));
#ifndef QT_NO_TOOLTIP
        checkBoxIC->setToolTip(QApplication::translate("viewDialogForm", "Index Catalogue of Nebulae and Clusters of Stars", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        checkBoxNGC->setToolTip(QApplication::translate("viewDialogForm", "New General Catalogue of Nebulae and Clusters of Stars", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        checkBoxLBN->setToolTip(QApplication::translate("viewDialogForm", "Lynds' Catalogue of Bright Nebulae (Lynds, 1965)", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        checkBoxM->setToolTip(QApplication::translate("viewDialogForm", "Messier Catalogue", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        checkBoxC->setToolTip(QApplication::translate("viewDialogForm", "Caldwell Catalogue", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        checkBoxB->setToolTip(QApplication::translate("viewDialogForm", "Barnard's Catalogue of 349 Dark Objects in the Sky (Barnard, 1927)", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        checkBoxSh2->setToolTip(QApplication::translate("viewDialogForm", "Catalogue of HII Regions (Sharpless, 1959)", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        checkBoxVdB->setToolTip(QApplication::translate("viewDialogForm", "Catalogue of Reflection Nebulae (Van den Bergh, 1966)", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        checkBoxRCW->setToolTip(QApplication::translate("viewDialogForm", "A catalogue of H\316\261-emission regions in the southern Milky Way (Rodgers+, 1960)", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        checkBoxLDN->setToolTip(QApplication::translate("viewDialogForm", "Lynds' Catalogue of Dark Nebulae (Lynds, 1962)", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        checkBoxCr->setToolTip(QApplication::translate("viewDialogForm", "Catalog of Open Galactic Clusters (Collinder, 1931)", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        checkBoxMel->setToolTip(QApplication::translate("viewDialogForm", "A Catalogue of Star Clusters shown on Franklin-Adams Chart Plates (Melotte, 1915)", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        checkBoxPGC->setToolTip(QApplication::translate("viewDialogForm", "Catalog of galaxies", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        checkBoxUGC->setToolTip(QApplication::translate("viewDialogForm", "The Uppsala General Catalogue of Galaxies", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        checkBoxCed->setToolTip(QApplication::translate("viewDialogForm", "Catalog of bright diffuse Galactic nebulae (Cederblad, 1946)", 0));
#endif // QT_NO_TOOLTIP
        groupBoxDSOTypeFilters->setTitle(QApplication::translate("viewDialogForm", "Filter by type", 0));
        checkBoxSupernovaRemnantsType->setText(QApplication::translate("viewDialogForm", "Supernova remnants", 0));
        checkBoxInteractingGalaxiesType->setText(QApplication::translate("viewDialogForm", "Interacting galaxies", 0));
        checkBoxHydrogenRegionsType->setText(QApplication::translate("viewDialogForm", "Hydrogen regions", 0));
        checkBoxOtherType->setText(QApplication::translate("viewDialogForm", "Other", 0));
        checkBoxStarClustersType->setText(QApplication::translate("viewDialogForm", "Star clusters", 0));
        checkBoxPlanetaryNebulaeType->setText(QApplication::translate("viewDialogForm", "Planetary nebulae", 0));
        checkBoxGalaxiesType->setText(QApplication::translate("viewDialogForm", "Galaxies", 0));
        checkBoxActiveGalaxiesType->setText(QApplication::translate("viewDialogForm", "Active galaxies", 0));
        checkBoxDarkNebulaeType->setText(QApplication::translate("viewDialogForm", "Dark nebulae", 0));
        checkBoxBrightNebulaeType->setText(QApplication::translate("viewDialogForm", "Bright nebulae", 0));
        groupBoxLabelsAndMarkers->setTitle(QApplication::translate("viewDialogForm", "Labels and Markers", 0));
#ifndef QT_NO_TOOLTIP
        checkBoxProportionalHints->setToolTip(QApplication::translate("viewDialogForm", "Use hints proportional to angular size of deep-sky objects", 0));
#endif // QT_NO_TOOLTIP
        checkBoxProportionalHints->setText(QApplication::translate("viewDialogForm", "Use proportional hints", 0));
#ifndef QT_NO_TOOLTIP
        checkBoxSurfaceBrightnessUsage->setToolTip(QApplication::translate("viewDialogForm", "Use surface brightness of deep-sky objects for scale of the visibility of their markers and labels.", 0));
#endif // QT_NO_TOOLTIP
        checkBoxSurfaceBrightnessUsage->setText(QApplication::translate("viewDialogForm", "Use surface brightness", 0));
#ifndef QT_NO_TOOLTIP
        nebulaLimitMagnitudeCheckBox->setToolTip(QApplication::translate("viewDialogForm", "Limit magnitude (for unaided/binocular observers) of deep-sky objects.", 0));
#endif // QT_NO_TOOLTIP
        nebulaLimitMagnitudeCheckBox->setText(QApplication::translate("viewDialogForm", "Limit magnitude:", 0));
#ifndef QT_NO_TOOLTIP
        checkBoxDesignationsOnlyUsage->setToolTip(QApplication::translate("viewDialogForm", "Use designations of deep-sky objects instead of their common names for screen labels", 0));
#endif // QT_NO_TOOLTIP
        checkBoxDesignationsOnlyUsage->setText(QApplication::translate("viewDialogForm", "Use designations for screen labels", 0));
        labelLabels->setText(QApplication::translate("viewDialogForm", "Labels", 0));
        labelHints->setText(QApplication::translate("viewDialogForm", "Hints", 0));
        pushButtonConfigureDSOColors->setText(QApplication::translate("viewDialogForm", "Configure colors of markers", 0));
        celestialSphereGroupBox->setTitle(QApplication::translate("viewDialogForm", "Celestial Sphere", 0));
#ifndef QT_NO_TOOLTIP
        showEclipticLineJ2000CheckBox->setToolTip(QApplication::translate("viewDialogForm", "Show ecliptic line of J2000.0 (VSOP87A fundamental plane).", 0));
#endif // QT_NO_TOOLTIP
        showEclipticLineJ2000CheckBox->setText(QApplication::translate("viewDialogForm", "Ecliptic (J2000)", 0));
#ifndef QT_NO_TOOLTIP
        showEquatorLineCheckBox->setToolTip(QApplication::translate("viewDialogForm", "Show celestial equator of current planet and date.", 0));
#endif // QT_NO_TOOLTIP
        showEquatorLineCheckBox->setText(QApplication::translate("viewDialogForm", "Equator (of date)", 0));
#ifndef QT_NO_TOOLTIP
        showEquatorJ2000LineCheckBox->setToolTip(QApplication::translate("viewDialogForm", "Show celestial equator of J2000.0.", 0));
#endif // QT_NO_TOOLTIP
        showEquatorJ2000LineCheckBox->setText(QApplication::translate("viewDialogForm", "Equator (J2000)", 0));
#ifndef QT_NO_TOOLTIP
        colorEquatorJ2000Line->setToolTip(QApplication::translate("viewDialogForm", "Color of equator (J2000.0)", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        showEclipticLineOfDateCheckBox->setToolTip(QApplication::translate("viewDialogForm", "Show ecliptic line of current date.", 0));
#endif // QT_NO_TOOLTIP
        showEclipticLineOfDateCheckBox->setText(QApplication::translate("viewDialogForm", "Ecliptic (of date)", 0));
#ifndef QT_NO_TOOLTIP
        colorEquatorLine->setToolTip(QApplication::translate("viewDialogForm", "Color of equator (of date)", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        showGalacticEquatorLineCheckBox->setToolTip(QApplication::translate("viewDialogForm", "Show Galactic equator line.", 0));
#endif // QT_NO_TOOLTIP
        showGalacticEquatorLineCheckBox->setText(QApplication::translate("viewDialogForm", "Galactic equator", 0));
#ifndef QT_NO_TOOLTIP
        colorSupergalacticEquatorLine->setToolTip(QApplication::translate("viewDialogForm", "Color of supergalactic equator", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        colorEclipticLineOfDate->setToolTip(QApplication::translate("viewDialogForm", "Color of ecliptic (of date)", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        colorEclipticLineJ2000->setToolTip(QApplication::translate("viewDialogForm", "Color of ecliptic (J2000.0)", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        colorGalacticEquatorLine->setToolTip(QApplication::translate("viewDialogForm", "Color of galactic equator", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        showHorizonLineCheckBox->setToolTip(QApplication::translate("viewDialogForm", "Show horizon line.", 0));
#endif // QT_NO_TOOLTIP
        showHorizonLineCheckBox->setText(QApplication::translate("viewDialogForm", "Horizon", 0));
#ifndef QT_NO_TOOLTIP
        colorHorizonLine->setToolTip(QApplication::translate("viewDialogForm", "Color of horizon", 0));
#endif // QT_NO_TOOLTIP
        showSupergalacticEquatorLineCheckBox->setText(QApplication::translate("viewDialogForm", "Supergalactic equator", 0));
#ifndef QT_NO_TOOLTIP
        showMeridianLineCheckBox->setToolTip(QApplication::translate("viewDialogForm", "Show meridian line.", 0));
#endif // QT_NO_TOOLTIP
        showMeridianLineCheckBox->setText(QApplication::translate("viewDialogForm", "Meridian", 0));
#ifndef QT_NO_TOOLTIP
        colorMeridianLine->setToolTip(QApplication::translate("viewDialogForm", "Color of meridian", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        showLongitudeLineCheckBox->setToolTip(QApplication::translate("viewDialogForm", "Opposition/conjunction longitude line - the line of ecliptic longitude which passes through both ecliptic poles, the Sun and opposition point.", 0));
#endif // QT_NO_TOOLTIP
        showLongitudeLineCheckBox->setText(QApplication::translate("viewDialogForm", "O./C. longitude", 0));
#ifndef QT_NO_TOOLTIP
        colorLongitudeLine->setToolTip(QApplication::translate("viewDialogForm", "Color of the opposition/conjunction longitude line", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        showColuresLineCheckBox->setToolTip(QApplication::translate("viewDialogForm", "Show colures (great circles through poles and solstices/equinoxes).", 0));
#endif // QT_NO_TOOLTIP
        showColuresLineCheckBox->setText(QApplication::translate("viewDialogForm", "Colures", 0));
#ifndef QT_NO_TOOLTIP
        colorColuresLine->setToolTip(QApplication::translate("viewDialogForm", "Color of colures", 0));
#endif // QT_NO_TOOLTIP
        showSupergalacticPolesCheckBox->setText(QApplication::translate("viewDialogForm", "Supergalactic poles", 0));
#ifndef QT_NO_TOOLTIP
        colorEclipticJ2000Poles->setToolTip(QApplication::translate("viewDialogForm", "Color of the ecliptic poles (J2000.0)", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        colorPrimeVerticalLine->setToolTip(QApplication::translate("viewDialogForm", "Color of Prime Vertical", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        showEclipticJ2000PolesCheckBox->setToolTip(QApplication::translate("viewDialogForm", "Show ecliptic poles of J2000.0", 0));
#endif // QT_NO_TOOLTIP
        showEclipticJ2000PolesCheckBox->setText(QApplication::translate("viewDialogForm", "Ecliptic poles (J2000)", 0));
#ifndef QT_NO_TOOLTIP
        colorCelestialJ2000Poles->setToolTip(QApplication::translate("viewDialogForm", "Color of the celestial poles (J2000.0)", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        showCelestialPolesCheckBox->setToolTip(QApplication::translate("viewDialogForm", "Show celestial poles of current planet and date.", 0));
#endif // QT_NO_TOOLTIP
        showCelestialPolesCheckBox->setText(QApplication::translate("viewDialogForm", "Celestial poles (of date)", 0));
#ifndef QT_NO_TOOLTIP
        colorEclipticPoles->setToolTip(QApplication::translate("viewDialogForm", "Color of ecliptic poles (of date)", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        colorCelestialPoles->setToolTip(QApplication::translate("viewDialogForm", "Color of celestial poles (of date)", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        colorSupergalacticPoles->setToolTip(QApplication::translate("viewDialogForm", "Color of supergalactic poles", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        showEclipticPolesCheckBox->setToolTip(QApplication::translate("viewDialogForm", "Show ecliptic poles of current date.", 0));
#endif // QT_NO_TOOLTIP
        showEclipticPolesCheckBox->setText(QApplication::translate("viewDialogForm", "Ecliptic poles (of date)", 0));
#ifndef QT_NO_TOOLTIP
        showPrimeVerticalLineCheckBox->setToolTip(QApplication::translate("viewDialogForm", "Show Prime (East-West) Vertical.", 0));
#endif // QT_NO_TOOLTIP
        showPrimeVerticalLineCheckBox->setText(QApplication::translate("viewDialogForm", "Prime Vertical", 0));
#ifndef QT_NO_TOOLTIP
        colorGalacticPoles->setToolTip(QApplication::translate("viewDialogForm", "Color of galactic poles", 0));
#endif // QT_NO_TOOLTIP
        showZenithNadirCheckBox->setText(QApplication::translate("viewDialogForm", "Zenith and Nadir", 0));
        showGalacticPolesCheckBox->setText(QApplication::translate("viewDialogForm", "Galactic poles", 0));
#ifndef QT_NO_TOOLTIP
        colorZenithNadir->setToolTip(QApplication::translate("viewDialogForm", "Color of Zenith and Nadir", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        showCelestialJ2000PolesCheckBox->setToolTip(QApplication::translate("viewDialogForm", "Show celestial poles of J2000.0.", 0));
#endif // QT_NO_TOOLTIP
        showCelestialJ2000PolesCheckBox->setText(QApplication::translate("viewDialogForm", "Celestial poles (J2000)", 0));
#ifndef QT_NO_TOOLTIP
        showCircumpolarCirclesCheckBox->setToolTip(QApplication::translate("viewDialogForm", "These circles delimit stars which stay always above (respectively below) the mathematical horizon.", 0));
#endif // QT_NO_TOOLTIP
        showCircumpolarCirclesCheckBox->setText(QApplication::translate("viewDialogForm", "Circumpolar circles", 0));
#ifndef QT_NO_TOOLTIP
        colorCircumpolarCircles->setToolTip(QApplication::translate("viewDialogForm", "Color of circumpolar circles", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        showPrecessionCirclesCheckBox->setToolTip(QApplication::translate("viewDialogForm", "Instantaneous circles of earth's axis on its motion around ecliptical poles. Displayed on Earth only.", 0));
#endif // QT_NO_TOOLTIP
        showPrecessionCirclesCheckBox->setText(QApplication::translate("viewDialogForm", "Precession circles", 0));
#ifndef QT_NO_TOOLTIP
        colorPrecessionCircles->setToolTip(QApplication::translate("viewDialogForm", "Color of precession circles", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        showAzimuthalGridCheckBox->setToolTip(QApplication::translate("viewDialogForm", "Altitudes and azimuth (counted from North towards East).", 0));
#endif // QT_NO_TOOLTIP
        showAzimuthalGridCheckBox->setText(QApplication::translate("viewDialogForm", "Azimuthal grid", 0));
#ifndef QT_NO_TOOLTIP
        showEclipticGridOfDateCheckBox->setToolTip(QApplication::translate("viewDialogForm", "Ecliptical coordinates for current date. Displayed on Earth only.", 0));
#endif // QT_NO_TOOLTIP
        showEclipticGridOfDateCheckBox->setText(QApplication::translate("viewDialogForm", "Ecliptic grid (of date)", 0));
#ifndef QT_NO_TOOLTIP
        colorEquatorialJ2000Grid->setToolTip(QApplication::translate("viewDialogForm", "Color of the equatorial grid (J2000.0)", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        colorEquinoxJ2000Points->setToolTip(QApplication::translate("viewDialogForm", "Color of the equinox points (J2000.0)", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        showEclipticGridJ2000CheckBox->setToolTip(QApplication::translate("viewDialogForm", "Ecliptical coordinates for J2000.0.", 0));
#endif // QT_NO_TOOLTIP
        showEclipticGridJ2000CheckBox->setText(QApplication::translate("viewDialogForm", "Ecliptic grid (J2000)", 0));
#ifndef QT_NO_TOOLTIP
        colorSupergalacticGrid->setToolTip(QApplication::translate("viewDialogForm", "Color of the supergalactic grid", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        colorGalacticGrid->setToolTip(QApplication::translate("viewDialogForm", "Color of the galactic grid", 0));
#endif // QT_NO_TOOLTIP
        showSupergalacticGridCheckBox->setText(QApplication::translate("viewDialogForm", "Supergalactic grid", 0));
#ifndef QT_NO_TOOLTIP
        showEquatorialJ2000GridCheckBox->setToolTip(QApplication::translate("viewDialogForm", "Equatorial coordinates of J2000.0.", 0));
#endif // QT_NO_TOOLTIP
        showEquatorialJ2000GridCheckBox->setText(QApplication::translate("viewDialogForm", "Equatorial grid (J2000)", 0));
#ifndef QT_NO_TOOLTIP
        colorEclipticGridJ2000->setToolTip(QApplication::translate("viewDialogForm", "Color of the ecliptical grid (J2000.0)", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        showGalacticGridCheckBox->setToolTip(QApplication::translate("viewDialogForm", "Galactic Coordinates, System II (IAU 1958).", 0));
#endif // QT_NO_TOOLTIP
        showGalacticGridCheckBox->setText(QApplication::translate("viewDialogForm", "Galactic grid", 0));
        showEquinoxJ2000PointsCheckBox->setText(QApplication::translate("viewDialogForm", "Equinoxes (J2000)", 0));
#ifndef QT_NO_TOOLTIP
        colorEclipticGridOfDate->setToolTip(QApplication::translate("viewDialogForm", "Color of the ecliptical grid (of date)", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        colorEquatorialGrid->setToolTip(QApplication::translate("viewDialogForm", "Color of the equatorial grid (of date)", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        colorAzimuthalGrid->setToolTip(QApplication::translate("viewDialogForm", "Color of the azimuthal grid", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        showEquatorialGridCheckBox->setToolTip(QApplication::translate("viewDialogForm", "Equatorial coordinates of current date and planet.", 0));
#endif // QT_NO_TOOLTIP
        showEquatorialGridCheckBox->setText(QApplication::translate("viewDialogForm", "Equatorial grid (of date)", 0));
        showEquinoxPointsCheckBox->setText(QApplication::translate("viewDialogForm", "Equinoxes (of date)", 0));
#ifndef QT_NO_TOOLTIP
        colorEquinoxPoints->setToolTip(QApplication::translate("viewDialogForm", "Color of the equinox points (of date)", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        showCardinalPointsCheckBox->setToolTip(QApplication::translate("viewDialogForm", "Labels for the Cardinal directions.", 0));
#endif // QT_NO_TOOLTIP
        showCardinalPointsCheckBox->setText(QApplication::translate("viewDialogForm", "Cardinal points", 0));
#ifndef QT_NO_TOOLTIP
        colorCardinalPoints->setToolTip(QApplication::translate("viewDialogForm", "Color of cardinal points", 0));
#endif // QT_NO_TOOLTIP
        setProjectionGroupBox->setTitle(QApplication::translate("viewDialogForm", "Projection", 0));
        viewportOffsetLabel->setText(QApplication::translate("viewDialogForm", "Vertical viewport offset", 0));
        landscapeOptionsGroupBox->setTitle(QApplication::translate("viewDialogForm", "Options", 0));
        showFogCheckBox->setText(QApplication::translate("viewDialogForm", "Show fog", 0));
        landscapePositionCheckBox->setText(QApplication::translate("viewDialogForm", "Use associated planet and position", 0));
        useAsDefaultLandscapeCheckBox->setText(QApplication::translate("viewDialogForm", "Use this landscape as default", 0));
        showGroundCheckBox->setText(QApplication::translate("viewDialogForm", "Show ground", 0));
#ifndef QT_NO_TOOLTIP
        landscapeBrightnessCheckBox->setToolTip(QApplication::translate("viewDialogForm", "Use minimal brightness to leave landscape visible also in darkness", 0));
#endif // QT_NO_TOOLTIP
        landscapeBrightnessCheckBox->setText(QApplication::translate("viewDialogForm", "Minimal brightness:", 0));
#ifndef QT_NO_TOOLTIP
        landscapeBrightnessSpinBox->setToolTip(QApplication::translate("viewDialogForm", "Value range 0..1 (landscape is black at night - landscape is fully bright)", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        localLandscapeBrightnessCheckBox->setToolTip(QApplication::translate("viewDialogForm", "Use minimal brightness as may be specified in landscape.ini", 0));
#endif // QT_NO_TOOLTIP
        localLandscapeBrightnessCheckBox->setText(QApplication::translate("viewDialogForm", "from landscape, if given", 0));
#ifndef QT_NO_TOOLTIP
        landscapeIlluminationCheckBox->setToolTip(QApplication::translate("viewDialogForm", "Show illumination layer (bright windows, light pollution, etc.)", 0));
#endif // QT_NO_TOOLTIP
        landscapeIlluminationCheckBox->setText(QApplication::translate("viewDialogForm", "Show illumination ", 0));
        landscapeLabelsCheckBox->setText(QApplication::translate("viewDialogForm", "Show landscape labels", 0));
        pushButtonAddRemoveLandscapes->setText(QApplication::translate("viewDialogForm", "Add/remove landscapes...", 0));
        starloreOptionsgroupBox->setTitle(QApplication::translate("viewDialogForm", "Options", 0));
        showConstellationArtCheckBox->setText(QApplication::translate("viewDialogForm", "Show art in brightness", 0));
        showConstellationLinesCheckBox->setText(QApplication::translate("viewDialogForm", "Show lines with thickness", 0));
#ifndef QT_NO_TOOLTIP
        constellationLineThicknessSpinBox->setToolTip(QApplication::translate("viewDialogForm", "Value in pixels", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        colorConstellationLines->setToolTip(QApplication::translate("viewDialogForm", "Color of lines of constellations", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        nativeNameCheckBox->setToolTip(QApplication::translate("viewDialogForm", "Use native names for planets from current culture", 0));
#endif // QT_NO_TOOLTIP
        nativeNameCheckBox->setText(QApplication::translate("viewDialogForm", "Use native names for planets", 0));
        useAsDefaultSkyCultureCheckBox->setText(QApplication::translate("viewDialogForm", "Use this sky culture as default", 0));
        showConstellationLabelsCheckBox->setText(QApplication::translate("viewDialogForm", "Show labels", 0));
#ifndef QT_NO_TOOLTIP
        skyCultureNamesStyleComboBox->setToolTip(QApplication::translate("viewDialogForm", "Select if you want names abbreviated, original or translated", 0));
#endif // QT_NO_TOOLTIP
        skyCultureNamesStyleComboBox->setCurrentText(QString());
#ifndef QT_NO_TOOLTIP
        colorConstellationLabels->setToolTip(QApplication::translate("viewDialogForm", "Color of names of constellations", 0));
#endif // QT_NO_TOOLTIP
        showConstellationBoundariesCheckBox->setText(QApplication::translate("viewDialogForm", "Show boundaries", 0));
#ifndef QT_NO_TOOLTIP
        colorConstellationBoundaries->setToolTip(QApplication::translate("viewDialogForm", "Color of boundaries of constellations", 0));
#endif // QT_NO_TOOLTIP
        groupBox->setTitle(QApplication::translate("viewDialogForm", "Options", 0));
        skyLayerEnableCheckBox->setText(QApplication::translate("viewDialogForm", "Visible", 0));

        const bool __sortingEnabled = stackListWidget->isSortingEnabled();
        stackListWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = stackListWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("viewDialogForm", "Sky", 0));
        QListWidgetItem *___qlistwidgetitem1 = stackListWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("viewDialogForm", "DSO", "Deep-Sky Objects"));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem1->setToolTip(QApplication::translate("viewDialogForm", "Deep-Sky Objects", 0));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem2 = stackListWidget->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("viewDialogForm", "Markings", 0));
        QListWidgetItem *___qlistwidgetitem3 = stackListWidget->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("viewDialogForm", "Landscape", 0));
        QListWidgetItem *___qlistwidgetitem4 = stackListWidget->item(4);
        ___qlistwidgetitem4->setText(QApplication::translate("viewDialogForm", "Starlore", 0));
        stackListWidget->setSortingEnabled(__sortingEnabled);

        Q_UNUSED(viewDialogForm);
    } // retranslateUi

};

namespace Ui {
    class viewDialogForm: public Ui_viewDialogForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWDIALOG_H
