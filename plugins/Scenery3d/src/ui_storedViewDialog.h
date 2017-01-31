/********************************************************************************
** Form generated from reading UI file 'storedViewDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STOREDVIEWDIALOG_H
#define UI_STOREDVIEWDIALOG_H

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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Dialog.hpp"
#include "StoredViewDialog_p.hpp"

QT_BEGIN_NAMESPACE

class Ui_storedViewDialogForm
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
    QGridLayout *gridLayout;
    QWidget *widget;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout;
    QListView *listView;
    QPushButton *pushButtonLoadView;
    QPushButton *pushButtonDeleteView;
    QPushButton *pushButtonAddView;
    QCheckBox *useDateCheckBox;
    QGridLayout *gridLayout_2;
    QLineEdit *lineEditTitle;
    QLabel *label;
    QLabel *label_2;
    CustomTextEdit *textEditDescription;

    void setupUi(QWidget *storedViewDialogForm)
    {
        if (storedViewDialogForm->objectName().isEmpty())
            storedViewDialogForm->setObjectName(QStringLiteral("storedViewDialogForm"));
        storedViewDialogForm->resize(349, 359);
        QFont font;
        storedViewDialogForm->setFont(font);
        storedViewDialogForm->setAutoFillBackground(false);
        storedViewDialogForm->setStyleSheet(QStringLiteral(""));
        vboxLayout = new QVBoxLayout(storedViewDialogForm);
        vboxLayout->setSpacing(0);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        TitleBar = new BarFrame(storedViewDialogForm);
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

        viewContent = new QFrame(storedViewDialogForm);
        viewContent->setObjectName(QStringLiteral("viewContent"));
        viewContent->setFrameShape(QFrame::StyledPanel);
        gridLayout = new QGridLayout(viewContent);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        widget = new QWidget(viewContent);
        widget->setObjectName(QStringLiteral("widget"));
        gridLayout_3 = new QGridLayout(widget);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        listView = new QListView(widget);
        listView->setObjectName(QStringLiteral("listView"));

        verticalLayout->addWidget(listView);

        pushButtonLoadView = new QPushButton(widget);
        pushButtonLoadView->setObjectName(QStringLiteral("pushButtonLoadView"));
        pushButtonLoadView->setEnabled(false);

        verticalLayout->addWidget(pushButtonLoadView);

        pushButtonDeleteView = new QPushButton(widget);
        pushButtonDeleteView->setObjectName(QStringLiteral("pushButtonDeleteView"));
        pushButtonDeleteView->setEnabled(false);

        verticalLayout->addWidget(pushButtonDeleteView);

        pushButtonAddView = new QPushButton(widget);
        pushButtonAddView->setObjectName(QStringLiteral("pushButtonAddView"));
        pushButtonAddView->setEnabled(false);

        verticalLayout->addWidget(pushButtonAddView);

        useDateCheckBox = new QCheckBox(widget);
        useDateCheckBox->setObjectName(QStringLiteral("useDateCheckBox"));

        verticalLayout->addWidget(useDateCheckBox);


        gridLayout_3->addLayout(verticalLayout, 0, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        lineEditTitle = new QLineEdit(widget);
        lineEditTitle->setObjectName(QStringLiteral("lineEditTitle"));
        lineEditTitle->setReadOnly(true);

        gridLayout_2->addWidget(lineEditTitle, 2, 0, 1, 1);

        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 1, 0, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 3, 0, 1, 1);

        textEditDescription = new CustomTextEdit(widget);
        textEditDescription->setObjectName(QStringLiteral("textEditDescription"));

        gridLayout_2->addWidget(textEditDescription, 4, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 1, 1, 1);


        gridLayout->addWidget(widget, 0, 0, 1, 1);


        vboxLayout->addWidget(viewContent);


        retranslateUi(storedViewDialogForm);

        QMetaObject::connectSlotsByName(storedViewDialogForm);
    } // setupUi

    void retranslateUi(QWidget *storedViewDialogForm)
    {
        stelWindowTitle->setText(QApplication::translate("storedViewDialogForm", "Stored views", 0));
        closeStelWindow->setText(QString());
        pushButtonLoadView->setText(QApplication::translate("storedViewDialogForm", "Load view", 0));
        pushButtonDeleteView->setText(QApplication::translate("storedViewDialogForm", "Delete view", 0));
        pushButtonAddView->setText(QApplication::translate("storedViewDialogForm", "Add current view", 0));
        useDateCheckBox->setText(QApplication::translate("storedViewDialogForm", "Load/store with date", 0));
        label->setText(QApplication::translate("storedViewDialogForm", "Title:", 0));
        label_2->setText(QApplication::translate("storedViewDialogForm", "Description:", 0));
        Q_UNUSED(storedViewDialogForm);
    } // retranslateUi

};

namespace Ui {
    class storedViewDialogForm: public Ui_storedViewDialogForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STOREDVIEWDIALOG_H
