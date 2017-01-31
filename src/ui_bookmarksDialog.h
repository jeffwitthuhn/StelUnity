/********************************************************************************
** Form generated from reading UI file 'bookmarksDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOKMARKSDIALOG_H
#define UI_BOOKMARKSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Dialog.hpp"

QT_BEGIN_NAMESPACE

class Ui_bookmarksDialogForm
{
public:
    QGridLayout *gridLayout_2;
    BarFrame *TitleBar;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QLabel *stelWindowTitle;
    QSpacerItem *spacerItem1;
    QPushButton *closeStelWindow;
    QWidget *widget;
    QGridLayout *gridLayout;
    QTreeView *bookmarksTreeView;
    QFrame *frame;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_6;
    QCheckBox *dateTimeCheckBox;
    QCheckBox *locationCheckBox;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *addBookmarkButton;
    QPushButton *removeBookmarkButton;
    QPushButton *clearBookmarksButton;
    QPushButton *goToButton;

    void setupUi(QWidget *bookmarksDialogForm)
    {
        if (bookmarksDialogForm->objectName().isEmpty())
            bookmarksDialogForm->setObjectName(QStringLiteral("bookmarksDialogForm"));
        bookmarksDialogForm->resize(677, 359);
        gridLayout_2 = new QGridLayout(bookmarksDialogForm);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        TitleBar = new BarFrame(bookmarksDialogForm);
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

        widget = new QWidget(bookmarksDialogForm);
        widget->setObjectName(QStringLiteral("widget"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        bookmarksTreeView = new QTreeView(widget);
        bookmarksTreeView->setObjectName(QStringLiteral("bookmarksTreeView"));

        gridLayout->addWidget(bookmarksTreeView, 0, 0, 1, 1);

        frame = new QFrame(widget);
        frame->setObjectName(QStringLiteral("frame"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        dateTimeCheckBox = new QCheckBox(frame);
        dateTimeCheckBox->setObjectName(QStringLiteral("dateTimeCheckBox"));

        horizontalLayout_6->addWidget(dateTimeCheckBox);

        locationCheckBox = new QCheckBox(frame);
        locationCheckBox->setObjectName(QStringLiteral("locationCheckBox"));

        horizontalLayout_6->addWidget(locationCheckBox);


        verticalLayout_4->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        addBookmarkButton = new QPushButton(frame);
        addBookmarkButton->setObjectName(QStringLiteral("addBookmarkButton"));

        horizontalLayout_7->addWidget(addBookmarkButton);

        removeBookmarkButton = new QPushButton(frame);
        removeBookmarkButton->setObjectName(QStringLiteral("removeBookmarkButton"));

        horizontalLayout_7->addWidget(removeBookmarkButton);

        clearBookmarksButton = new QPushButton(frame);
        clearBookmarksButton->setObjectName(QStringLiteral("clearBookmarksButton"));

        horizontalLayout_7->addWidget(clearBookmarksButton);

        goToButton = new QPushButton(frame);
        goToButton->setObjectName(QStringLiteral("goToButton"));

        horizontalLayout_7->addWidget(goToButton);


        verticalLayout_4->addLayout(horizontalLayout_7);


        gridLayout->addWidget(frame, 1, 0, 1, 1);


        gridLayout_2->addWidget(widget, 1, 0, 1, 1);


        retranslateUi(bookmarksDialogForm);

        QMetaObject::connectSlotsByName(bookmarksDialogForm);
    } // setupUi

    void retranslateUi(QWidget *bookmarksDialogForm)
    {
        stelWindowTitle->setText(QApplication::translate("bookmarksDialogForm", "Bookmarks", 0));
        closeStelWindow->setText(QString());
        dateTimeCheckBox->setText(QApplication::translate("bookmarksDialogForm", "Add date and time", 0));
        locationCheckBox->setText(QApplication::translate("bookmarksDialogForm", "Add location", 0));
#ifndef QT_NO_TOOLTIP
        addBookmarkButton->setToolTip(QApplication::translate("bookmarksDialogForm", "Add selected object to bookmarks", 0));
#endif // QT_NO_TOOLTIP
        addBookmarkButton->setText(QApplication::translate("bookmarksDialogForm", "&Add bookmark", 0));
        removeBookmarkButton->setText(QApplication::translate("bookmarksDialogForm", "&Remove bookmark", 0));
        clearBookmarksButton->setText(QApplication::translate("bookmarksDialogForm", "Clear bookmarks", 0));
        goToButton->setText(QApplication::translate("bookmarksDialogForm", "&Go to...", 0));
        Q_UNUSED(bookmarksDialogForm);
    } // retranslateUi

};

namespace Ui {
    class bookmarksDialogForm: public Ui_bookmarksDialogForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKMARKSDIALOG_H
