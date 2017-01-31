/********************************************************************************
** Form generated from reading UI file 'storedPointsDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STOREDPOINTSDIALOG_H
#define UI_STOREDPOINTSDIALOG_H

#include <AngleSpinBox.hpp>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Dialog.hpp"

QT_BEGIN_NAMESPACE

class Ui_StoredPoints
{
public:
    QVBoxLayout *verticalLayout_4;
    BarFrame *TitleBar;
    QHBoxLayout *_2;
    QSpacerItem *leftSpacer;
    QLabel *stelWindowTitle;
    QSpacerItem *rightSpacer;
    QPushButton *closeStelWindow;
    QTreeView *treeViewStoredPoints;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButtonCurrent;
    QPushButton *pushButtonCenter;
    QFrame *frame;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelPointName;
    QLineEdit *lineEditStoredPointName;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *labelRA;
    QLabel *labelDec;
    QVBoxLayout *verticalLayout_2;
    AngleSpinBox *spinBoxRA;
    AngleSpinBox *spinBoxDec;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *pushButtonAddPoint;
    QPushButton *pushButtonRemovePoint;
    QPushButton *pushButtonClearList;

    void setupUi(QWidget *StoredPoints)
    {
        if (StoredPoints->objectName().isEmpty())
            StoredPoints->setObjectName(QStringLiteral("StoredPoints"));
        StoredPoints->resize(540, 449);
        verticalLayout_4 = new QVBoxLayout(StoredPoints);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        TitleBar = new BarFrame(StoredPoints);
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
        _2 = new QHBoxLayout(TitleBar);
        _2->setSpacing(6);
        _2->setObjectName(QStringLiteral("_2"));
        _2->setContentsMargins(0, 0, 4, 0);
        leftSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _2->addItem(leftSpacer);

        stelWindowTitle = new QLabel(TitleBar);
        stelWindowTitle->setObjectName(QStringLiteral("stelWindowTitle"));

        _2->addWidget(stelWindowTitle);

        rightSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _2->addItem(rightSpacer);

        closeStelWindow = new QPushButton(TitleBar);
        closeStelWindow->setObjectName(QStringLiteral("closeStelWindow"));
        closeStelWindow->setMinimumSize(QSize(16, 16));
        closeStelWindow->setMaximumSize(QSize(16, 16));
        closeStelWindow->setFocusPolicy(Qt::NoFocus);

        _2->addWidget(closeStelWindow);


        verticalLayout_4->addWidget(TitleBar);

        treeViewStoredPoints = new QTreeView(StoredPoints);
        treeViewStoredPoints->setObjectName(QStringLiteral("treeViewStoredPoints"));

        verticalLayout_4->addWidget(treeViewStoredPoints);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButtonCurrent = new QPushButton(StoredPoints);
        pushButtonCurrent->setObjectName(QStringLiteral("pushButtonCurrent"));

        horizontalLayout_2->addWidget(pushButtonCurrent);

        pushButtonCenter = new QPushButton(StoredPoints);
        pushButtonCenter->setObjectName(QStringLiteral("pushButtonCenter"));

        horizontalLayout_2->addWidget(pushButtonCenter);


        verticalLayout_4->addLayout(horizontalLayout_2);

        frame = new QFrame(StoredPoints);
        frame->setObjectName(QStringLiteral("frame"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy1);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        labelPointName = new QLabel(frame);
        labelPointName->setObjectName(QStringLiteral("labelPointName"));

        horizontalLayout_3->addWidget(labelPointName);

        lineEditStoredPointName = new QLineEdit(frame);
        lineEditStoredPointName->setObjectName(QStringLiteral("lineEditStoredPointName"));

        horizontalLayout_3->addWidget(lineEditStoredPointName);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        labelRA = new QLabel(frame);
        labelRA->setObjectName(QStringLiteral("labelRA"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(labelRA->sizePolicy().hasHeightForWidth());
        labelRA->setSizePolicy(sizePolicy2);

        verticalLayout->addWidget(labelRA);

        labelDec = new QLabel(frame);
        labelDec->setObjectName(QStringLiteral("labelDec"));
        sizePolicy2.setHeightForWidth(labelDec->sizePolicy().hasHeightForWidth());
        labelDec->setSizePolicy(sizePolicy2);

        verticalLayout->addWidget(labelDec);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        spinBoxRA = new AngleSpinBox(frame);
        spinBoxRA->setObjectName(QStringLiteral("spinBoxRA"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(spinBoxRA->sizePolicy().hasHeightForWidth());
        spinBoxRA->setSizePolicy(sizePolicy3);

        verticalLayout_2->addWidget(spinBoxRA);

        spinBoxDec = new AngleSpinBox(frame);
        spinBoxDec->setObjectName(QStringLiteral("spinBoxDec"));
        sizePolicy3.setHeightForWidth(spinBoxDec->sizePolicy().hasHeightForWidth());
        spinBoxDec->setSizePolicy(sizePolicy3);

        verticalLayout_2->addWidget(spinBoxDec);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        pushButtonAddPoint = new QPushButton(frame);
        pushButtonAddPoint->setObjectName(QStringLiteral("pushButtonAddPoint"));

        horizontalLayout_6->addWidget(pushButtonAddPoint);

        pushButtonRemovePoint = new QPushButton(frame);
        pushButtonRemovePoint->setObjectName(QStringLiteral("pushButtonRemovePoint"));

        horizontalLayout_6->addWidget(pushButtonRemovePoint);

        pushButtonClearList = new QPushButton(frame);
        pushButtonClearList->setObjectName(QStringLiteral("pushButtonClearList"));

        horizontalLayout_6->addWidget(pushButtonClearList);


        verticalLayout_3->addLayout(horizontalLayout_6);


        verticalLayout_4->addWidget(frame);

#ifndef QT_NO_SHORTCUT
        labelRA->setBuddy(spinBoxRA);
        labelDec->setBuddy(spinBoxDec);
#endif // QT_NO_SHORTCUT

        retranslateUi(StoredPoints);

        QMetaObject::connectSlotsByName(StoredPoints);
    } // setupUi

    void retranslateUi(QWidget *StoredPoints)
    {
        StoredPoints->setWindowTitle(QString());
        stelWindowTitle->setText(QApplication::translate("StoredPoints", "Points", 0));
        closeStelWindow->setText(QString());
        pushButtonCurrent->setText(QApplication::translate("StoredPoints", "&Current object", 0));
        pushButtonCenter->setText(QApplication::translate("StoredPoints", "Center of the screen", 0));
        labelPointName->setText(QApplication::translate("StoredPoints", "Name:", 0));
        labelRA->setText(QApplication::translate("StoredPoints", "&Right Ascension (J2000):", 0));
        labelDec->setText(QApplication::translate("StoredPoints", "De&clination (J2000):", 0));
        pushButtonAddPoint->setText(QApplication::translate("StoredPoints", "Add point", 0));
        pushButtonRemovePoint->setText(QApplication::translate("StoredPoints", "Remove selected", 0));
        pushButtonClearList->setText(QApplication::translate("StoredPoints", "Clear list", 0));
    } // retranslateUi

};

namespace Ui {
    class StoredPoints: public Ui_StoredPoints {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STOREDPOINTSDIALOG_H
