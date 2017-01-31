/********************************************************************************
** Form generated from reading UI file 'orbitColorsDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORBITCOLORSDIALOG_H
#define UI_ORBITCOLORSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Dialog.hpp"

QT_BEGIN_NAMESPACE

class Ui_ConfigureOrbitColorsDialogForm
{
public:
    QVBoxLayout *verticalLayout;
    BarFrame *TitleBar;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QLabel *stelWindowTitle;
    QSpacerItem *spacerItem1;
    QPushButton *closeStelWindow;
    QGroupBox *ocsGroupBox;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *oneColorRadioButton;
    QRadioButton *groupsRadioButton;
    QRadioButton *majorPlanetsRadioButton;
    QGroupBox *colorsGroupBox;
    QGridLayout *gridLayout_18;
    QToolButton *colorGroupsCometsOrbits;
    QLabel *labelMPUranus;
    QLabel *labelMPMars;
    QToolButton *colorMPNeptuneOrbit;
    QToolButton *colorGroupsMoonsOrbits;
    QToolButton *colorGenericOrbits;
    QLabel *labelMPMercury;
    QToolButton *colorGroupsMajorPlanetsOrbits;
    QLabel *labelGroupsMajorPlanetsColor;
    QToolButton *colorMPSaturnOrbit;
    QLabel *labelMPJupiter;
    QLabel *labelMPNeptune;
    QLabel *labelGroupsMoonsColor;
    QToolButton *colorGroupsCubewanosOrbits;
    QToolButton *colorMPVenusOrbit;
    QToolButton *colorGroupsMinorPlanetsOrbits;
    QToolButton *colorGroupsSDOOrbits;
    QLabel *labelMPSaturn;
    QToolButton *colorMPUranusOrbit;
    QToolButton *colorMPEarthOrbit;
    QLabel *labelMPEarth;
    QToolButton *colorGroupsDwarfPlanetsOrbits;
    QLabel *labelGroupsCometsColor;
    QLabel *labelGroupsDwarfPlanetsColor;
    QToolButton *colorMPMercuryOrbit;
    QLabel *labelGroupsPlutinosColor;
    QLabel *labelGroupsSDOColor;
    QFrame *line2;
    QLabel *labelGenericOrbitColor;
    QLabel *labelGroupsCubewanosColor;
    QToolButton *colorMPMarsOrbit;
    QToolButton *colorMPJupiterOrbit;
    QLabel *labelMPVenus;
    QToolButton *colorGroupsPlutinosOrbits;
    QFrame *line1;
    QLabel *labelGroupsMinorPlanetsColor;
    QLabel *labelGroupsOCOColor;
    QToolButton *colorGroupsOCOOrbits;

    void setupUi(QWidget *ConfigureOrbitColorsDialogForm)
    {
        if (ConfigureOrbitColorsDialogForm->objectName().isEmpty())
            ConfigureOrbitColorsDialogForm->setObjectName(QStringLiteral("ConfigureOrbitColorsDialogForm"));
        ConfigureOrbitColorsDialogForm->resize(546, 477);
        verticalLayout = new QVBoxLayout(ConfigureOrbitColorsDialogForm);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        TitleBar = new BarFrame(ConfigureOrbitColorsDialogForm);
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

        ocsGroupBox = new QGroupBox(ConfigureOrbitColorsDialogForm);
        ocsGroupBox->setObjectName(QStringLiteral("ocsGroupBox"));
        verticalLayout_2 = new QVBoxLayout(ocsGroupBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        oneColorRadioButton = new QRadioButton(ocsGroupBox);
        oneColorRadioButton->setObjectName(QStringLiteral("oneColorRadioButton"));

        verticalLayout_2->addWidget(oneColorRadioButton);

        groupsRadioButton = new QRadioButton(ocsGroupBox);
        groupsRadioButton->setObjectName(QStringLiteral("groupsRadioButton"));

        verticalLayout_2->addWidget(groupsRadioButton);

        majorPlanetsRadioButton = new QRadioButton(ocsGroupBox);
        majorPlanetsRadioButton->setObjectName(QStringLiteral("majorPlanetsRadioButton"));

        verticalLayout_2->addWidget(majorPlanetsRadioButton);


        verticalLayout->addWidget(ocsGroupBox);

        colorsGroupBox = new QGroupBox(ConfigureOrbitColorsDialogForm);
        colorsGroupBox->setObjectName(QStringLiteral("colorsGroupBox"));
        colorsGroupBox->setBaseSize(QSize(0, 2));
        gridLayout_18 = new QGridLayout(colorsGroupBox);
        gridLayout_18->setObjectName(QStringLiteral("gridLayout_18"));
        gridLayout_18->setContentsMargins(0, 0, 0, 0);
        colorGroupsCometsOrbits = new QToolButton(colorsGroupBox);
        colorGroupsCometsOrbits->setObjectName(QStringLiteral("colorGroupsCometsOrbits"));

        gridLayout_18->addWidget(colorGroupsCometsOrbits, 3, 3, 1, 1);

        labelMPUranus = new QLabel(colorsGroupBox);
        labelMPUranus->setObjectName(QStringLiteral("labelMPUranus"));

        gridLayout_18->addWidget(labelMPUranus, 11, 0, 1, 1);

        labelMPMars = new QLabel(colorsGroupBox);
        labelMPMars->setObjectName(QStringLiteral("labelMPMars"));

        gridLayout_18->addWidget(labelMPMars, 9, 2, 1, 1);

        colorMPNeptuneOrbit = new QToolButton(colorsGroupBox);
        colorMPNeptuneOrbit->setObjectName(QStringLiteral("colorMPNeptuneOrbit"));

        gridLayout_18->addWidget(colorMPNeptuneOrbit, 11, 3, 1, 1);

        colorGroupsMoonsOrbits = new QToolButton(colorsGroupBox);
        colorGroupsMoonsOrbits->setObjectName(QStringLiteral("colorGroupsMoonsOrbits"));

        gridLayout_18->addWidget(colorGroupsMoonsOrbits, 2, 3, 1, 1);

        colorGenericOrbits = new QToolButton(colorsGroupBox);
        colorGenericOrbits->setObjectName(QStringLiteral("colorGenericOrbits"));

        gridLayout_18->addWidget(colorGenericOrbits, 0, 1, 1, 1);

        labelMPMercury = new QLabel(colorsGroupBox);
        labelMPMercury->setObjectName(QStringLiteral("labelMPMercury"));

        gridLayout_18->addWidget(labelMPMercury, 8, 0, 1, 1);

        colorGroupsMajorPlanetsOrbits = new QToolButton(colorsGroupBox);
        colorGroupsMajorPlanetsOrbits->setObjectName(QStringLiteral("colorGroupsMajorPlanetsOrbits"));

        gridLayout_18->addWidget(colorGroupsMajorPlanetsOrbits, 2, 1, 1, 1);

        labelGroupsMajorPlanetsColor = new QLabel(colorsGroupBox);
        labelGroupsMajorPlanetsColor->setObjectName(QStringLiteral("labelGroupsMajorPlanetsColor"));

        gridLayout_18->addWidget(labelGroupsMajorPlanetsColor, 2, 0, 1, 1);

        colorMPSaturnOrbit = new QToolButton(colorsGroupBox);
        colorMPSaturnOrbit->setObjectName(QStringLiteral("colorMPSaturnOrbit"));

        gridLayout_18->addWidget(colorMPSaturnOrbit, 10, 3, 1, 1);

        labelMPJupiter = new QLabel(colorsGroupBox);
        labelMPJupiter->setObjectName(QStringLiteral("labelMPJupiter"));

        gridLayout_18->addWidget(labelMPJupiter, 10, 0, 1, 1);

        labelMPNeptune = new QLabel(colorsGroupBox);
        labelMPNeptune->setObjectName(QStringLiteral("labelMPNeptune"));

        gridLayout_18->addWidget(labelMPNeptune, 11, 2, 1, 1);

        labelGroupsMoonsColor = new QLabel(colorsGroupBox);
        labelGroupsMoonsColor->setObjectName(QStringLiteral("labelGroupsMoonsColor"));

        gridLayout_18->addWidget(labelGroupsMoonsColor, 2, 2, 1, 1);

        colorGroupsCubewanosOrbits = new QToolButton(colorsGroupBox);
        colorGroupsCubewanosOrbits->setObjectName(QStringLiteral("colorGroupsCubewanosOrbits"));

        gridLayout_18->addWidget(colorGroupsCubewanosOrbits, 4, 3, 1, 1);

        colorMPVenusOrbit = new QToolButton(colorsGroupBox);
        colorMPVenusOrbit->setObjectName(QStringLiteral("colorMPVenusOrbit"));

        gridLayout_18->addWidget(colorMPVenusOrbit, 8, 3, 1, 1);

        colorGroupsMinorPlanetsOrbits = new QToolButton(colorsGroupBox);
        colorGroupsMinorPlanetsOrbits->setObjectName(QStringLiteral("colorGroupsMinorPlanetsOrbits"));

        gridLayout_18->addWidget(colorGroupsMinorPlanetsOrbits, 3, 1, 1, 1);

        colorGroupsSDOOrbits = new QToolButton(colorsGroupBox);
        colorGroupsSDOOrbits->setObjectName(QStringLiteral("colorGroupsSDOOrbits"));

        gridLayout_18->addWidget(colorGroupsSDOOrbits, 5, 3, 1, 1);

        labelMPSaturn = new QLabel(colorsGroupBox);
        labelMPSaturn->setObjectName(QStringLiteral("labelMPSaturn"));

        gridLayout_18->addWidget(labelMPSaturn, 10, 2, 1, 1);

        colorMPUranusOrbit = new QToolButton(colorsGroupBox);
        colorMPUranusOrbit->setObjectName(QStringLiteral("colorMPUranusOrbit"));

        gridLayout_18->addWidget(colorMPUranusOrbit, 11, 1, 1, 1);

        colorMPEarthOrbit = new QToolButton(colorsGroupBox);
        colorMPEarthOrbit->setObjectName(QStringLiteral("colorMPEarthOrbit"));

        gridLayout_18->addWidget(colorMPEarthOrbit, 9, 1, 1, 1);

        labelMPEarth = new QLabel(colorsGroupBox);
        labelMPEarth->setObjectName(QStringLiteral("labelMPEarth"));

        gridLayout_18->addWidget(labelMPEarth, 9, 0, 1, 1);

        colorGroupsDwarfPlanetsOrbits = new QToolButton(colorsGroupBox);
        colorGroupsDwarfPlanetsOrbits->setObjectName(QStringLiteral("colorGroupsDwarfPlanetsOrbits"));

        gridLayout_18->addWidget(colorGroupsDwarfPlanetsOrbits, 4, 1, 1, 1);

        labelGroupsCometsColor = new QLabel(colorsGroupBox);
        labelGroupsCometsColor->setObjectName(QStringLiteral("labelGroupsCometsColor"));

        gridLayout_18->addWidget(labelGroupsCometsColor, 3, 2, 1, 1);

        labelGroupsDwarfPlanetsColor = new QLabel(colorsGroupBox);
        labelGroupsDwarfPlanetsColor->setObjectName(QStringLiteral("labelGroupsDwarfPlanetsColor"));

        gridLayout_18->addWidget(labelGroupsDwarfPlanetsColor, 4, 0, 1, 1);

        colorMPMercuryOrbit = new QToolButton(colorsGroupBox);
        colorMPMercuryOrbit->setObjectName(QStringLiteral("colorMPMercuryOrbit"));

        gridLayout_18->addWidget(colorMPMercuryOrbit, 8, 1, 1, 1);

        labelGroupsPlutinosColor = new QLabel(colorsGroupBox);
        labelGroupsPlutinosColor->setObjectName(QStringLiteral("labelGroupsPlutinosColor"));

        gridLayout_18->addWidget(labelGroupsPlutinosColor, 5, 0, 1, 1);

        labelGroupsSDOColor = new QLabel(colorsGroupBox);
        labelGroupsSDOColor->setObjectName(QStringLiteral("labelGroupsSDOColor"));

        gridLayout_18->addWidget(labelGroupsSDOColor, 5, 2, 1, 1);

        line2 = new QFrame(colorsGroupBox);
        line2->setObjectName(QStringLiteral("line2"));
        line2->setFrameShadow(QFrame::Plain);
        line2->setFrameShape(QFrame::HLine);

        gridLayout_18->addWidget(line2, 7, 0, 1, 4);

        labelGenericOrbitColor = new QLabel(colorsGroupBox);
        labelGenericOrbitColor->setObjectName(QStringLiteral("labelGenericOrbitColor"));

        gridLayout_18->addWidget(labelGenericOrbitColor, 0, 0, 1, 1);

        labelGroupsCubewanosColor = new QLabel(colorsGroupBox);
        labelGroupsCubewanosColor->setObjectName(QStringLiteral("labelGroupsCubewanosColor"));

        gridLayout_18->addWidget(labelGroupsCubewanosColor, 4, 2, 1, 1);

        colorMPMarsOrbit = new QToolButton(colorsGroupBox);
        colorMPMarsOrbit->setObjectName(QStringLiteral("colorMPMarsOrbit"));

        gridLayout_18->addWidget(colorMPMarsOrbit, 9, 3, 1, 1);

        colorMPJupiterOrbit = new QToolButton(colorsGroupBox);
        colorMPJupiterOrbit->setObjectName(QStringLiteral("colorMPJupiterOrbit"));

        gridLayout_18->addWidget(colorMPJupiterOrbit, 10, 1, 1, 1);

        labelMPVenus = new QLabel(colorsGroupBox);
        labelMPVenus->setObjectName(QStringLiteral("labelMPVenus"));

        gridLayout_18->addWidget(labelMPVenus, 8, 2, 1, 1);

        colorGroupsPlutinosOrbits = new QToolButton(colorsGroupBox);
        colorGroupsPlutinosOrbits->setObjectName(QStringLiteral("colorGroupsPlutinosOrbits"));

        gridLayout_18->addWidget(colorGroupsPlutinosOrbits, 5, 1, 1, 1);

        line1 = new QFrame(colorsGroupBox);
        line1->setObjectName(QStringLiteral("line1"));
        line1->setFrameShadow(QFrame::Plain);
        line1->setFrameShape(QFrame::HLine);

        gridLayout_18->addWidget(line1, 1, 0, 1, 4);

        labelGroupsMinorPlanetsColor = new QLabel(colorsGroupBox);
        labelGroupsMinorPlanetsColor->setObjectName(QStringLiteral("labelGroupsMinorPlanetsColor"));

        gridLayout_18->addWidget(labelGroupsMinorPlanetsColor, 3, 0, 1, 1);

        labelGroupsOCOColor = new QLabel(colorsGroupBox);
        labelGroupsOCOColor->setObjectName(QStringLiteral("labelGroupsOCOColor"));

        gridLayout_18->addWidget(labelGroupsOCOColor, 6, 0, 1, 1);

        colorGroupsOCOOrbits = new QToolButton(colorsGroupBox);
        colorGroupsOCOOrbits->setObjectName(QStringLiteral("colorGroupsOCOOrbits"));

        gridLayout_18->addWidget(colorGroupsOCOOrbits, 6, 1, 1, 1);


        verticalLayout->addWidget(colorsGroupBox);


        retranslateUi(ConfigureOrbitColorsDialogForm);

        QMetaObject::connectSlotsByName(ConfigureOrbitColorsDialogForm);
    } // setupUi

    void retranslateUi(QWidget *ConfigureOrbitColorsDialogForm)
    {
        stelWindowTitle->setText(QApplication::translate("ConfigureOrbitColorsDialogForm", "Color settings", 0));
        closeStelWindow->setText(QString());
        ocsGroupBox->setTitle(QApplication::translate("ConfigureOrbitColorsDialogForm", "Style of orbit colors", 0));
        oneColorRadioButton->setText(QApplication::translate("ConfigureOrbitColorsDialogForm", "One color for all orbits", 0));
        groupsRadioButton->setText(QApplication::translate("ConfigureOrbitColorsDialogForm", "Separate colors for orbits by object type", 0));
        majorPlanetsRadioButton->setText(QApplication::translate("ConfigureOrbitColorsDialogForm", "Separate colors for orbits of major planets only", 0));
        colorsGroupBox->setTitle(QApplication::translate("ConfigureOrbitColorsDialogForm", "Colors of orbits of Solar system bodies", 0));
#ifndef QT_NO_TOOLTIP
        colorGroupsCometsOrbits->setToolTip(QApplication::translate("ConfigureOrbitColorsDialogForm", "Color of comet orbits", 0));
#endif // QT_NO_TOOLTIP
        labelMPUranus->setText(QApplication::translate("ConfigureOrbitColorsDialogForm", "Orbit of Uranus", 0));
        labelMPMars->setText(QApplication::translate("ConfigureOrbitColorsDialogForm", "Orbit of Mars", 0));
#ifndef QT_NO_TOOLTIP
        colorMPNeptuneOrbit->setToolTip(QApplication::translate("ConfigureOrbitColorsDialogForm", "Color of Neptune orbit", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        colorGroupsMoonsOrbits->setToolTip(QApplication::translate("ConfigureOrbitColorsDialogForm", "Color of planet moon orbits", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        colorGenericOrbits->setToolTip(QApplication::translate("ConfigureOrbitColorsDialogForm", "Color of generic orbit", 0));
#endif // QT_NO_TOOLTIP
        labelMPMercury->setText(QApplication::translate("ConfigureOrbitColorsDialogForm", "Orbit of Mercury", 0));
#ifndef QT_NO_TOOLTIP
        colorGroupsMajorPlanetsOrbits->setToolTip(QApplication::translate("ConfigureOrbitColorsDialogForm", "Color of major planet orbits", 0));
#endif // QT_NO_TOOLTIP
        labelGroupsMajorPlanetsColor->setText(QApplication::translate("ConfigureOrbitColorsDialogForm", "Orbits of major planets", 0));
#ifndef QT_NO_TOOLTIP
        colorMPSaturnOrbit->setToolTip(QApplication::translate("ConfigureOrbitColorsDialogForm", "Color of Saturn orbit", 0));
#endif // QT_NO_TOOLTIP
        labelMPJupiter->setText(QApplication::translate("ConfigureOrbitColorsDialogForm", "Orbit of Jupiter", 0));
#ifndef QT_NO_TOOLTIP
        labelMPNeptune->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        labelMPNeptune->setText(QApplication::translate("ConfigureOrbitColorsDialogForm", "Orbit of Neptune", 0));
        labelGroupsMoonsColor->setText(QApplication::translate("ConfigureOrbitColorsDialogForm", "Orbits of moons of planets", 0));
#ifndef QT_NO_TOOLTIP
        colorGroupsCubewanosOrbits->setToolTip(QApplication::translate("ConfigureOrbitColorsDialogForm", "Color of cubewano orbits", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        colorMPVenusOrbit->setToolTip(QApplication::translate("ConfigureOrbitColorsDialogForm", "Color of Venus orbit", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        colorGroupsMinorPlanetsOrbits->setToolTip(QApplication::translate("ConfigureOrbitColorsDialogForm", "Color of minor planet orbits", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        colorGroupsSDOOrbits->setToolTip(QApplication::translate("ConfigureOrbitColorsDialogForm", "Color of scattered disk object orbits", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelMPSaturn->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        labelMPSaturn->setText(QApplication::translate("ConfigureOrbitColorsDialogForm", "Orbit of Saturn", 0));
#ifndef QT_NO_TOOLTIP
        colorMPUranusOrbit->setToolTip(QApplication::translate("ConfigureOrbitColorsDialogForm", "Color of Uranus orbit", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        colorMPEarthOrbit->setToolTip(QApplication::translate("ConfigureOrbitColorsDialogForm", "Color of Earth orbit", 0));
#endif // QT_NO_TOOLTIP
        labelMPEarth->setText(QApplication::translate("ConfigureOrbitColorsDialogForm", "Orbit of Earth", 0));
#ifndef QT_NO_TOOLTIP
        colorGroupsDwarfPlanetsOrbits->setToolTip(QApplication::translate("ConfigureOrbitColorsDialogForm", "Color of dwarf planet orbits", 0));
#endif // QT_NO_TOOLTIP
        labelGroupsCometsColor->setText(QApplication::translate("ConfigureOrbitColorsDialogForm", "Orbits of comets", 0));
        labelGroupsDwarfPlanetsColor->setText(QApplication::translate("ConfigureOrbitColorsDialogForm", "Orbits of dwarf planets", 0));
#ifndef QT_NO_TOOLTIP
        colorMPMercuryOrbit->setToolTip(QApplication::translate("ConfigureOrbitColorsDialogForm", "Color of Mercury orbit", 0));
#endif // QT_NO_TOOLTIP
        labelGroupsPlutinosColor->setText(QApplication::translate("ConfigureOrbitColorsDialogForm", "Orbits of plutinos", 0));
        labelGroupsSDOColor->setText(QApplication::translate("ConfigureOrbitColorsDialogForm", "Orbits of scattered disk objects", 0));
#ifndef QT_NO_TOOLTIP
        labelGenericOrbitColor->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        labelGenericOrbitColor->setText(QApplication::translate("ConfigureOrbitColorsDialogForm", "Generic orbit", 0));
        labelGroupsCubewanosColor->setText(QApplication::translate("ConfigureOrbitColorsDialogForm", "Orbits of cubewanos", 0));
#ifndef QT_NO_TOOLTIP
        colorMPMarsOrbit->setToolTip(QApplication::translate("ConfigureOrbitColorsDialogForm", "Color of Mars orbit", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        colorMPJupiterOrbit->setToolTip(QApplication::translate("ConfigureOrbitColorsDialogForm", "Color of Jupiter orbit", 0));
#endif // QT_NO_TOOLTIP
        labelMPVenus->setText(QApplication::translate("ConfigureOrbitColorsDialogForm", "Orbit of Venus", 0));
#ifndef QT_NO_TOOLTIP
        colorGroupsPlutinosOrbits->setToolTip(QApplication::translate("ConfigureOrbitColorsDialogForm", "Color of plutino orbits", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelGroupsMinorPlanetsColor->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        labelGroupsMinorPlanetsColor->setText(QApplication::translate("ConfigureOrbitColorsDialogForm", "Orbits of minor planets", 0));
        labelGroupsOCOColor->setText(QApplication::translate("ConfigureOrbitColorsDialogForm", "Orbits of Oort cloud objects", 0));
#ifndef QT_NO_TOOLTIP
        colorGroupsOCOOrbits->setToolTip(QApplication::translate("ConfigureOrbitColorsDialogForm", "Color of Oort cloud object orbits", 0));
#endif // QT_NO_TOOLTIP
        Q_UNUSED(ConfigureOrbitColorsDialogForm);
    } // retranslateUi

};

namespace Ui {
    class ConfigureOrbitColorsDialogForm: public Ui_ConfigureOrbitColorsDialogForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORBITCOLORSDIALOG_H
