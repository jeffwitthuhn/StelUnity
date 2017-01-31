/********************************************************************************
** Form generated from reading UI file 'scenery3dDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCENERY3DDIALOG_H
#define UI_SCENERY3DDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Dialog.hpp"

QT_BEGIN_NAMESPACE

class Ui_scenery3dDialogForm
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
    QVBoxLayout *verticalLayout_5;
    QWidget *widget;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QTextBrowser *scenery3dTextBrowser;
    QListWidget *scenery3dListWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkBoxDefaultScene;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButtonOpenStoredViewDialog;
    QSpacerItem *horizontalSpacer;
    QTabWidget *tabWidget;
    QWidget *tab;
    QFormLayout *formLayout_4;
    QLabel *labelTorchStrength;
    QSlider *sliderTorchStrength;
    QLabel *label_4;
    QSlider *sliderTorchRange;
    QCheckBox *checkBoxTorchlight;
    QCheckBox *checkBoxShowGridCoordinates;
    QWidget *tab_2;
    QHBoxLayout *horizontalLayout_2;
    QFormLayout *formLayout;
    QCheckBox *checkBoxEnablePixelLight;
    QCheckBox *checkBoxEnableShadows;
    QFormLayout *formLayout_6;
    QCheckBox *checkBoxSimpleShadows;
    QCheckBox *checkBoxEnableBump;
    QLabel *label_5;
    QComboBox *comboBoxCubemapSize;
    QLabel *labelShadowmapSize;
    QComboBox *comboBoxShadowmapSize;
    QLabel *labelFilterQuality;
    QComboBox *comboBoxShadowFiltering;
    QFormLayout *formLayout_5;
    QCheckBox *checkBoxPCSS;
    QFormLayout *formLayout_2;
    QLabel *label_3;
    QComboBox *comboBoxCubemapMode;
    QCheckBox *checkBoxCubemapShadows;
    QCheckBox *checkBoxEnableLazyDrawing;
    QFormLayout *formLayout_3;
    QLabel *labelLazyDrawingInterval;
    QDoubleSpinBox *spinLazyDrawingInterval;
    QCheckBox *checkBoxDominantFace;
    QCheckBox *checkBoxSecondDominantFace;

    void setupUi(QWidget *scenery3dDialogForm)
    {
        if (scenery3dDialogForm->objectName().isEmpty())
            scenery3dDialogForm->setObjectName(QStringLiteral("scenery3dDialogForm"));
        scenery3dDialogForm->resize(831, 550);
        QFont font;
        scenery3dDialogForm->setFont(font);
        scenery3dDialogForm->setAutoFillBackground(false);
        scenery3dDialogForm->setStyleSheet(QStringLiteral(""));
        vboxLayout = new QVBoxLayout(scenery3dDialogForm);
        vboxLayout->setSpacing(0);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        TitleBar = new BarFrame(scenery3dDialogForm);
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

        viewContent = new QFrame(scenery3dDialogForm);
        viewContent->setObjectName(QStringLiteral("viewContent"));
        viewContent->setFrameShape(QFrame::StyledPanel);
        verticalLayout_5 = new QVBoxLayout(viewContent);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(viewContent);
        widget->setObjectName(QStringLiteral("widget"));
        gridLayout_3 = new QGridLayout(widget);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        scenery3dTextBrowser = new QTextBrowser(widget);
        scenery3dTextBrowser->setObjectName(QStringLiteral("scenery3dTextBrowser"));
        scenery3dTextBrowser->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(scenery3dTextBrowser->sizePolicy().hasHeightForWidth());
        scenery3dTextBrowser->setSizePolicy(sizePolicy1);
        QFont font2;
        font2.setPointSize(10);
        scenery3dTextBrowser->setFont(font2);
        scenery3dTextBrowser->setFrameShape(QFrame::StyledPanel);
        scenery3dTextBrowser->setLineWidth(1);
        scenery3dTextBrowser->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        scenery3dTextBrowser->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scenery3dTextBrowser->setHtml(QLatin1String("<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:9pt;\"><br /></p></body></html>"));
        scenery3dTextBrowser->setOpenExternalLinks(true);

        gridLayout_2->addWidget(scenery3dTextBrowser, 0, 1, 1, 1);

        scenery3dListWidget = new QListWidget(widget);
        scenery3dListWidget->setObjectName(QStringLiteral("scenery3dListWidget"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(scenery3dListWidget->sizePolicy().hasHeightForWidth());
        scenery3dListWidget->setSizePolicy(sizePolicy2);
        scenery3dListWidget->setMinimumSize(QSize(180, 0));
        scenery3dListWidget->setMaximumSize(QSize(120, 16777215));
        scenery3dListWidget->setFocusPolicy(Qt::NoFocus);
        scenery3dListWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        gridLayout_2->addWidget(scenery3dListWidget, 0, 0, 2, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(3, 3, 3, 3);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        checkBoxDefaultScene = new QCheckBox(widget);
        checkBoxDefaultScene->setObjectName(QStringLiteral("checkBoxDefaultScene"));

        horizontalLayout->addWidget(checkBoxDefaultScene);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        pushButtonOpenStoredViewDialog = new QPushButton(widget);
        pushButtonOpenStoredViewDialog->setObjectName(QStringLiteral("pushButtonOpenStoredViewDialog"));

        horizontalLayout->addWidget(pushButtonOpenStoredViewDialog);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        tabWidget = new QTabWidget(widget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy3);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        formLayout_4 = new QFormLayout(tab);
        formLayout_4->setObjectName(QStringLiteral("formLayout_4"));
        formLayout_4->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        labelTorchStrength = new QLabel(tab);
        labelTorchStrength->setObjectName(QStringLiteral("labelTorchStrength"));

        formLayout_4->setWidget(1, QFormLayout::LabelRole, labelTorchStrength);

        sliderTorchStrength = new QSlider(tab);
        sliderTorchStrength->setObjectName(QStringLiteral("sliderTorchStrength"));
        sliderTorchStrength->setMaximum(100);
        sliderTorchStrength->setOrientation(Qt::Horizontal);

        formLayout_4->setWidget(1, QFormLayout::FieldRole, sliderTorchStrength);

        label_4 = new QLabel(tab);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout_4->setWidget(2, QFormLayout::LabelRole, label_4);

        sliderTorchRange = new QSlider(tab);
        sliderTorchRange->setObjectName(QStringLiteral("sliderTorchRange"));
        sliderTorchRange->setMaximum(10000);
        sliderTorchRange->setSingleStep(100);
        sliderTorchRange->setPageStep(1000);
        sliderTorchRange->setOrientation(Qt::Horizontal);

        formLayout_4->setWidget(2, QFormLayout::FieldRole, sliderTorchRange);

        checkBoxTorchlight = new QCheckBox(tab);
        checkBoxTorchlight->setObjectName(QStringLiteral("checkBoxTorchlight"));

        formLayout_4->setWidget(0, QFormLayout::SpanningRole, checkBoxTorchlight);

        checkBoxShowGridCoordinates = new QCheckBox(tab);
        checkBoxShowGridCoordinates->setObjectName(QStringLiteral("checkBoxShowGridCoordinates"));

        formLayout_4->setWidget(3, QFormLayout::SpanningRole, checkBoxShowGridCoordinates);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        horizontalLayout_2 = new QHBoxLayout(tab_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        checkBoxEnablePixelLight = new QCheckBox(tab_2);
        checkBoxEnablePixelLight->setObjectName(QStringLiteral("checkBoxEnablePixelLight"));

        formLayout->setWidget(0, QFormLayout::SpanningRole, checkBoxEnablePixelLight);

        checkBoxEnableShadows = new QCheckBox(tab_2);
        checkBoxEnableShadows->setObjectName(QStringLiteral("checkBoxEnableShadows"));
        checkBoxEnableShadows->setEnabled(true);
        checkBoxEnableShadows->setChecked(false);
        checkBoxEnableShadows->setTristate(false);

        formLayout->setWidget(1, QFormLayout::SpanningRole, checkBoxEnableShadows);

        formLayout_6 = new QFormLayout();
        formLayout_6->setObjectName(QStringLiteral("formLayout_6"));
        formLayout_6->setContentsMargins(20, -1, -1, -1);
        checkBoxSimpleShadows = new QCheckBox(tab_2);
        checkBoxSimpleShadows->setObjectName(QStringLiteral("checkBoxSimpleShadows"));

        formLayout_6->setWidget(0, QFormLayout::SpanningRole, checkBoxSimpleShadows);


        formLayout->setLayout(2, QFormLayout::SpanningRole, formLayout_6);

        checkBoxEnableBump = new QCheckBox(tab_2);
        checkBoxEnableBump->setObjectName(QStringLiteral("checkBoxEnableBump"));
        checkBoxEnableBump->setEnabled(true);
        checkBoxEnableBump->setChecked(false);
        checkBoxEnableBump->setTristate(false);

        formLayout->setWidget(3, QFormLayout::SpanningRole, checkBoxEnableBump);

        label_5 = new QLabel(tab_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        comboBoxCubemapSize = new QComboBox(tab_2);
        comboBoxCubemapSize->setObjectName(QStringLiteral("comboBoxCubemapSize"));

        formLayout->setWidget(4, QFormLayout::FieldRole, comboBoxCubemapSize);

        labelShadowmapSize = new QLabel(tab_2);
        labelShadowmapSize->setObjectName(QStringLiteral("labelShadowmapSize"));

        formLayout->setWidget(5, QFormLayout::LabelRole, labelShadowmapSize);

        comboBoxShadowmapSize = new QComboBox(tab_2);
        comboBoxShadowmapSize->setObjectName(QStringLiteral("comboBoxShadowmapSize"));

        formLayout->setWidget(5, QFormLayout::FieldRole, comboBoxShadowmapSize);

        labelFilterQuality = new QLabel(tab_2);
        labelFilterQuality->setObjectName(QStringLiteral("labelFilterQuality"));

        formLayout->setWidget(6, QFormLayout::LabelRole, labelFilterQuality);

        comboBoxShadowFiltering = new QComboBox(tab_2);
        comboBoxShadowFiltering->setObjectName(QStringLiteral("comboBoxShadowFiltering"));

        formLayout->setWidget(6, QFormLayout::FieldRole, comboBoxShadowFiltering);

        formLayout_5 = new QFormLayout();
        formLayout_5->setObjectName(QStringLiteral("formLayout_5"));
        formLayout_5->setContentsMargins(20, -1, -1, -1);
        checkBoxPCSS = new QCheckBox(tab_2);
        checkBoxPCSS->setObjectName(QStringLiteral("checkBoxPCSS"));

        formLayout_5->setWidget(0, QFormLayout::SpanningRole, checkBoxPCSS);


        formLayout->setLayout(7, QFormLayout::SpanningRole, formLayout_5);


        horizontalLayout_2->addLayout(formLayout);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        label_3 = new QLabel(tab_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_3);

        comboBoxCubemapMode = new QComboBox(tab_2);
        comboBoxCubemapMode->setObjectName(QStringLiteral("comboBoxCubemapMode"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, comboBoxCubemapMode);

        checkBoxCubemapShadows = new QCheckBox(tab_2);
        checkBoxCubemapShadows->setObjectName(QStringLiteral("checkBoxCubemapShadows"));

        formLayout_2->setWidget(1, QFormLayout::SpanningRole, checkBoxCubemapShadows);

        checkBoxEnableLazyDrawing = new QCheckBox(tab_2);
        checkBoxEnableLazyDrawing->setObjectName(QStringLiteral("checkBoxEnableLazyDrawing"));

        formLayout_2->setWidget(2, QFormLayout::SpanningRole, checkBoxEnableLazyDrawing);

        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        formLayout_3->setContentsMargins(20, -1, -1, -1);
        labelLazyDrawingInterval = new QLabel(tab_2);
        labelLazyDrawingInterval->setObjectName(QStringLiteral("labelLazyDrawingInterval"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, labelLazyDrawingInterval);

        spinLazyDrawingInterval = new QDoubleSpinBox(tab_2);
        spinLazyDrawingInterval->setObjectName(QStringLiteral("spinLazyDrawingInterval"));
        spinLazyDrawingInterval->setMinimum(0.1);
        spinLazyDrawingInterval->setMaximum(600);
        spinLazyDrawingInterval->setSingleStep(0.1);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, spinLazyDrawingInterval);

        checkBoxDominantFace = new QCheckBox(tab_2);
        checkBoxDominantFace->setObjectName(QStringLiteral("checkBoxDominantFace"));

        formLayout_3->setWidget(1, QFormLayout::SpanningRole, checkBoxDominantFace);

        checkBoxSecondDominantFace = new QCheckBox(tab_2);
        checkBoxSecondDominantFace->setObjectName(QStringLiteral("checkBoxSecondDominantFace"));
        checkBoxSecondDominantFace->setEnabled(true);

        formLayout_3->setWidget(2, QFormLayout::SpanningRole, checkBoxSecondDominantFace);


        formLayout_2->setLayout(3, QFormLayout::SpanningRole, formLayout_3);


        horizontalLayout_2->addLayout(formLayout_2);

        tabWidget->addTab(tab_2, QString());

        verticalLayout->addWidget(tabWidget);


        gridLayout_2->addLayout(verticalLayout, 1, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 2, 1, 1);


        verticalLayout_5->addWidget(widget);


        vboxLayout->addWidget(viewContent);

#ifndef QT_NO_SHORTCUT
        labelTorchStrength->setBuddy(sliderTorchStrength);
        label_4->setBuddy(sliderTorchRange);
        label_5->setBuddy(comboBoxCubemapSize);
        labelShadowmapSize->setBuddy(comboBoxShadowmapSize);
        labelFilterQuality->setBuddy(comboBoxShadowFiltering);
        label_3->setBuddy(comboBoxCubemapMode);
        labelLazyDrawingInterval->setBuddy(spinLazyDrawingInterval);
#endif // QT_NO_SHORTCUT

        retranslateUi(scenery3dDialogForm);

        tabWidget->setCurrentIndex(0);
        comboBoxShadowmapSize->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(scenery3dDialogForm);
    } // setupUi

    void retranslateUi(QWidget *scenery3dDialogForm)
    {
        stelWindowTitle->setText(QApplication::translate("scenery3dDialogForm", "3D Scenery", 0));
        closeStelWindow->setText(QString());
        checkBoxDefaultScene->setText(QApplication::translate("scenery3dDialogForm", "Set as default scene", 0));
        pushButtonOpenStoredViewDialog->setText(QApplication::translate("scenery3dDialogForm", "Load/save viewpoints", 0));
        labelTorchStrength->setText(QApplication::translate("scenery3dDialogForm", "Torch strength:", 0));
        label_4->setText(QApplication::translate("scenery3dDialogForm", "Torch range:", 0));
        checkBoxTorchlight->setText(QApplication::translate("scenery3dDialogForm", "Torchlight (%1)", 0));
        checkBoxShowGridCoordinates->setText(QApplication::translate("scenery3dDialogForm", "Show grid coordinates (%1)", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("scenery3dDialogForm", "Visual options", 0));
        checkBoxEnablePixelLight->setText(QApplication::translate("scenery3dDialogForm", "Per-Pixel lighting", 0));
        checkBoxEnableShadows->setText(QApplication::translate("scenery3dDialogForm", "Shadows", 0));
        checkBoxSimpleShadows->setText(QApplication::translate("scenery3dDialogForm", "Simple shadows", 0));
        checkBoxEnableBump->setText(QApplication::translate("scenery3dDialogForm", "Bump mapping", 0));
        label_5->setText(QApplication::translate("scenery3dDialogForm", "Cubemap size:", 0));
        labelShadowmapSize->setText(QApplication::translate("scenery3dDialogForm", "Shadowmap size:", 0));
        labelFilterQuality->setText(QApplication::translate("scenery3dDialogForm", "Filtering Quality:", 0));
        comboBoxShadowFiltering->clear();
        comboBoxShadowFiltering->insertItems(0, QStringList()
         << QApplication::translate("scenery3dDialogForm", "Off", 0)
         << QApplication::translate("scenery3dDialogForm", "Hardware", 0)
         << QApplication::translate("scenery3dDialogForm", "Low", 0)
         << QApplication::translate("scenery3dDialogForm", "Low + Hardware", 0)
         << QApplication::translate("scenery3dDialogForm", "High (slow)", 0)
         << QApplication::translate("scenery3dDialogForm", "High + Hardware (slow)", 0)
        );
        checkBoxPCSS->setText(QApplication::translate("scenery3dDialogForm", "PCSS", 0));
        label_3->setText(QApplication::translate("scenery3dDialogForm", "Cubemapping mode:", 0));
        checkBoxCubemapShadows->setText(QApplication::translate("scenery3dDialogForm", "Full cubemap shadows", 0));
        checkBoxEnableLazyDrawing->setText(QApplication::translate("scenery3dDialogForm", "Lazy cubemap re-rendering", 0));
        labelLazyDrawingInterval->setText(QApplication::translate("scenery3dDialogForm", "Interval:", 0));
        checkBoxDominantFace->setText(QApplication::translate("scenery3dDialogForm", "Only update dominant face when moving", 0));
        checkBoxSecondDominantFace->setText(QApplication::translate("scenery3dDialogForm", "Also update second-most dominant face", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("scenery3dDialogForm", "Quality/Performance settings", 0));
        Q_UNUSED(scenery3dDialogForm);
    } // retranslateUi

};

namespace Ui {
    class scenery3dDialogForm: public Ui_scenery3dDialogForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCENERY3DDIALOG_H
