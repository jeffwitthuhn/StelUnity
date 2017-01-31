/********************************************************************************
** Form generated from reading UI file 'pointerCoordinatesWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POINTERCOORDINATESWINDOW_H
#define UI_POINTERCOORDINATESWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
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

class Ui_pointerCoordinatesWindowForm
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
    QWidget *tabCoordinates;
    QVBoxLayout *verticalLayoutTimeZone;
    QGroupBox *groupBoxCoordinates;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *checkBoxEnableAtStartup;
    QCheckBox *checkBoxShowButton;
    QCheckBox *checkBoxConstellation;
    QHBoxLayout *horizontalLayout_4;
    QLabel *labelCoordinateSystem;
    QComboBox *coordinateSystemComboBox;
    QHBoxLayout *horizontalLayout;
    QLabel *labelFontSize;
    QSpinBox *spinBoxFontSize;
    QHBoxLayout *horizontalLayout_3;
    QLabel *placeLabel;
    QComboBox *placeComboBox;
    QHBoxLayout *horizontalLayoutCustomCoords;
    QSpacerItem *horizontalSpacer;
    QLabel *labelCustomCoords;
    QSpinBox *spinBoxX;
    QSpinBox *spinBoxY;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButtonSave;
    QPushButton *pushButtonReset;
    QWidget *tabAbout;
    QVBoxLayout *verticalLayout_3;
    QTextBrowser *aboutTextBrowser;

    void setupUi(QWidget *pointerCoordinatesWindowForm)
    {
        if (pointerCoordinatesWindowForm->objectName().isEmpty())
            pointerCoordinatesWindowForm->setObjectName(QStringLiteral("pointerCoordinatesWindowForm"));
        pointerCoordinatesWindowForm->resize(522, 460);
        verticalLayout = new QVBoxLayout(pointerCoordinatesWindowForm);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        TitleBar = new BarFrame(pointerCoordinatesWindowForm);
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

        tabWidget = new QTabWidget(pointerCoordinatesWindowForm);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabCoordinates = new QWidget();
        tabCoordinates->setObjectName(QStringLiteral("tabCoordinates"));
        verticalLayoutTimeZone = new QVBoxLayout(tabCoordinates);
        verticalLayoutTimeZone->setSpacing(0);
        verticalLayoutTimeZone->setObjectName(QStringLiteral("verticalLayoutTimeZone"));
        verticalLayoutTimeZone->setContentsMargins(0, 0, 0, 0);
        groupBoxCoordinates = new QGroupBox(tabCoordinates);
        groupBoxCoordinates->setObjectName(QStringLiteral("groupBoxCoordinates"));
        groupBoxCoordinates->setMinimumSize(QSize(0, 400));
        groupBoxCoordinates->setAlignment(Qt::AlignCenter);
        verticalLayout_2 = new QVBoxLayout(groupBoxCoordinates);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        checkBoxEnableAtStartup = new QCheckBox(groupBoxCoordinates);
        checkBoxEnableAtStartup->setObjectName(QStringLiteral("checkBoxEnableAtStartup"));

        verticalLayout_2->addWidget(checkBoxEnableAtStartup);

        checkBoxShowButton = new QCheckBox(groupBoxCoordinates);
        checkBoxShowButton->setObjectName(QStringLiteral("checkBoxShowButton"));

        verticalLayout_2->addWidget(checkBoxShowButton);

        checkBoxConstellation = new QCheckBox(groupBoxCoordinates);
        checkBoxConstellation->setObjectName(QStringLiteral("checkBoxConstellation"));

        verticalLayout_2->addWidget(checkBoxConstellation);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        labelCoordinateSystem = new QLabel(groupBoxCoordinates);
        labelCoordinateSystem->setObjectName(QStringLiteral("labelCoordinateSystem"));

        horizontalLayout_4->addWidget(labelCoordinateSystem);

        coordinateSystemComboBox = new QComboBox(groupBoxCoordinates);
        coordinateSystemComboBox->setObjectName(QStringLiteral("coordinateSystemComboBox"));
        coordinateSystemComboBox->setEditable(false);
        coordinateSystemComboBox->setInsertPolicy(QComboBox::NoInsert);

        horizontalLayout_4->addWidget(coordinateSystemComboBox);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        labelFontSize = new QLabel(groupBoxCoordinates);
        labelFontSize->setObjectName(QStringLiteral("labelFontSize"));

        horizontalLayout->addWidget(labelFontSize);

        spinBoxFontSize = new QSpinBox(groupBoxCoordinates);
        spinBoxFontSize->setObjectName(QStringLiteral("spinBoxFontSize"));
        spinBoxFontSize->setMinimum(10);
        spinBoxFontSize->setMaximum(50);
        spinBoxFontSize->setValue(14);

        horizontalLayout->addWidget(spinBoxFontSize);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        placeLabel = new QLabel(groupBoxCoordinates);
        placeLabel->setObjectName(QStringLiteral("placeLabel"));

        horizontalLayout_3->addWidget(placeLabel);

        placeComboBox = new QComboBox(groupBoxCoordinates);
        placeComboBox->setObjectName(QStringLiteral("placeComboBox"));
        placeComboBox->setEditable(false);
        placeComboBox->setInsertPolicy(QComboBox::NoInsert);
        placeComboBox->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout_3->addWidget(placeComboBox);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayoutCustomCoords = new QHBoxLayout();
        horizontalLayoutCustomCoords->setObjectName(QStringLiteral("horizontalLayoutCustomCoords"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayoutCustomCoords->addItem(horizontalSpacer);

        labelCustomCoords = new QLabel(groupBoxCoordinates);
        labelCustomCoords->setObjectName(QStringLiteral("labelCustomCoords"));
        labelCustomCoords->setEnabled(true);

        horizontalLayoutCustomCoords->addWidget(labelCustomCoords);

        spinBoxX = new QSpinBox(groupBoxCoordinates);
        spinBoxX->setObjectName(QStringLiteral("spinBoxX"));
        spinBoxX->setEnabled(true);
        spinBoxX->setMinimum(1);
        spinBoxX->setMaximum(9999);

        horizontalLayoutCustomCoords->addWidget(spinBoxX);

        spinBoxY = new QSpinBox(groupBoxCoordinates);
        spinBoxY->setObjectName(QStringLiteral("spinBoxY"));
        spinBoxY->setEnabled(true);
        spinBoxY->setMinimum(1);
        spinBoxY->setMaximum(9999);

        horizontalLayoutCustomCoords->addWidget(spinBoxY);


        verticalLayout_2->addLayout(horizontalLayoutCustomCoords);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButtonSave = new QPushButton(groupBoxCoordinates);
        pushButtonSave->setObjectName(QStringLiteral("pushButtonSave"));

        horizontalLayout_2->addWidget(pushButtonSave);

        pushButtonReset = new QPushButton(groupBoxCoordinates);
        pushButtonReset->setObjectName(QStringLiteral("pushButtonReset"));

        horizontalLayout_2->addWidget(pushButtonReset);


        verticalLayout_2->addLayout(horizontalLayout_2);


        verticalLayoutTimeZone->addWidget(groupBoxCoordinates);

        tabWidget->addTab(tabCoordinates, QString());
        tabAbout = new QWidget();
        tabAbout->setObjectName(QStringLiteral("tabAbout"));
        verticalLayout_3 = new QVBoxLayout(tabAbout);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        aboutTextBrowser = new QTextBrowser(tabAbout);
        aboutTextBrowser->setObjectName(QStringLiteral("aboutTextBrowser"));

        verticalLayout_3->addWidget(aboutTextBrowser);

        tabWidget->addTab(tabAbout, QString());

        verticalLayout->addWidget(tabWidget);


        retranslateUi(pointerCoordinatesWindowForm);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(pointerCoordinatesWindowForm);
    } // setupUi

    void retranslateUi(QWidget *pointerCoordinatesWindowForm)
    {
        stelWindowTitle->setText(QApplication::translate("pointerCoordinatesWindowForm", "Pointer Coordinates", 0));
        closeStelWindow->setText(QString());
        groupBoxCoordinates->setTitle(QApplication::translate("pointerCoordinatesWindowForm", "Pointer Coordinates", 0));
        checkBoxEnableAtStartup->setText(QApplication::translate("pointerCoordinatesWindowForm", "Enable display of coordinates at startup", 0));
        checkBoxShowButton->setText(QApplication::translate("pointerCoordinatesWindowForm", "Show plug-in button on toolbar", 0));
#ifndef QT_NO_TOOLTIP
        checkBoxConstellation->setToolTip(QApplication::translate("pointerCoordinatesWindowForm", "3-letter IAU constellation abbreviation", 0));
#endif // QT_NO_TOOLTIP
        checkBoxConstellation->setText(QApplication::translate("pointerCoordinatesWindowForm", "Show IAU constellation code", 0));
#ifndef QT_NO_TOOLTIP
        labelCoordinateSystem->setToolTip(QApplication::translate("pointerCoordinatesWindowForm", "Which coordinate system will be used for displaying", 0));
#endif // QT_NO_TOOLTIP
        labelCoordinateSystem->setText(QApplication::translate("pointerCoordinatesWindowForm", "Coordinates:", 0));
        labelFontSize->setText(QApplication::translate("pointerCoordinatesWindowForm", "Font size:", 0));
#ifndef QT_NO_TOOLTIP
        placeLabel->setToolTip(QApplication::translate("pointerCoordinatesWindowForm", "Place of the string with coordinates of the mouse pointer", 0));
#endif // QT_NO_TOOLTIP
        placeLabel->setText(QApplication::translate("pointerCoordinatesWindowForm", "Place of the string:", 0));
#ifndef QT_NO_TOOLTIP
        spinBoxX->setToolTip(QApplication::translate("pointerCoordinatesWindowForm", "Coordinate X", 0));
#endif // QT_NO_TOOLTIP
        spinBoxX->setSpecialValueText(QString());
#ifndef QT_NO_TOOLTIP
        spinBoxY->setToolTip(QApplication::translate("pointerCoordinatesWindowForm", "Coordinate Y", 0));
#endif // QT_NO_TOOLTIP
        spinBoxY->setSpecialValueText(QString());
        pushButtonSave->setText(QApplication::translate("pointerCoordinatesWindowForm", "Save settings", 0));
        pushButtonReset->setText(QApplication::translate("pointerCoordinatesWindowForm", "Restore defaults", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabCoordinates), QApplication::translate("pointerCoordinatesWindowForm", "Pointer Coordinates", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabAbout), QApplication::translate("pointerCoordinatesWindowForm", "About", "tab in plugin windows"));
        Q_UNUSED(pointerCoordinatesWindowForm);
    } // retranslateUi

};

namespace Ui {
    class pointerCoordinatesWindowForm: public Ui_pointerCoordinatesWindowForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POINTERCOORDINATESWINDOW_H
