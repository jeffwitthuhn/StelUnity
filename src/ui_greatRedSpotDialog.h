/********************************************************************************
** Form generated from reading UI file 'greatRedSpotDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GREATREDSPOTDIALOG_H
#define UI_GREATREDSPOTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Dialog.hpp"

QT_BEGIN_NAMESPACE

class Ui_GreatRedSpotDialogForm
{
public:
    QVBoxLayout *verticalLayout;
    BarFrame *TitleBar;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QLabel *stelWindowTitle;
    QSpacerItem *spacerItem1;
    QPushButton *closeStelWindow;
    QGroupBox *greatRedSpotGroupBox;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QDoubleSpinBox *driftDoubleSpinBox;
    QDateTimeEdit *jdDateTimeEdit;
    QLabel *driftLabel;
    QLabel *longitudeLabel;
    QSpinBox *longitudeSpinBox;
    QLabel *jdLabel;
    QPushButton *recentGrsMeasurementPushButton;

    void setupUi(QWidget *GreatRedSpotDialogForm)
    {
        if (GreatRedSpotDialogForm->objectName().isEmpty())
            GreatRedSpotDialogForm->setObjectName(QStringLiteral("GreatRedSpotDialogForm"));
        GreatRedSpotDialogForm->resize(327, 201);
        verticalLayout = new QVBoxLayout(GreatRedSpotDialogForm);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        TitleBar = new BarFrame(GreatRedSpotDialogForm);
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

        greatRedSpotGroupBox = new QGroupBox(GreatRedSpotDialogForm);
        greatRedSpotGroupBox->setObjectName(QStringLiteral("greatRedSpotGroupBox"));
        greatRedSpotGroupBox->setEnabled(true);
        gridLayout = new QGridLayout(greatRedSpotGroupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 4, 0, 1, 1);

        driftDoubleSpinBox = new QDoubleSpinBox(greatRedSpotGroupBox);
        driftDoubleSpinBox->setObjectName(QStringLiteral("driftDoubleSpinBox"));
        driftDoubleSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        driftDoubleSpinBox->setDecimals(5);
        driftDoubleSpinBox->setMinimum(-90);
        driftDoubleSpinBox->setMaximum(90);
        driftDoubleSpinBox->setSingleStep(0.0001);
        driftDoubleSpinBox->setValue(15.2188);

        gridLayout->addWidget(driftDoubleSpinBox, 1, 1, 1, 1);

        jdDateTimeEdit = new QDateTimeEdit(greatRedSpotGroupBox);
        jdDateTimeEdit->setObjectName(QStringLiteral("jdDateTimeEdit"));
        jdDateTimeEdit->setInputMethodHints(Qt::ImhDate|Qt::ImhPreferNumbers|Qt::ImhTime);
        jdDateTimeEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        jdDateTimeEdit->setCalendarPopup(true);

        gridLayout->addWidget(jdDateTimeEdit, 2, 1, 1, 1);

        driftLabel = new QLabel(greatRedSpotGroupBox);
        driftLabel->setObjectName(QStringLiteral("driftLabel"));
        driftLabel->setInputMethodHints(Qt::ImhNone);
        driftLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(driftLabel, 1, 0, 1, 1);

        longitudeLabel = new QLabel(greatRedSpotGroupBox);
        longitudeLabel->setObjectName(QStringLiteral("longitudeLabel"));

        gridLayout->addWidget(longitudeLabel, 0, 0, 1, 1);

        longitudeSpinBox = new QSpinBox(greatRedSpotGroupBox);
        longitudeSpinBox->setObjectName(QStringLiteral("longitudeSpinBox"));
        longitudeSpinBox->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        longitudeSpinBox->setMaximum(359);
        longitudeSpinBox->setValue(216);

        gridLayout->addWidget(longitudeSpinBox, 0, 1, 1, 1);

        jdLabel = new QLabel(greatRedSpotGroupBox);
        jdLabel->setObjectName(QStringLiteral("jdLabel"));

        gridLayout->addWidget(jdLabel, 2, 0, 1, 1);

        recentGrsMeasurementPushButton = new QPushButton(greatRedSpotGroupBox);
        recentGrsMeasurementPushButton->setObjectName(QStringLiteral("recentGrsMeasurementPushButton"));
        recentGrsMeasurementPushButton->setFlat(false);

        gridLayout->addWidget(recentGrsMeasurementPushButton, 3, 0, 1, 2);


        verticalLayout->addWidget(greatRedSpotGroupBox);


        retranslateUi(GreatRedSpotDialogForm);

        QMetaObject::connectSlotsByName(GreatRedSpotDialogForm);
    } // setupUi

    void retranslateUi(QWidget *GreatRedSpotDialogForm)
    {
        stelWindowTitle->setText(QApplication::translate("GreatRedSpotDialogForm", "Great Red Spot Details", 0));
        closeStelWindow->setText(QString());
        greatRedSpotGroupBox->setTitle(QApplication::translate("GreatRedSpotDialogForm", "Custom settings for position of GRS", 0));
        jdDateTimeEdit->setDisplayFormat(QApplication::translate("GreatRedSpotDialogForm", "yyyy.MM.dd hh:mm", 0));
        driftLabel->setText(QApplication::translate("GreatRedSpotDialogForm", "Annual drift (degrees):", 0));
        longitudeLabel->setText(QApplication::translate("GreatRedSpotDialogForm", "Longitude of GRS (degrees):", 0));
#ifndef QT_NO_TOOLTIP
        jdLabel->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        jdLabel->setWhatsThis(QApplication::translate("GreatRedSpotDialogForm", "Extinction is the loss of star brightness due to Earth's atmosphere. It is given in mag/airmass, where airmass is number of atmospheres light has to pass. (zenith: 1; horizon: about 40)", 0));
#endif // QT_NO_WHATSTHIS
        jdLabel->setText(QApplication::translate("GreatRedSpotDialogForm", "Date and Time (UTC):", 0));
#ifndef QT_NO_TOOLTIP
        recentGrsMeasurementPushButton->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        recentGrsMeasurementPushButton->setText(QApplication::translate("GreatRedSpotDialogForm", "Get the recent GRS measurement", 0));
        Q_UNUSED(GreatRedSpotDialogForm);
    } // retranslateUi

};

namespace Ui {
    class GreatRedSpotDialogForm: public Ui_GreatRedSpotDialogForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GREATREDSPOTDIALOG_H
