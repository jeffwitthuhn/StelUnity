/********************************************************************************
** Form generated from reading UI file 'dsoColorsDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DSOCOLORSDIALOG_H
#define UI_DSOCOLORSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Dialog.hpp"

QT_BEGIN_NAMESPACE

class Ui_ConfigureDSOColorsDialogForm
{
public:
    QVBoxLayout *verticalLayout;
    BarFrame *TitleBar;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QLabel *stelWindowTitle;
    QSpacerItem *spacerItem1;
    QPushButton *closeStelWindow;
    QGroupBox *colorsGroupBox;
    QGridLayout *gridLayout_18;
    QToolButton *colorDSOOpenStarClusters;
    QToolButton *colorDSOBLLacObjects;
    QLabel *labelDSOColorStellarAssociations;
    QToolButton *colorDSODarkNebulae;
    QLabel *labelDSOColorEmissionObjects;
    QToolButton *colorDSOStarClouds;
    QToolButton *colorDSOReflectionNebulae;
    QLabel *labelDSOColorNebulosityClusters;
    QLabel *labelDSOColorOpenStarClusters;
    QToolButton *colorDSOStars;
    QToolButton *colorDSONebulae;
    QLabel *labelDSOColorActiveGalaxies;
    QToolButton *colorDSOQuasars;
    QToolButton *colorDSOBlazars;
    QLabel *labelDSOColorInteractingGalaxies;
    QLabel *labelDSOColorPossibleQuasars;
    QToolButton *colorDSONebulosityClusters;
    QLabel *labelDSOColorStarClouds;
    QToolButton *colorDSOInteractingGalaxies;
    QLabel *labelDSOColorMarkers;
    QToolButton *colorDSOPossibleQuasars;
    QToolButton *colorDSOActiveGalaxies;
    QLabel *labelDSOColorRadioGalaxies;
    QLabel *labelDSOColorStarClusters;
    QLabel *labelDSOColorBlazars;
    QLabel *labelDSOColorGlobularStarClusters;
    QToolButton *colorDSOGlobularStarClusters;
    QLabel *labelDSOColorDarkNebulae;
    QLabel *labelDSOColorStars;
    QLabel *labelDSOColorGalaxies;
    QLabel *labelDSOColorQuasars;
    QToolButton *colorDSOGalaxies;
    QToolButton *colorDSOBipolarNebulae;
    QLabel *labelDSOColorNebulae;
    QToolButton *colorDSOEmissionObjects;
    QToolButton *colorDSOMarkers;
    QLabel *labelDSOColorLabels;
    QToolButton *colorDSOLabels;
    QLabel *labelDSOColorInterstellarMatter;
    QToolButton *colorDSOInterstellarMatter;
    QToolButton *colorDSOStellarAssociations;
    QLabel *labelDSOColorBipolarNebulae;
    QLabel *labelDSOColorReflectionNebulae;
    QToolButton *colorDSORadioGalaxies;
    QLabel *labelDSOColorBLLacObjects;
    QToolButton *colorDSOStarClusters;
    QLabel *labelDSOColorPlanetaryNebulae;
    QToolButton *colorDSOPlanetaryNebulae;
    QLabel *labelDSOColorPossiblePlanetaryNebulae;
    QToolButton *colorDSOPossiblePlanetaryNebulae;
    QLabel *labelDSOColorProtoplanetaryNebulae;
    QToolButton *colorDSOProtoplanetaryNebulae;
    QLabel *labelDSOColorEmissionNebulae;
    QToolButton *colorDSOEmissionNebulae;
    QLabel *labelDSOColorHydrogenRegions;
    QToolButton *colorDSOHydrogenRegions;
    QLabel *labelDSOColorMolecularClouds;
    QToolButton *colorDSOMolecularClouds;
    QLabel *labelDSOColorYSOs;
    QToolButton *colorDSOYoungStellarObjects;
    QLabel *labelDSOColorSupernovaRemnants;
    QToolButton *colorDSOSupernovaRemnants;

    void setupUi(QWidget *ConfigureDSOColorsDialogForm)
    {
        if (ConfigureDSOColorsDialogForm->objectName().isEmpty())
            ConfigureDSOColorsDialogForm->setObjectName(QStringLiteral("ConfigureDSOColorsDialogForm"));
        ConfigureDSOColorsDialogForm->resize(546, 366);
        verticalLayout = new QVBoxLayout(ConfigureDSOColorsDialogForm);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        TitleBar = new BarFrame(ConfigureDSOColorsDialogForm);
        TitleBar->setObjectName(QStringLiteral("TitleBar"));
        TitleBar->setMinimumSize(QSize(16, 25));
        TitleBar->setMaximumSize(QSize(16777215, 25));
        TitleBar->setFrameShape(QFrame::StyledPanel);
        hboxLayout = new QHBoxLayout(TitleBar);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 4, 0);
        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        stelWindowTitle = new QLabel(TitleBar);
        stelWindowTitle->setObjectName(QStringLiteral("stelWindowTitle"));
        QPalette palette;
        stelWindowTitle->setPalette(palette);
        QFont font;
        stelWindowTitle->setFont(font);

        hboxLayout->addWidget(stelWindowTitle);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem1);

        closeStelWindow = new QPushButton(TitleBar);
        closeStelWindow->setObjectName(QStringLiteral("closeStelWindow"));
        closeStelWindow->setMinimumSize(QSize(16, 16));
        closeStelWindow->setMaximumSize(QSize(16, 16));
        closeStelWindow->setFocusPolicy(Qt::NoFocus);

        hboxLayout->addWidget(closeStelWindow);


        verticalLayout->addWidget(TitleBar);

        colorsGroupBox = new QGroupBox(ConfigureDSOColorsDialogForm);
        colorsGroupBox->setObjectName(QStringLiteral("colorsGroupBox"));
        gridLayout_18 = new QGridLayout(colorsGroupBox);
        gridLayout_18->setObjectName(QStringLiteral("gridLayout_18"));
        gridLayout_18->setContentsMargins(0, 0, 0, 0);
        colorDSOOpenStarClusters = new QToolButton(colorsGroupBox);
        colorDSOOpenStarClusters->setObjectName(QStringLiteral("colorDSOOpenStarClusters"));

        gridLayout_18->addWidget(colorDSOOpenStarClusters, 3, 5, 1, 1);

        colorDSOBLLacObjects = new QToolButton(colorsGroupBox);
        colorDSOBLLacObjects->setObjectName(QStringLiteral("colorDSOBLLacObjects"));

        gridLayout_18->addWidget(colorDSOBLLacObjects, 2, 5, 1, 1);

        labelDSOColorStellarAssociations = new QLabel(colorsGroupBox);
        labelDSOColorStellarAssociations->setObjectName(QStringLiteral("labelDSOColorStellarAssociations"));

        gridLayout_18->addWidget(labelDSOColorStellarAssociations, 4, 2, 1, 1);

        colorDSODarkNebulae = new QToolButton(colorsGroupBox);
        colorDSODarkNebulae->setObjectName(QStringLiteral("colorDSODarkNebulae"));

        gridLayout_18->addWidget(colorDSODarkNebulae, 7, 1, 1, 1);

        labelDSOColorEmissionObjects = new QLabel(colorsGroupBox);
        labelDSOColorEmissionObjects->setObjectName(QStringLiteral("labelDSOColorEmissionObjects"));

        gridLayout_18->addWidget(labelDSOColorEmissionObjects, 9, 2, 1, 1);

        colorDSOStarClouds = new QToolButton(colorsGroupBox);
        colorDSOStarClouds->setObjectName(QStringLiteral("colorDSOStarClouds"));

        gridLayout_18->addWidget(colorDSOStarClouds, 4, 5, 1, 1);

        colorDSOReflectionNebulae = new QToolButton(colorsGroupBox);
        colorDSOReflectionNebulae->setObjectName(QStringLiteral("colorDSOReflectionNebulae"));

        gridLayout_18->addWidget(colorDSOReflectionNebulae, 7, 3, 1, 1);

        labelDSOColorNebulosityClusters = new QLabel(colorsGroupBox);
        labelDSOColorNebulosityClusters->setObjectName(QStringLiteral("labelDSOColorNebulosityClusters"));

        gridLayout_18->addWidget(labelDSOColorNebulosityClusters, 5, 2, 1, 1);

        labelDSOColorOpenStarClusters = new QLabel(colorsGroupBox);
        labelDSOColorOpenStarClusters->setObjectName(QStringLiteral("labelDSOColorOpenStarClusters"));

        gridLayout_18->addWidget(labelDSOColorOpenStarClusters, 3, 4, 1, 1);

        colorDSOStars = new QToolButton(colorsGroupBox);
        colorDSOStars->setObjectName(QStringLiteral("colorDSOStars"));

        gridLayout_18->addWidget(colorDSOStars, 5, 1, 1, 1);

        colorDSONebulae = new QToolButton(colorsGroupBox);
        colorDSONebulae->setObjectName(QStringLiteral("colorDSONebulae"));

        gridLayout_18->addWidget(colorDSONebulae, 5, 5, 1, 1);

        labelDSOColorActiveGalaxies = new QLabel(colorsGroupBox);
        labelDSOColorActiveGalaxies->setObjectName(QStringLiteral("labelDSOColorActiveGalaxies"));

        gridLayout_18->addWidget(labelDSOColorActiveGalaxies, 1, 0, 1, 1);

        colorDSOQuasars = new QToolButton(colorsGroupBox);
        colorDSOQuasars->setObjectName(QStringLiteral("colorDSOQuasars"));

        gridLayout_18->addWidget(colorDSOQuasars, 2, 1, 1, 1);

        colorDSOBlazars = new QToolButton(colorsGroupBox);
        colorDSOBlazars->setObjectName(QStringLiteral("colorDSOBlazars"));

        gridLayout_18->addWidget(colorDSOBlazars, 3, 1, 1, 1);

        labelDSOColorInteractingGalaxies = new QLabel(colorsGroupBox);
        labelDSOColorInteractingGalaxies->setObjectName(QStringLiteral("labelDSOColorInteractingGalaxies"));

        gridLayout_18->addWidget(labelDSOColorInteractingGalaxies, 1, 4, 1, 1);

        labelDSOColorPossibleQuasars = new QLabel(colorsGroupBox);
        labelDSOColorPossibleQuasars->setObjectName(QStringLiteral("labelDSOColorPossibleQuasars"));

        gridLayout_18->addWidget(labelDSOColorPossibleQuasars, 2, 2, 1, 1);

        colorDSONebulosityClusters = new QToolButton(colorsGroupBox);
        colorDSONebulosityClusters->setObjectName(QStringLiteral("colorDSONebulosityClusters"));

        gridLayout_18->addWidget(colorDSONebulosityClusters, 5, 3, 1, 1);

        labelDSOColorStarClouds = new QLabel(colorsGroupBox);
        labelDSOColorStarClouds->setObjectName(QStringLiteral("labelDSOColorStarClouds"));

        gridLayout_18->addWidget(labelDSOColorStarClouds, 4, 4, 1, 1);

        colorDSOInteractingGalaxies = new QToolButton(colorsGroupBox);
        colorDSOInteractingGalaxies->setObjectName(QStringLiteral("colorDSOInteractingGalaxies"));

        gridLayout_18->addWidget(colorDSOInteractingGalaxies, 1, 5, 1, 1);

        labelDSOColorMarkers = new QLabel(colorsGroupBox);
        labelDSOColorMarkers->setObjectName(QStringLiteral("labelDSOColorMarkers"));

        gridLayout_18->addWidget(labelDSOColorMarkers, 0, 2, 1, 1);

        colorDSOPossibleQuasars = new QToolButton(colorsGroupBox);
        colorDSOPossibleQuasars->setObjectName(QStringLiteral("colorDSOPossibleQuasars"));

        gridLayout_18->addWidget(colorDSOPossibleQuasars, 2, 3, 1, 1);

        colorDSOActiveGalaxies = new QToolButton(colorsGroupBox);
        colorDSOActiveGalaxies->setObjectName(QStringLiteral("colorDSOActiveGalaxies"));

        gridLayout_18->addWidget(colorDSOActiveGalaxies, 1, 1, 1, 1);

        labelDSOColorRadioGalaxies = new QLabel(colorsGroupBox);
        labelDSOColorRadioGalaxies->setObjectName(QStringLiteral("labelDSOColorRadioGalaxies"));

        gridLayout_18->addWidget(labelDSOColorRadioGalaxies, 1, 2, 1, 1);

        labelDSOColorStarClusters = new QLabel(colorsGroupBox);
        labelDSOColorStarClusters->setObjectName(QStringLiteral("labelDSOColorStarClusters"));

        gridLayout_18->addWidget(labelDSOColorStarClusters, 3, 2, 1, 1);

        labelDSOColorBlazars = new QLabel(colorsGroupBox);
        labelDSOColorBlazars->setObjectName(QStringLiteral("labelDSOColorBlazars"));

        gridLayout_18->addWidget(labelDSOColorBlazars, 3, 0, 1, 1);

        labelDSOColorGlobularStarClusters = new QLabel(colorsGroupBox);
        labelDSOColorGlobularStarClusters->setObjectName(QStringLiteral("labelDSOColorGlobularStarClusters"));

        gridLayout_18->addWidget(labelDSOColorGlobularStarClusters, 4, 0, 1, 1);

        colorDSOGlobularStarClusters = new QToolButton(colorsGroupBox);
        colorDSOGlobularStarClusters->setObjectName(QStringLiteral("colorDSOGlobularStarClusters"));

        gridLayout_18->addWidget(colorDSOGlobularStarClusters, 4, 1, 1, 1);

        labelDSOColorDarkNebulae = new QLabel(colorsGroupBox);
        labelDSOColorDarkNebulae->setObjectName(QStringLiteral("labelDSOColorDarkNebulae"));

        gridLayout_18->addWidget(labelDSOColorDarkNebulae, 7, 0, 1, 1);

        labelDSOColorStars = new QLabel(colorsGroupBox);
        labelDSOColorStars->setObjectName(QStringLiteral("labelDSOColorStars"));

        gridLayout_18->addWidget(labelDSOColorStars, 5, 0, 1, 1);

        labelDSOColorGalaxies = new QLabel(colorsGroupBox);
        labelDSOColorGalaxies->setObjectName(QStringLiteral("labelDSOColorGalaxies"));

        gridLayout_18->addWidget(labelDSOColorGalaxies, 0, 4, 1, 1);

        labelDSOColorQuasars = new QLabel(colorsGroupBox);
        labelDSOColorQuasars->setObjectName(QStringLiteral("labelDSOColorQuasars"));

        gridLayout_18->addWidget(labelDSOColorQuasars, 2, 0, 1, 1);

        colorDSOGalaxies = new QToolButton(colorsGroupBox);
        colorDSOGalaxies->setObjectName(QStringLiteral("colorDSOGalaxies"));

        gridLayout_18->addWidget(colorDSOGalaxies, 0, 5, 1, 1);

        colorDSOBipolarNebulae = new QToolButton(colorsGroupBox);
        colorDSOBipolarNebulae->setObjectName(QStringLiteral("colorDSOBipolarNebulae"));

        gridLayout_18->addWidget(colorDSOBipolarNebulae, 7, 5, 1, 1);

        labelDSOColorNebulae = new QLabel(colorsGroupBox);
        labelDSOColorNebulae->setObjectName(QStringLiteral("labelDSOColorNebulae"));

        gridLayout_18->addWidget(labelDSOColorNebulae, 5, 4, 1, 1);

        colorDSOEmissionObjects = new QToolButton(colorsGroupBox);
        colorDSOEmissionObjects->setObjectName(QStringLiteral("colorDSOEmissionObjects"));

        gridLayout_18->addWidget(colorDSOEmissionObjects, 9, 3, 1, 1);

        colorDSOMarkers = new QToolButton(colorsGroupBox);
        colorDSOMarkers->setObjectName(QStringLiteral("colorDSOMarkers"));

        gridLayout_18->addWidget(colorDSOMarkers, 0, 3, 1, 1);

        labelDSOColorLabels = new QLabel(colorsGroupBox);
        labelDSOColorLabels->setObjectName(QStringLiteral("labelDSOColorLabels"));

        gridLayout_18->addWidget(labelDSOColorLabels, 0, 0, 1, 1);

        colorDSOLabels = new QToolButton(colorsGroupBox);
        colorDSOLabels->setObjectName(QStringLiteral("colorDSOLabels"));

        gridLayout_18->addWidget(colorDSOLabels, 0, 1, 1, 1);

        labelDSOColorInterstellarMatter = new QLabel(colorsGroupBox);
        labelDSOColorInterstellarMatter->setObjectName(QStringLiteral("labelDSOColorInterstellarMatter"));

        gridLayout_18->addWidget(labelDSOColorInterstellarMatter, 9, 0, 1, 1);

        colorDSOInterstellarMatter = new QToolButton(colorsGroupBox);
        colorDSOInterstellarMatter->setObjectName(QStringLiteral("colorDSOInterstellarMatter"));

        gridLayout_18->addWidget(colorDSOInterstellarMatter, 9, 1, 1, 1);

        colorDSOStellarAssociations = new QToolButton(colorsGroupBox);
        colorDSOStellarAssociations->setObjectName(QStringLiteral("colorDSOStellarAssociations"));

        gridLayout_18->addWidget(colorDSOStellarAssociations, 4, 3, 1, 1);

        labelDSOColorBipolarNebulae = new QLabel(colorsGroupBox);
        labelDSOColorBipolarNebulae->setObjectName(QStringLiteral("labelDSOColorBipolarNebulae"));

        gridLayout_18->addWidget(labelDSOColorBipolarNebulae, 7, 4, 1, 1);

        labelDSOColorReflectionNebulae = new QLabel(colorsGroupBox);
        labelDSOColorReflectionNebulae->setObjectName(QStringLiteral("labelDSOColorReflectionNebulae"));

        gridLayout_18->addWidget(labelDSOColorReflectionNebulae, 7, 2, 1, 1);

        colorDSORadioGalaxies = new QToolButton(colorsGroupBox);
        colorDSORadioGalaxies->setObjectName(QStringLiteral("colorDSORadioGalaxies"));

        gridLayout_18->addWidget(colorDSORadioGalaxies, 1, 3, 1, 1);

        labelDSOColorBLLacObjects = new QLabel(colorsGroupBox);
        labelDSOColorBLLacObjects->setObjectName(QStringLiteral("labelDSOColorBLLacObjects"));

        gridLayout_18->addWidget(labelDSOColorBLLacObjects, 2, 4, 1, 1);

        colorDSOStarClusters = new QToolButton(colorsGroupBox);
        colorDSOStarClusters->setObjectName(QStringLiteral("colorDSOStarClusters"));

        gridLayout_18->addWidget(colorDSOStarClusters, 3, 3, 1, 1);

        labelDSOColorPlanetaryNebulae = new QLabel(colorsGroupBox);
        labelDSOColorPlanetaryNebulae->setObjectName(QStringLiteral("labelDSOColorPlanetaryNebulae"));

        gridLayout_18->addWidget(labelDSOColorPlanetaryNebulae, 6, 0, 1, 1);

        colorDSOPlanetaryNebulae = new QToolButton(colorsGroupBox);
        colorDSOPlanetaryNebulae->setObjectName(QStringLiteral("colorDSOPlanetaryNebulae"));

        gridLayout_18->addWidget(colorDSOPlanetaryNebulae, 6, 1, 1, 1);

        labelDSOColorPossiblePlanetaryNebulae = new QLabel(colorsGroupBox);
        labelDSOColorPossiblePlanetaryNebulae->setObjectName(QStringLiteral("labelDSOColorPossiblePlanetaryNebulae"));

        gridLayout_18->addWidget(labelDSOColorPossiblePlanetaryNebulae, 6, 2, 1, 1);

        colorDSOPossiblePlanetaryNebulae = new QToolButton(colorsGroupBox);
        colorDSOPossiblePlanetaryNebulae->setObjectName(QStringLiteral("colorDSOPossiblePlanetaryNebulae"));

        gridLayout_18->addWidget(colorDSOPossiblePlanetaryNebulae, 6, 3, 1, 1);

        labelDSOColorProtoplanetaryNebulae = new QLabel(colorsGroupBox);
        labelDSOColorProtoplanetaryNebulae->setObjectName(QStringLiteral("labelDSOColorProtoplanetaryNebulae"));

        gridLayout_18->addWidget(labelDSOColorProtoplanetaryNebulae, 6, 4, 1, 1);

        colorDSOProtoplanetaryNebulae = new QToolButton(colorsGroupBox);
        colorDSOProtoplanetaryNebulae->setObjectName(QStringLiteral("colorDSOProtoplanetaryNebulae"));

        gridLayout_18->addWidget(colorDSOProtoplanetaryNebulae, 6, 5, 1, 1);

        labelDSOColorEmissionNebulae = new QLabel(colorsGroupBox);
        labelDSOColorEmissionNebulae->setObjectName(QStringLiteral("labelDSOColorEmissionNebulae"));

        gridLayout_18->addWidget(labelDSOColorEmissionNebulae, 8, 0, 1, 1);

        colorDSOEmissionNebulae = new QToolButton(colorsGroupBox);
        colorDSOEmissionNebulae->setObjectName(QStringLiteral("colorDSOEmissionNebulae"));

        gridLayout_18->addWidget(colorDSOEmissionNebulae, 8, 1, 1, 1);

        labelDSOColorHydrogenRegions = new QLabel(colorsGroupBox);
        labelDSOColorHydrogenRegions->setObjectName(QStringLiteral("labelDSOColorHydrogenRegions"));

        gridLayout_18->addWidget(labelDSOColorHydrogenRegions, 8, 2, 1, 1);

        colorDSOHydrogenRegions = new QToolButton(colorsGroupBox);
        colorDSOHydrogenRegions->setObjectName(QStringLiteral("colorDSOHydrogenRegions"));

        gridLayout_18->addWidget(colorDSOHydrogenRegions, 8, 3, 1, 1);

        labelDSOColorMolecularClouds = new QLabel(colorsGroupBox);
        labelDSOColorMolecularClouds->setObjectName(QStringLiteral("labelDSOColorMolecularClouds"));

        gridLayout_18->addWidget(labelDSOColorMolecularClouds, 8, 4, 1, 1);

        colorDSOMolecularClouds = new QToolButton(colorsGroupBox);
        colorDSOMolecularClouds->setObjectName(QStringLiteral("colorDSOMolecularClouds"));

        gridLayout_18->addWidget(colorDSOMolecularClouds, 8, 5, 1, 1);

        labelDSOColorYSOs = new QLabel(colorsGroupBox);
        labelDSOColorYSOs->setObjectName(QStringLiteral("labelDSOColorYSOs"));

        gridLayout_18->addWidget(labelDSOColorYSOs, 9, 4, 1, 1);

        colorDSOYoungStellarObjects = new QToolButton(colorsGroupBox);
        colorDSOYoungStellarObjects->setObjectName(QStringLiteral("colorDSOYoungStellarObjects"));

        gridLayout_18->addWidget(colorDSOYoungStellarObjects, 9, 5, 1, 1);

        labelDSOColorSupernovaRemnants = new QLabel(colorsGroupBox);
        labelDSOColorSupernovaRemnants->setObjectName(QStringLiteral("labelDSOColorSupernovaRemnants"));

        gridLayout_18->addWidget(labelDSOColorSupernovaRemnants, 10, 0, 1, 1);

        colorDSOSupernovaRemnants = new QToolButton(colorsGroupBox);
        colorDSOSupernovaRemnants->setObjectName(QStringLiteral("colorDSOSupernovaRemnants"));

        gridLayout_18->addWidget(colorDSOSupernovaRemnants, 10, 1, 1, 1);


        verticalLayout->addWidget(colorsGroupBox);


        retranslateUi(ConfigureDSOColorsDialogForm);

        QMetaObject::connectSlotsByName(ConfigureDSOColorsDialogForm);
    } // setupUi

    void retranslateUi(QWidget *ConfigureDSOColorsDialogForm)
    {
        stelWindowTitle->setText(QApplication::translate("ConfigureDSOColorsDialogForm", "Color settings", 0));
        closeStelWindow->setText(QString());
        colorsGroupBox->setTitle(QApplication::translate("ConfigureDSOColorsDialogForm", "Colors of labels and markers of deep-sky objects", 0));
#ifndef QT_NO_TOOLTIP
        colorDSOOpenStarClusters->setToolTip(QApplication::translate("ConfigureDSOColorsDialogForm", "Color of markers of open star clusters", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        colorDSOBLLacObjects->setToolTip(QApplication::translate("ConfigureDSOColorsDialogForm", "Color of markers of BL Lac objects", 0));
#endif // QT_NO_TOOLTIP
        labelDSOColorStellarAssociations->setText(QApplication::translate("ConfigureDSOColorsDialogForm", "Stellar associations", 0));
#ifndef QT_NO_TOOLTIP
        colorDSODarkNebulae->setToolTip(QApplication::translate("ConfigureDSOColorsDialogForm", "Color of markers of dark nebulae", 0));
#endif // QT_NO_TOOLTIP
        labelDSOColorEmissionObjects->setText(QApplication::translate("ConfigureDSOColorsDialogForm", "Emission objects", 0));
#ifndef QT_NO_TOOLTIP
        colorDSOStarClouds->setToolTip(QApplication::translate("ConfigureDSOColorsDialogForm", "Color of markers of star clouds", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        colorDSOReflectionNebulae->setToolTip(QApplication::translate("ConfigureDSOColorsDialogForm", "Color of markers of reflection nebulae", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelDSOColorNebulosityClusters->setToolTip(QApplication::translate("ConfigureDSOColorsDialogForm", "Clusters associated with nebulosity", 0));
#endif // QT_NO_TOOLTIP
        labelDSOColorNebulosityClusters->setText(QApplication::translate("ConfigureDSOColorsDialogForm", "Clusters with neb.", 0));
        labelDSOColorOpenStarClusters->setText(QApplication::translate("ConfigureDSOColorsDialogForm", "Open star clusters", 0));
#ifndef QT_NO_TOOLTIP
        colorDSOStars->setToolTip(QApplication::translate("ConfigureDSOColorsDialogForm", "Color of markers of stars", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        colorDSONebulae->setToolTip(QApplication::translate("ConfigureDSOColorsDialogForm", "Color of markers of nebulae", 0));
#endif // QT_NO_TOOLTIP
        labelDSOColorActiveGalaxies->setText(QApplication::translate("ConfigureDSOColorsDialogForm", "Active galaxies", 0));
#ifndef QT_NO_TOOLTIP
        colorDSOQuasars->setToolTip(QApplication::translate("ConfigureDSOColorsDialogForm", "Color of markers of quasars", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        colorDSOBlazars->setToolTip(QApplication::translate("ConfigureDSOColorsDialogForm", "Color of markers of blazars", 0));
#endif // QT_NO_TOOLTIP
        labelDSOColorInteractingGalaxies->setText(QApplication::translate("ConfigureDSOColorsDialogForm", "Interacting galaxies", 0));
        labelDSOColorPossibleQuasars->setText(QApplication::translate("ConfigureDSOColorsDialogForm", "Possible quasars", 0));
#ifndef QT_NO_TOOLTIP
        colorDSONebulosityClusters->setToolTip(QApplication::translate("ConfigureDSOColorsDialogForm", "Color of markers of clusters associated with nebulosity", 0));
#endif // QT_NO_TOOLTIP
        labelDSOColorStarClouds->setText(QApplication::translate("ConfigureDSOColorsDialogForm", "Star clouds", 0));
#ifndef QT_NO_TOOLTIP
        colorDSOInteractingGalaxies->setToolTip(QApplication::translate("ConfigureDSOColorsDialogForm", "Color of markers of interacting galaxies", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelDSOColorMarkers->setToolTip(QApplication::translate("ConfigureDSOColorsDialogForm", "Markers of deep-sky objects", 0));
#endif // QT_NO_TOOLTIP
        labelDSOColorMarkers->setText(QApplication::translate("ConfigureDSOColorsDialogForm", "Markers of DSOs", 0));
#ifndef QT_NO_TOOLTIP
        colorDSOPossibleQuasars->setToolTip(QApplication::translate("ConfigureDSOColorsDialogForm", "Color of markers of possible quasars", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        colorDSOActiveGalaxies->setToolTip(QApplication::translate("ConfigureDSOColorsDialogForm", "Color of markers of active galaxies", 0));
#endif // QT_NO_TOOLTIP
        labelDSOColorRadioGalaxies->setText(QApplication::translate("ConfigureDSOColorsDialogForm", "Radio galaxies", 0));
        labelDSOColorStarClusters->setText(QApplication::translate("ConfigureDSOColorsDialogForm", "Star clusters", 0));
        labelDSOColorBlazars->setText(QApplication::translate("ConfigureDSOColorsDialogForm", "Blazars", 0));
        labelDSOColorGlobularStarClusters->setText(QApplication::translate("ConfigureDSOColorsDialogForm", "Globular star clusters", 0));
#ifndef QT_NO_TOOLTIP
        colorDSOGlobularStarClusters->setToolTip(QApplication::translate("ConfigureDSOColorsDialogForm", "Color of markers of globular star clusters", 0));
#endif // QT_NO_TOOLTIP
        labelDSOColorDarkNebulae->setText(QApplication::translate("ConfigureDSOColorsDialogForm", "Dark nebulae", 0));
        labelDSOColorStars->setText(QApplication::translate("ConfigureDSOColorsDialogForm", "Stars", 0));
        labelDSOColorGalaxies->setText(QApplication::translate("ConfigureDSOColorsDialogForm", "Galaxies", 0));
        labelDSOColorQuasars->setText(QApplication::translate("ConfigureDSOColorsDialogForm", "Quasars", 0));
#ifndef QT_NO_TOOLTIP
        colorDSOGalaxies->setToolTip(QApplication::translate("ConfigureDSOColorsDialogForm", "Color of markers of galaxies", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        colorDSOBipolarNebulae->setToolTip(QApplication::translate("ConfigureDSOColorsDialogForm", "Color of markers of bipolar nebulae", 0));
#endif // QT_NO_TOOLTIP
        labelDSOColorNebulae->setText(QApplication::translate("ConfigureDSOColorsDialogForm", "Nebulae", 0));
#ifndef QT_NO_TOOLTIP
        colorDSOEmissionObjects->setToolTip(QApplication::translate("ConfigureDSOColorsDialogForm", "Color of markers of emission objects", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        colorDSOMarkers->setToolTip(QApplication::translate("ConfigureDSOColorsDialogForm", "Color of markers of deep-sky objects", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelDSOColorLabels->setToolTip(QApplication::translate("ConfigureDSOColorsDialogForm", "Labels of deep-sky objects", 0));
#endif // QT_NO_TOOLTIP
        labelDSOColorLabels->setText(QApplication::translate("ConfigureDSOColorsDialogForm", "Labels of DSOs", 0));
#ifndef QT_NO_TOOLTIP
        colorDSOLabels->setToolTip(QApplication::translate("ConfigureDSOColorsDialogForm", "Color of labels of deep-sky objects", 0));
#endif // QT_NO_TOOLTIP
        labelDSOColorInterstellarMatter->setText(QApplication::translate("ConfigureDSOColorsDialogForm", "Interstellar matter", 0));
#ifndef QT_NO_TOOLTIP
        colorDSOInterstellarMatter->setToolTip(QApplication::translate("ConfigureDSOColorsDialogForm", "Color of markers of interstellar matter", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        colorDSOStellarAssociations->setToolTip(QApplication::translate("ConfigureDSOColorsDialogForm", "Color of markers of stellar associations", 0));
#endif // QT_NO_TOOLTIP
        labelDSOColorBipolarNebulae->setText(QApplication::translate("ConfigureDSOColorsDialogForm", "Bipolar nebulae", 0));
        labelDSOColorReflectionNebulae->setText(QApplication::translate("ConfigureDSOColorsDialogForm", "Reflection nebulae", 0));
#ifndef QT_NO_TOOLTIP
        colorDSORadioGalaxies->setToolTip(QApplication::translate("ConfigureDSOColorsDialogForm", "Color of markers of radio galaxies", 0));
#endif // QT_NO_TOOLTIP
        labelDSOColorBLLacObjects->setText(QApplication::translate("ConfigureDSOColorsDialogForm", "BL Lac objects", 0));
#ifndef QT_NO_TOOLTIP
        colorDSOStarClusters->setToolTip(QApplication::translate("ConfigureDSOColorsDialogForm", "Color of markers of star clusters", 0));
#endif // QT_NO_TOOLTIP
        labelDSOColorPlanetaryNebulae->setText(QApplication::translate("ConfigureDSOColorsDialogForm", "Planetary nebulae", 0));
#ifndef QT_NO_TOOLTIP
        colorDSOPlanetaryNebulae->setToolTip(QApplication::translate("ConfigureDSOColorsDialogForm", "Color of markers of planetary nebulae", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelDSOColorPossiblePlanetaryNebulae->setToolTip(QApplication::translate("ConfigureDSOColorsDialogForm", "Possible planetary nebulae", 0));
#endif // QT_NO_TOOLTIP
        labelDSOColorPossiblePlanetaryNebulae->setText(QApplication::translate("ConfigureDSOColorsDialogForm", "Possible pl. nebulae", 0));
#ifndef QT_NO_TOOLTIP
        colorDSOPossiblePlanetaryNebulae->setToolTip(QApplication::translate("ConfigureDSOColorsDialogForm", "Color of markers of possible planetary nebulae", 0));
#endif // QT_NO_TOOLTIP
        labelDSOColorProtoplanetaryNebulae->setText(QApplication::translate("ConfigureDSOColorsDialogForm", "Protoplanetary nebulae", 0));
#ifndef QT_NO_TOOLTIP
        colorDSOProtoplanetaryNebulae->setToolTip(QApplication::translate("ConfigureDSOColorsDialogForm", "Color of markers of protoplanetary nebulae", 0));
#endif // QT_NO_TOOLTIP
        labelDSOColorEmissionNebulae->setText(QApplication::translate("ConfigureDSOColorsDialogForm", "Emission nebulae", 0));
#ifndef QT_NO_TOOLTIP
        colorDSOEmissionNebulae->setToolTip(QApplication::translate("ConfigureDSOColorsDialogForm", "Color of markers of emission nebulae", 0));
#endif // QT_NO_TOOLTIP
        labelDSOColorHydrogenRegions->setText(QApplication::translate("ConfigureDSOColorsDialogForm", "Hydrogen regions", 0));
#ifndef QT_NO_TOOLTIP
        colorDSOHydrogenRegions->setToolTip(QApplication::translate("ConfigureDSOColorsDialogForm", "Color of markers of hydrogen regions", 0));
#endif // QT_NO_TOOLTIP
        labelDSOColorMolecularClouds->setText(QApplication::translate("ConfigureDSOColorsDialogForm", "Molecular clouds", 0));
#ifndef QT_NO_TOOLTIP
        colorDSOMolecularClouds->setToolTip(QApplication::translate("ConfigureDSOColorsDialogForm", "Color of markers of molecular clouds", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelDSOColorYSOs->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        labelDSOColorYSOs->setText(QApplication::translate("ConfigureDSOColorsDialogForm", "Young stellar objects", 0));
#ifndef QT_NO_TOOLTIP
        colorDSOYoungStellarObjects->setToolTip(QApplication::translate("ConfigureDSOColorsDialogForm", "Color of markers of young stellar objects", 0));
#endif // QT_NO_TOOLTIP
        labelDSOColorSupernovaRemnants->setText(QApplication::translate("ConfigureDSOColorsDialogForm", "Supernova remnants", 0));
#ifndef QT_NO_TOOLTIP
        colorDSOSupernovaRemnants->setToolTip(QApplication::translate("ConfigureDSOColorsDialogForm", "Color of markers of supernova remnants", 0));
#endif // QT_NO_TOOLTIP
        Q_UNUSED(ConfigureDSOColorsDialogForm);
    } // retranslateUi

};

namespace Ui {
    class ConfigureDSOColorsDialogForm: public Ui_ConfigureDSOColorsDialogForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DSOCOLORSDIALOG_H
