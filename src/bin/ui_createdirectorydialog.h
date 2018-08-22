/********************************************************************************
** Form generated from reading UI file 'createdirectorydialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEDIRECTORYDIALOG_H
#define UI_CREATEDIRECTORYDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CreateDirectoryDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *CreateDirectoryDialog)
    {
        if (CreateDirectoryDialog->objectName().isEmpty())
            CreateDirectoryDialog->setObjectName(QString::fromUtf8("CreateDirectoryDialog"));
        CreateDirectoryDialog->resize(401, 99);
        verticalLayout_2 = new QVBoxLayout(CreateDirectoryDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox = new QGroupBox(CreateDirectoryDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        verticalLayout->addWidget(lineEdit);


        verticalLayout_2->addWidget(groupBox);

        buttonBox = new QDialogButtonBox(CreateDirectoryDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(CreateDirectoryDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), CreateDirectoryDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), CreateDirectoryDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(CreateDirectoryDialog);
    } // setupUi

    void retranslateUi(QDialog *CreateDirectoryDialog)
    {
        CreateDirectoryDialog->setWindowTitle(QApplication::translate("CreateDirectoryDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("CreateDirectoryDialog", "Create New Directory", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CreateDirectoryDialog: public Ui_CreateDirectoryDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEDIRECTORYDIALOG_H
