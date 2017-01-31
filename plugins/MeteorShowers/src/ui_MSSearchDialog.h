/********************************************************************************
** Form generated from reading UI file 'MSSearchDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MSSEARCHDIALOG_H
#define UI_MSSEARCHDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Dialog.hpp"

QT_BEGIN_NAMESPACE

class Ui_MSSearchDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    BarFrame *TitleBar;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QLabel *stelWindowTitle;
    QSpacerItem *spacerItem1;
    QPushButton *closeStelWindow;
    QVBoxLayout *verticalLayout;
    QGroupBox *search;
    QHBoxLayout *horizontalLayout;
    QLabel *labelFrom;
    QDateEdit *dateFrom;
    QLabel *labelTo;
    QDateEdit *dateTo;
    QPushButton *searchButton;
    QGroupBox *results;
    QVBoxLayout *verticalLayout_5;
    QTreeWidget *listEvents;

    void setupUi(QWidget *MSSearchDialog)
    {
        if (MSSearchDialog->objectName().isEmpty())
            MSSearchDialog->setObjectName(QStringLiteral("MSSearchDialog"));
        MSSearchDialog->resize(713, 368);
        verticalLayout_2 = new QVBoxLayout(MSSearchDialog);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        TitleBar = new BarFrame(MSSearchDialog);
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

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(8, -1, 8, 4);
        search = new QGroupBox(MSSearchDialog);
        search->setObjectName(QStringLiteral("search"));
        search->setMaximumSize(QSize(16777215, 16777215));
        horizontalLayout = new QHBoxLayout(search);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        labelFrom = new QLabel(search);
        labelFrom->setObjectName(QStringLiteral("labelFrom"));

        horizontalLayout->addWidget(labelFrom);

        dateFrom = new QDateEdit(search);
        dateFrom->setObjectName(QStringLiteral("dateFrom"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(dateFrom->sizePolicy().hasHeightForWidth());
        dateFrom->setSizePolicy(sizePolicy1);
        dateFrom->setCalendarPopup(true);

        horizontalLayout->addWidget(dateFrom);

        labelTo = new QLabel(search);
        labelTo->setObjectName(QStringLiteral("labelTo"));

        horizontalLayout->addWidget(labelTo);

        dateTo = new QDateEdit(search);
        dateTo->setObjectName(QStringLiteral("dateTo"));
        sizePolicy1.setHeightForWidth(dateTo->sizePolicy().hasHeightForWidth());
        dateTo->setSizePolicy(sizePolicy1);
        dateTo->setCalendarPopup(true);

        horizontalLayout->addWidget(dateTo);

        searchButton = new QPushButton(search);
        searchButton->setObjectName(QStringLiteral("searchButton"));
        searchButton->setCheckable(false);

        horizontalLayout->addWidget(searchButton);


        verticalLayout->addWidget(search);

        results = new QGroupBox(MSSearchDialog);
        results->setObjectName(QStringLiteral("results"));
        verticalLayout_5 = new QVBoxLayout(results);
        verticalLayout_5->setSpacing(4);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(4, 4, 4, 4);
        listEvents = new QTreeWidget(results);
        listEvents->setObjectName(QStringLiteral("listEvents"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(listEvents->sizePolicy().hasHeightForWidth());
        listEvents->setSizePolicy(sizePolicy2);
        listEvents->setMinimumSize(QSize(0, 100));
        listEvents->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listEvents->setEditTriggers(QAbstractItemView::NoEditTriggers);
        listEvents->setRootIsDecorated(false);
        listEvents->setUniformRowHeights(true);
        listEvents->setItemsExpandable(false);
        listEvents->setSortingEnabled(true);
        listEvents->setExpandsOnDoubleClick(false);
        listEvents->setColumnCount(0);
        listEvents->header()->setProperty("showSortIndicator", QVariant(true));

        verticalLayout_5->addWidget(listEvents);


        verticalLayout->addWidget(results);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(MSSearchDialog);

        searchButton->setDefault(false);


        QMetaObject::connectSlotsByName(MSSearchDialog);
    } // setupUi

    void retranslateUi(QWidget *MSSearchDialog)
    {
        MSSearchDialog->setWindowTitle(QApplication::translate("MSSearchDialog", "Meteor Showers Configuration", 0));
        stelWindowTitle->setText(QApplication::translate("MSSearchDialog", "Meteor Showers: Search", 0));
        closeStelWindow->setText(QString());
        search->setTitle(QApplication::translate("MSSearchDialog", "Search", 0));
        labelFrom->setText(QApplication::translate("MSSearchDialog", "From:", 0));
        dateFrom->setDisplayFormat(QApplication::translate("MSSearchDialog", "dd/MM/yyyy", 0));
        labelTo->setText(QApplication::translate("MSSearchDialog", "To:", 0));
        dateTo->setDisplayFormat(QApplication::translate("MSSearchDialog", "dd/MM/yyyy", 0));
        searchButton->setText(QApplication::translate("MSSearchDialog", "Search", 0));
        results->setTitle(QApplication::translate("MSSearchDialog", "Results", 0));
    } // retranslateUi

};

namespace Ui {
    class MSSearchDialog: public Ui_MSSearchDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MSSEARCHDIALOG_H
