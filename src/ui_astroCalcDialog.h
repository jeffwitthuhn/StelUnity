/********************************************************************************
** Form generated from reading UI file 'astroCalcDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ASTROCALCDIALOG_H
#define UI_ASTROCALCDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Dialog.hpp"
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_astroCalcDialogForm
{
public:
    QGridLayout *gridLayout_2;
    QFrame *viewContent;
    QVBoxLayout *verticalLayout_2;
    QListWidget *stackListWidget;
    QStackedWidget *stackedWidget;
    QWidget *stackedWidgetPage1;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_10;
    QLabel *positionsTimeLabel;
    QTreeWidget *planetaryPositionsTreeWidget;
    QPushButton *planetaryPositionsUpdateButton;
    QWidget *stackedWidgetPage2;
    QGridLayout *gridLayout_3;
    QCheckBox *ephemerisShowDatesCheckBox;
    QTreeWidget *ephemerisTreeWidget;
    QCheckBox *ephemerisShowMarkersCheckBox;
    QHBoxLayout *horizontalLayout;
    QLabel *celestialBodyName;
    QComboBox *celestialBodyComboBox;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *ephemerisCleanupButton;
    QPushButton *ephemerisPushButton;
    QPushButton *ephemerisSaveButton;
    QHBoxLayout *horizontalLayout_2;
    QLabel *ephemerisStepLabel;
    QComboBox *ephemerisStepComboBox;
    QHBoxLayout *horizontalLayout_4;
    QLabel *dateToLabel;
    QDateTimeEdit *dateToDateTimeEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *dateFromLabel;
    QDateTimeEdit *dateFromDateTimeEdit;
    QWidget *stackedWidgetPage3;
    QGridLayout *gridLayout_4;
    QTreeWidget *phenomenaTreeWidget;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *phenomenaPushButton;
    QPushButton *phenomenaSaveButton;
    QHBoxLayout *horizontalLayout_6;
    QLabel *phenomenFromLabel;
    QDateEdit *phenomenFromDateEdit;
    QHBoxLayout *horizontalLayout_5;
    QLabel *betweenObjectsLabel;
    QComboBox *object1ComboBox;
    QLabel *andLabel;
    QComboBox *object2ComboBox;
    QHBoxLayout *horizontalLayout_7;
    QLabel *phenomenToLabel;
    QDateEdit *phenomenToDateEdit;
    QHBoxLayout *horizontalLayout_8;
    QLabel *allowedSeparationLabel;
    QDoubleSpinBox *allowedSeparationDoubleSpinBox;
    QWidget *stackedWidgetPage4;
    QGridLayout *gridLayout_5;
    QCustomPlot *altVsTimePlot;
    QLabel *altVsTimeLabel;
    BarFrame *TitleBar;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QLabel *stelWindowTitle;
    QSpacerItem *spacerItem1;
    QPushButton *closeStelWindow;

    void setupUi(QWidget *astroCalcDialogForm)
    {
        if (astroCalcDialogForm->objectName().isEmpty())
            astroCalcDialogForm->setObjectName(QStringLiteral("astroCalcDialogForm"));
        astroCalcDialogForm->resize(696, 399);
        gridLayout_2 = new QGridLayout(astroCalcDialogForm);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        viewContent = new QFrame(astroCalcDialogForm);
        viewContent->setObjectName(QStringLiteral("viewContent"));
        viewContent->setFrameShape(QFrame::StyledPanel);
        viewContent->setFrameShadow(QFrame::Plain);
        verticalLayout_2 = new QVBoxLayout(viewContent);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        stackListWidget = new QListWidget(viewContent);
        QIcon icon;
        icon.addFile(QStringLiteral(":/graphicGui/tabicon-AstroCalc-PlanetPos.png"), QSize(), QIcon::Normal, QIcon::On);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(stackListWidget);
        __qlistwidgetitem->setTextAlignment(Qt::AlignLeading|Qt::AlignVCenter);
        __qlistwidgetitem->setIcon(icon);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/graphicGui/tabicon-AstroCalc-Ephemeris.png"), QSize(), QIcon::Normal, QIcon::On);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(stackListWidget);
        __qlistwidgetitem1->setTextAlignment(Qt::AlignLeading|Qt::AlignVCenter);
        __qlistwidgetitem1->setIcon(icon1);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/graphicGui/tabicon-AstroCalc-Phenomena.png"), QSize(), QIcon::Normal, QIcon::On);
        QListWidgetItem *__qlistwidgetitem2 = new QListWidgetItem(stackListWidget);
        __qlistwidgetitem2->setIcon(icon2);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/graphicGui/tabicon-AstroCalc-AltVsTime.png"), QSize(), QIcon::Normal, QIcon::On);
        QListWidgetItem *__qlistwidgetitem3 = new QListWidgetItem(stackListWidget);
        __qlistwidgetitem3->setIcon(icon3);
        stackListWidget->setObjectName(QStringLiteral("stackListWidget"));
        stackListWidget->setMinimumSize(QSize(0, 72));
        stackListWidget->setMaximumSize(QSize(16777215, 72));
        stackListWidget->setFocusPolicy(Qt::NoFocus);
        stackListWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        stackListWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        stackListWidget->setIconSize(QSize(48, 48));
        stackListWidget->setFlow(QListView::LeftToRight);
        stackListWidget->setResizeMode(QListView::Adjust);
        stackListWidget->setViewMode(QListView::IconMode);
        stackListWidget->setSelectionRectVisible(false);

        verticalLayout_2->addWidget(stackListWidget);

        stackedWidget = new QStackedWidget(viewContent);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidgetPage1 = new QWidget();
        stackedWidgetPage1->setObjectName(QStringLiteral("stackedWidgetPage1"));
        verticalLayout = new QVBoxLayout(stackedWidgetPage1);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(-1, 0, -1, -1);
        positionsTimeLabel = new QLabel(stackedWidgetPage1);
        positionsTimeLabel->setObjectName(QStringLiteral("positionsTimeLabel"));
        positionsTimeLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_10->addWidget(positionsTimeLabel);


        verticalLayout->addLayout(horizontalLayout_10);

        planetaryPositionsTreeWidget = new QTreeWidget(stackedWidgetPage1);
        planetaryPositionsTreeWidget->setObjectName(QStringLiteral("planetaryPositionsTreeWidget"));
        planetaryPositionsTreeWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        planetaryPositionsTreeWidget->setRootIsDecorated(false);
        planetaryPositionsTreeWidget->setUniformRowHeights(true);
        planetaryPositionsTreeWidget->setItemsExpandable(false);
        planetaryPositionsTreeWidget->setSortingEnabled(true);
        planetaryPositionsTreeWidget->setExpandsOnDoubleClick(false);
        planetaryPositionsTreeWidget->setColumnCount(0);
        planetaryPositionsTreeWidget->header()->setProperty("showSortIndicator", QVariant(true));

        verticalLayout->addWidget(planetaryPositionsTreeWidget);

        planetaryPositionsUpdateButton = new QPushButton(stackedWidgetPage1);
        planetaryPositionsUpdateButton->setObjectName(QStringLiteral("planetaryPositionsUpdateButton"));

        verticalLayout->addWidget(planetaryPositionsUpdateButton);

        stackedWidget->addWidget(stackedWidgetPage1);
        stackedWidgetPage2 = new QWidget();
        stackedWidgetPage2->setObjectName(QStringLiteral("stackedWidgetPage2"));
        gridLayout_3 = new QGridLayout(stackedWidgetPage2);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        ephemerisShowDatesCheckBox = new QCheckBox(stackedWidgetPage2);
        ephemerisShowDatesCheckBox->setObjectName(QStringLiteral("ephemerisShowDatesCheckBox"));

        gridLayout_3->addWidget(ephemerisShowDatesCheckBox, 2, 1, 1, 1);

        ephemerisTreeWidget = new QTreeWidget(stackedWidgetPage2);
        ephemerisTreeWidget->setObjectName(QStringLiteral("ephemerisTreeWidget"));
        ephemerisTreeWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        ephemerisTreeWidget->setRootIsDecorated(false);
        ephemerisTreeWidget->setUniformRowHeights(true);
        ephemerisTreeWidget->setItemsExpandable(false);
        ephemerisTreeWidget->setSortingEnabled(true);
        ephemerisTreeWidget->setExpandsOnDoubleClick(false);
        ephemerisTreeWidget->setColumnCount(0);

        gridLayout_3->addWidget(ephemerisTreeWidget, 5, 0, 1, 2);

        ephemerisShowMarkersCheckBox = new QCheckBox(stackedWidgetPage2);
        ephemerisShowMarkersCheckBox->setObjectName(QStringLiteral("ephemerisShowMarkersCheckBox"));

        gridLayout_3->addWidget(ephemerisShowMarkersCheckBox, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        celestialBodyName = new QLabel(stackedWidgetPage2);
        celestialBodyName->setObjectName(QStringLiteral("celestialBodyName"));

        horizontalLayout->addWidget(celestialBodyName);

        celestialBodyComboBox = new QComboBox(stackedWidgetPage2);
        celestialBodyComboBox->setObjectName(QStringLiteral("celestialBodyComboBox"));
        celestialBodyComboBox->setEditable(true);
        celestialBodyComboBox->setInsertPolicy(QComboBox::NoInsert);

        horizontalLayout->addWidget(celestialBodyComboBox);


        gridLayout_3->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        ephemerisCleanupButton = new QPushButton(stackedWidgetPage2);
        ephemerisCleanupButton->setObjectName(QStringLiteral("ephemerisCleanupButton"));

        horizontalLayout_11->addWidget(ephemerisCleanupButton);

        ephemerisPushButton = new QPushButton(stackedWidgetPage2);
        ephemerisPushButton->setObjectName(QStringLiteral("ephemerisPushButton"));

        horizontalLayout_11->addWidget(ephemerisPushButton);

        ephemerisSaveButton = new QPushButton(stackedWidgetPage2);
        ephemerisSaveButton->setObjectName(QStringLiteral("ephemerisSaveButton"));

        horizontalLayout_11->addWidget(ephemerisSaveButton);


        gridLayout_3->addLayout(horizontalLayout_11, 4, 0, 1, 2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        ephemerisStepLabel = new QLabel(stackedWidgetPage2);
        ephemerisStepLabel->setObjectName(QStringLiteral("ephemerisStepLabel"));

        horizontalLayout_2->addWidget(ephemerisStepLabel);

        ephemerisStepComboBox = new QComboBox(stackedWidgetPage2);
        ephemerisStepComboBox->setObjectName(QStringLiteral("ephemerisStepComboBox"));
        ephemerisStepComboBox->setEditable(true);
        ephemerisStepComboBox->setInsertPolicy(QComboBox::NoInsert);

        horizontalLayout_2->addWidget(ephemerisStepComboBox);


        gridLayout_3->addLayout(horizontalLayout_2, 0, 1, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        dateToLabel = new QLabel(stackedWidgetPage2);
        dateToLabel->setObjectName(QStringLiteral("dateToLabel"));

        horizontalLayout_4->addWidget(dateToLabel);

        dateToDateTimeEdit = new QDateTimeEdit(stackedWidgetPage2);
        dateToDateTimeEdit->setObjectName(QStringLiteral("dateToDateTimeEdit"));
        dateToDateTimeEdit->setDisplayFormat(QStringLiteral("yyyy.MM.dd hh:mm"));
        dateToDateTimeEdit->setCalendarPopup(true);

        horizontalLayout_4->addWidget(dateToDateTimeEdit);


        gridLayout_3->addLayout(horizontalLayout_4, 1, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        dateFromLabel = new QLabel(stackedWidgetPage2);
        dateFromLabel->setObjectName(QStringLiteral("dateFromLabel"));

        horizontalLayout_3->addWidget(dateFromLabel);

        dateFromDateTimeEdit = new QDateTimeEdit(stackedWidgetPage2);
        dateFromDateTimeEdit->setObjectName(QStringLiteral("dateFromDateTimeEdit"));
        dateFromDateTimeEdit->setDisplayFormat(QStringLiteral("yyyy.MM.dd hh:mm"));
        dateFromDateTimeEdit->setCalendarPopup(true);

        horizontalLayout_3->addWidget(dateFromDateTimeEdit);


        gridLayout_3->addLayout(horizontalLayout_3, 1, 0, 1, 1);

        stackedWidget->addWidget(stackedWidgetPage2);
        stackedWidgetPage3 = new QWidget();
        stackedWidgetPage3->setObjectName(QStringLiteral("stackedWidgetPage3"));
        gridLayout_4 = new QGridLayout(stackedWidgetPage3);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        phenomenaTreeWidget = new QTreeWidget(stackedWidgetPage3);
        phenomenaTreeWidget->setObjectName(QStringLiteral("phenomenaTreeWidget"));
        phenomenaTreeWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        phenomenaTreeWidget->setRootIsDecorated(false);
        phenomenaTreeWidget->setUniformRowHeights(true);
        phenomenaTreeWidget->setItemsExpandable(false);
        phenomenaTreeWidget->setSortingEnabled(true);
        phenomenaTreeWidget->setExpandsOnDoubleClick(false);
        phenomenaTreeWidget->setColumnCount(0);

        gridLayout_4->addWidget(phenomenaTreeWidget, 3, 0, 1, 2);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        phenomenaPushButton = new QPushButton(stackedWidgetPage3);
        phenomenaPushButton->setObjectName(QStringLiteral("phenomenaPushButton"));

        horizontalLayout_9->addWidget(phenomenaPushButton);

        phenomenaSaveButton = new QPushButton(stackedWidgetPage3);
        phenomenaSaveButton->setObjectName(QStringLiteral("phenomenaSaveButton"));

        horizontalLayout_9->addWidget(phenomenaSaveButton);


        gridLayout_4->addLayout(horizontalLayout_9, 2, 1, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        phenomenFromLabel = new QLabel(stackedWidgetPage3);
        phenomenFromLabel->setObjectName(QStringLiteral("phenomenFromLabel"));

        horizontalLayout_6->addWidget(phenomenFromLabel);

        phenomenFromDateEdit = new QDateEdit(stackedWidgetPage3);
        phenomenFromDateEdit->setObjectName(QStringLiteral("phenomenFromDateEdit"));
        phenomenFromDateEdit->setDisplayFormat(QStringLiteral("yyyy.MM.dd"));
        phenomenFromDateEdit->setCalendarPopup(true);

        horizontalLayout_6->addWidget(phenomenFromDateEdit);


        gridLayout_4->addLayout(horizontalLayout_6, 1, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        betweenObjectsLabel = new QLabel(stackedWidgetPage3);
        betweenObjectsLabel->setObjectName(QStringLiteral("betweenObjectsLabel"));

        horizontalLayout_5->addWidget(betweenObjectsLabel);

        object1ComboBox = new QComboBox(stackedWidgetPage3);
        object1ComboBox->setObjectName(QStringLiteral("object1ComboBox"));
        object1ComboBox->setEditable(true);
        object1ComboBox->setInsertPolicy(QComboBox::NoInsert);

        horizontalLayout_5->addWidget(object1ComboBox);

        andLabel = new QLabel(stackedWidgetPage3);
        andLabel->setObjectName(QStringLiteral("andLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(andLabel->sizePolicy().hasHeightForWidth());
        andLabel->setSizePolicy(sizePolicy);
        andLabel->setMinimumSize(QSize(50, 0));
        andLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(andLabel);

        object2ComboBox = new QComboBox(stackedWidgetPage3);
        object2ComboBox->setObjectName(QStringLiteral("object2ComboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(object2ComboBox->sizePolicy().hasHeightForWidth());
        object2ComboBox->setSizePolicy(sizePolicy1);
        object2ComboBox->setEditable(true);
        object2ComboBox->setInsertPolicy(QComboBox::NoInsert);

        horizontalLayout_5->addWidget(object2ComboBox);


        gridLayout_4->addLayout(horizontalLayout_5, 0, 0, 1, 2);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        phenomenToLabel = new QLabel(stackedWidgetPage3);
        phenomenToLabel->setObjectName(QStringLiteral("phenomenToLabel"));

        horizontalLayout_7->addWidget(phenomenToLabel);

        phenomenToDateEdit = new QDateEdit(stackedWidgetPage3);
        phenomenToDateEdit->setObjectName(QStringLiteral("phenomenToDateEdit"));
        phenomenToDateEdit->setDisplayFormat(QStringLiteral("yyyy.MM.dd"));
        phenomenToDateEdit->setCalendarPopup(true);

        horizontalLayout_7->addWidget(phenomenToDateEdit);


        gridLayout_4->addLayout(horizontalLayout_7, 1, 1, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        allowedSeparationLabel = new QLabel(stackedWidgetPage3);
        allowedSeparationLabel->setObjectName(QStringLiteral("allowedSeparationLabel"));

        horizontalLayout_8->addWidget(allowedSeparationLabel);

        allowedSeparationDoubleSpinBox = new QDoubleSpinBox(stackedWidgetPage3);
        allowedSeparationDoubleSpinBox->setObjectName(QStringLiteral("allowedSeparationDoubleSpinBox"));
        allowedSeparationDoubleSpinBox->setDecimals(4);
        allowedSeparationDoubleSpinBox->setMaximum(10);
        allowedSeparationDoubleSpinBox->setValue(1);

        horizontalLayout_8->addWidget(allowedSeparationDoubleSpinBox);


        gridLayout_4->addLayout(horizontalLayout_8, 2, 0, 1, 1);

        stackedWidget->addWidget(stackedWidgetPage3);
        stackedWidgetPage4 = new QWidget();
        stackedWidgetPage4->setObjectName(QStringLiteral("stackedWidgetPage4"));
        gridLayout_5 = new QGridLayout(stackedWidgetPage4);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        altVsTimePlot = new QCustomPlot(stackedWidgetPage4);
        altVsTimePlot->setObjectName(QStringLiteral("altVsTimePlot"));
        altVsTimePlot->setEnabled(true);

        gridLayout_5->addWidget(altVsTimePlot, 0, 0, 1, 2);

        altVsTimeLabel = new QLabel(stackedWidgetPage4);
        altVsTimeLabel->setObjectName(QStringLiteral("altVsTimeLabel"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(altVsTimeLabel->sizePolicy().hasHeightForWidth());
        altVsTimeLabel->setSizePolicy(sizePolicy2);
        altVsTimeLabel->setMaximumSize(QSize(16777215, 30));
        altVsTimeLabel->setAlignment(Qt::AlignCenter);
        altVsTimeLabel->setWordWrap(true);

        gridLayout_5->addWidget(altVsTimeLabel, 1, 0, 1, 2);

        stackedWidget->addWidget(stackedWidgetPage4);

        verticalLayout_2->addWidget(stackedWidget);


        gridLayout_2->addWidget(viewContent, 1, 0, 1, 1);

        TitleBar = new BarFrame(astroCalcDialogForm);
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


        gridLayout_2->addWidget(TitleBar, 0, 0, 1, 1);


        retranslateUi(astroCalcDialogForm);

        stackedWidget->setCurrentIndex(0);
        celestialBodyComboBox->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(astroCalcDialogForm);
    } // setupUi

    void retranslateUi(QWidget *astroCalcDialogForm)
    {

        const bool __sortingEnabled = stackListWidget->isSortingEnabled();
        stackListWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = stackListWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("astroCalcDialogForm", "Positions", 0));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem->setToolTip(QApplication::translate("astroCalcDialogForm", "Planetary positions", 0));
#endif // QT_NO_TOOLTIP
        QListWidgetItem *___qlistwidgetitem1 = stackListWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("astroCalcDialogForm", "Ephemeris", 0));
        QListWidgetItem *___qlistwidgetitem2 = stackListWidget->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("astroCalcDialogForm", "Phenomena", 0));
        QListWidgetItem *___qlistwidgetitem3 = stackListWidget->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("astroCalcDialogForm", "Alt. vs. Time", 0));
#ifndef QT_NO_TOOLTIP
        ___qlistwidgetitem3->setToolTip(QApplication::translate("astroCalcDialogForm", "Altitude vs. Time", 0));
#endif // QT_NO_TOOLTIP
        stackListWidget->setSortingEnabled(__sortingEnabled);

        positionsTimeLabel->setText(QString());
        planetaryPositionsUpdateButton->setText(QApplication::translate("astroCalcDialogForm", "Update of planetary positions", 0));
#ifndef QT_NO_TOOLTIP
        ephemerisShowDatesCheckBox->setToolTip(QApplication::translate("astroCalcDialogForm", "Show dates of positions of current celestial body near markers", 0));
#endif // QT_NO_TOOLTIP
        ephemerisShowDatesCheckBox->setText(QApplication::translate("astroCalcDialogForm", "Show dates of positions", 0));
#ifndef QT_NO_TOOLTIP
        ephemerisShowMarkersCheckBox->setToolTip(QApplication::translate("astroCalcDialogForm", "Show markers of positions of the current celestial body on the sky", 0));
#endif // QT_NO_TOOLTIP
        ephemerisShowMarkersCheckBox->setText(QApplication::translate("astroCalcDialogForm", "Show markers of positions", 0));
        celestialBodyName->setText(QApplication::translate("astroCalcDialogForm", "Celestial body:", 0));
        celestialBodyComboBox->setCurrentText(QString());
        ephemerisCleanupButton->setText(QApplication::translate("astroCalcDialogForm", "Cleanup ephemerides", 0));
        ephemerisPushButton->setText(QApplication::translate("astroCalcDialogForm", "Calculate ephemeris", 0));
        ephemerisSaveButton->setText(QApplication::translate("astroCalcDialogForm", "Save ephemeris", 0));
        ephemerisStepLabel->setText(QApplication::translate("astroCalcDialogForm", "Time step:", 0));
        dateToLabel->setText(QApplication::translate("astroCalcDialogForm", "To:", 0));
        dateFromLabel->setText(QApplication::translate("astroCalcDialogForm", "From:", 0));
        phenomenaPushButton->setText(QApplication::translate("astroCalcDialogForm", "Calculate phenomena", 0));
        phenomenaSaveButton->setText(QApplication::translate("astroCalcDialogForm", "Save phenomena", 0));
        phenomenFromLabel->setText(QApplication::translate("astroCalcDialogForm", "From:", 0));
        betweenObjectsLabel->setText(QApplication::translate("astroCalcDialogForm", "Between objects:", 0));
        andLabel->setText(QApplication::translate("astroCalcDialogForm", "and", 0));
        phenomenToLabel->setText(QApplication::translate("astroCalcDialogForm", "To:", 0));
        allowedSeparationLabel->setText(QApplication::translate("astroCalcDialogForm", "Maximum allowed separation:", 0));
#ifndef QT_NO_TOOLTIP
        allowedSeparationDoubleSpinBox->setToolTip(QApplication::translate("astroCalcDialogForm", "Value in decimal degrees", 0));
#endif // QT_NO_TOOLTIP
        altVsTimeLabel->setText(QApplication::translate("astroCalcDialogForm", "Please select object to plot its graph 'Altitude vs. Time'.", 0));
        stelWindowTitle->setText(QApplication::translate("astroCalcDialogForm", "Astronomical calculations", 0));
        closeStelWindow->setText(QString());
        Q_UNUSED(astroCalcDialogForm);
    } // retranslateUi

};

namespace Ui {
    class astroCalcDialogForm: public Ui_astroCalcDialogForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ASTROCALCDIALOG_H
