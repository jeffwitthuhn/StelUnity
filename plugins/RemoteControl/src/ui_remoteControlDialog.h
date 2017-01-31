/********************************************************************************
** Form generated from reading UI file 'remoteControlDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOTECONTROLDIALOG_H
#define UI_REMOTECONTROLDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Dialog.hpp"

QT_BEGIN_NAMESPACE

class Ui_remoteControlDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    BarFrame *TitleBar;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QLabel *stelWindowTitle;
    QSpacerItem *spacerItem1;
    QPushButton *closeStelWindow;
    QTabWidget *tabs;
    QWidget *settingsTab;
    QFormLayout *formLayout;
    QLabel *label;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *restoreDefaultsButton;
    QPushButton *saveSettingsButton;
    QCheckBox *passwordCheckBox;
    QLabel *label_2;
    QLineEdit *passwordEdit;
    QLabel *label_3;
    QSpinBox *portNumberSpinBox;
    QWidget *restartPanel;
    QVBoxLayout *verticalLayout;
    QLabel *label_4;
    QPushButton *resetButton;
    QCheckBox *enabledCheckbox;
    QCheckBox *activateOnStartCheckBox;
    QLabel *label_RemoteRunningState;
    QWidget *aboutTab;
    QVBoxLayout *verticalLayout_11;
    QTextBrowser *aboutTextBrowser;

    void setupUi(QWidget *remoteControlDialog)
    {
        if (remoteControlDialog->objectName().isEmpty())
            remoteControlDialog->setObjectName(QStringLiteral("remoteControlDialog"));
        remoteControlDialog->resize(530, 358);
        verticalLayout_2 = new QVBoxLayout(remoteControlDialog);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        TitleBar = new BarFrame(remoteControlDialog);
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

        tabs = new QTabWidget(remoteControlDialog);
        tabs->setObjectName(QStringLiteral("tabs"));
        tabs->setDocumentMode(false);
        settingsTab = new QWidget();
        settingsTab->setObjectName(QStringLiteral("settingsTab"));
        formLayout = new QFormLayout(settingsTab);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(settingsTab);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(7, QFormLayout::LabelRole, label);

        verticalSpacer_3 = new QSpacerItem(20, 120, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(14, QFormLayout::LabelRole, verticalSpacer_3);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        restoreDefaultsButton = new QPushButton(settingsTab);
        restoreDefaultsButton->setObjectName(QStringLiteral("restoreDefaultsButton"));
        sizePolicy.setHeightForWidth(restoreDefaultsButton->sizePolicy().hasHeightForWidth());
        restoreDefaultsButton->setSizePolicy(sizePolicy);

        horizontalLayout_7->addWidget(restoreDefaultsButton);

        saveSettingsButton = new QPushButton(settingsTab);
        saveSettingsButton->setObjectName(QStringLiteral("saveSettingsButton"));
        sizePolicy.setHeightForWidth(saveSettingsButton->sizePolicy().hasHeightForWidth());
        saveSettingsButton->setSizePolicy(sizePolicy);

        horizontalLayout_7->addWidget(saveSettingsButton);


        formLayout->setLayout(15, QFormLayout::SpanningRole, horizontalLayout_7);

        passwordCheckBox = new QCheckBox(settingsTab);
        passwordCheckBox->setObjectName(QStringLiteral("passwordCheckBox"));

        formLayout->setWidget(8, QFormLayout::SpanningRole, passwordCheckBox);

        label_2 = new QLabel(settingsTab);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(9, QFormLayout::LabelRole, label_2);

        passwordEdit = new QLineEdit(settingsTab);
        passwordEdit->setObjectName(QStringLiteral("passwordEdit"));

        formLayout->setWidget(9, QFormLayout::FieldRole, passwordEdit);

        label_3 = new QLabel(settingsTab);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font;
        font.setItalic(true);
        label_3->setFont(font);

        formLayout->setWidget(10, QFormLayout::SpanningRole, label_3);

        portNumberSpinBox = new QSpinBox(settingsTab);
        portNumberSpinBox->setObjectName(QStringLiteral("portNumberSpinBox"));
        portNumberSpinBox->setMinimum(1);
        portNumberSpinBox->setMaximum(65535);

        formLayout->setWidget(7, QFormLayout::FieldRole, portNumberSpinBox);

        restartPanel = new QWidget(settingsTab);
        restartPanel->setObjectName(QStringLiteral("restartPanel"));
        verticalLayout = new QVBoxLayout(restartPanel);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_4 = new QLabel(restartPanel);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout->addWidget(label_4);

        resetButton = new QPushButton(restartPanel);
        resetButton->setObjectName(QStringLiteral("resetButton"));

        verticalLayout->addWidget(resetButton);


        formLayout->setWidget(12, QFormLayout::SpanningRole, restartPanel);

        enabledCheckbox = new QCheckBox(settingsTab);
        enabledCheckbox->setObjectName(QStringLiteral("enabledCheckbox"));

        formLayout->setWidget(2, QFormLayout::LabelRole, enabledCheckbox);

        activateOnStartCheckBox = new QCheckBox(settingsTab);
        activateOnStartCheckBox->setObjectName(QStringLiteral("activateOnStartCheckBox"));
        activateOnStartCheckBox->setEnabled(true);

        formLayout->setWidget(2, QFormLayout::FieldRole, activateOnStartCheckBox);

        label_RemoteRunningState = new QLabel(settingsTab);
        label_RemoteRunningState->setObjectName(QStringLiteral("label_RemoteRunningState"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_RemoteRunningState);

        tabs->addTab(settingsTab, QString());
        aboutTab = new QWidget();
        aboutTab->setObjectName(QStringLiteral("aboutTab"));
        verticalLayout_11 = new QVBoxLayout(aboutTab);
        verticalLayout_11->setSpacing(9);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        aboutTextBrowser = new QTextBrowser(aboutTab);
        aboutTextBrowser->setObjectName(QStringLiteral("aboutTextBrowser"));
        aboutTextBrowser->setOpenExternalLinks(true);
        aboutTextBrowser->setOpenLinks(true);

        verticalLayout_11->addWidget(aboutTextBrowser);

        tabs->addTab(aboutTab, QString());

        verticalLayout_2->addWidget(tabs);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(portNumberSpinBox);
        label_2->setBuddy(passwordEdit);
#endif // QT_NO_SHORTCUT

        retranslateUi(remoteControlDialog);

        tabs->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(remoteControlDialog);
    } // setupUi

    void retranslateUi(QWidget *remoteControlDialog)
    {
        remoteControlDialog->setWindowTitle(QApplication::translate("remoteControlDialog", "Remote Control Configuration", 0));
        stelWindowTitle->setText(QApplication::translate("remoteControlDialog", "Remote Control Plug-in Configuration", 0));
        closeStelWindow->setText(QString());
        label->setText(QApplication::translate("remoteControlDialog", "Port Number:", 0));
        restoreDefaultsButton->setText(QApplication::translate("remoteControlDialog", "Restore default settings", 0));
        saveSettingsButton->setText(QApplication::translate("remoteControlDialog", "Save settings as default", 0));
        passwordCheckBox->setText(QApplication::translate("remoteControlDialog", "Access requires authentication", 0));
        label_2->setText(QApplication::translate("remoteControlDialog", "Password", 0));
        label_3->setText(QApplication::translate("remoteControlDialog", "<html><head/><body><p>Note: The user name field in the browser must be left empty. </p><p>The password is transmitted over an insecure channel.</p></body></html>", 0));
        label_4->setText(QApplication::translate("remoteControlDialog", "Your changes require a restart of the server.", 0));
        resetButton->setText(QApplication::translate("remoteControlDialog", "Restart server", 0));
        enabledCheckbox->setText(QApplication::translate("remoteControlDialog", "Server enabled", 0));
        activateOnStartCheckBox->setText(QApplication::translate("remoteControlDialog", "Enable automatically on startup", 0));
        label_RemoteRunningState->setText(QApplication::translate("remoteControlDialog", "Server disabled - or Server listening on IP: aaa.bbb.ccc.ddd", 0));
        tabs->setTabText(tabs->indexOf(settingsTab), QApplication::translate("remoteControlDialog", "Remote Control", 0));
        tabs->setTabText(tabs->indexOf(aboutTab), QApplication::translate("remoteControlDialog", "About", "tab in plugin windows"));
    } // retranslateUi

};

namespace Ui {
    class remoteControlDialog: public Ui_remoteControlDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOTECONTROLDIALOG_H
