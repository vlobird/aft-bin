/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHeaderView>
#include <QtGui/QListView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionUpload;
    QAction *actionCreateDirectory;
    QAction *actionUploadDirectory;
    QAction *actionBack;
    QAction *actionGo_Down;
    QAction *actionUpload_Album;
    QAction *actionRename;
    QAction *actionDelete;
    QAction *actionDownload;
    QAction *actionExit;
    QAction *actionRefresh;
    QAction *actionPaste;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QComboBox *storageList;
    QListView *listView;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuNavigate;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(671, 588);
        actionUpload = new QAction(MainWindow);
        actionUpload->setObjectName(QString::fromUtf8("actionUpload"));
        actionCreateDirectory = new QAction(MainWindow);
        actionCreateDirectory->setObjectName(QString::fromUtf8("actionCreateDirectory"));
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("folder-new");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionCreateDirectory->setIcon(icon);
        actionUploadDirectory = new QAction(MainWindow);
        actionUploadDirectory->setObjectName(QString::fromUtf8("actionUploadDirectory"));
        actionBack = new QAction(MainWindow);
        actionBack->setObjectName(QString::fromUtf8("actionBack"));
        QIcon icon1;
        iconThemeName = QString::fromUtf8("go-previous");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon1 = QIcon::fromTheme(iconThemeName);
        } else {
            icon1.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionBack->setIcon(icon1);
        actionGo_Down = new QAction(MainWindow);
        actionGo_Down->setObjectName(QString::fromUtf8("actionGo_Down"));
        QIcon icon2;
        iconThemeName = QString::fromUtf8("go-next");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon2 = QIcon::fromTheme(iconThemeName);
        } else {
            icon2.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionGo_Down->setIcon(icon2);
        actionUpload_Album = new QAction(MainWindow);
        actionUpload_Album->setObjectName(QString::fromUtf8("actionUpload_Album"));
        actionRename = new QAction(MainWindow);
        actionRename->setObjectName(QString::fromUtf8("actionRename"));
        QIcon icon3;
        iconThemeName = QString::fromUtf8("edit-rename");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon3 = QIcon::fromTheme(iconThemeName);
        } else {
            icon3.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionRename->setIcon(icon3);
        actionDelete = new QAction(MainWindow);
        actionDelete->setObjectName(QString::fromUtf8("actionDelete"));
        QIcon icon4;
        iconThemeName = QString::fromUtf8("edit-delete");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon4 = QIcon::fromTheme(iconThemeName);
        } else {
            icon4.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionDelete->setIcon(icon4);
        actionDownload = new QAction(MainWindow);
        actionDownload->setObjectName(QString::fromUtf8("actionDownload"));
        QIcon icon5;
        iconThemeName = QString::fromUtf8("download");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon5 = QIcon::fromTheme(iconThemeName);
        } else {
            icon5.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionDownload->setIcon(icon5);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionRefresh = new QAction(MainWindow);
        actionRefresh->setObjectName(QString::fromUtf8("actionRefresh"));
        QIcon icon6;
        iconThemeName = QString::fromUtf8("view-refresh");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon6 = QIcon::fromTheme(iconThemeName);
        } else {
            icon6.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionRefresh->setIcon(icon6);
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        storageList = new QComboBox(centralWidget);
        storageList->setObjectName(QString::fromUtf8("storageList"));

        verticalLayout->addWidget(storageList);

        listView = new QListView(centralWidget);
        listView->setObjectName(QString::fromUtf8("listView"));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        listView->setFont(font);
        listView->setContextMenuPolicy(Qt::CustomContextMenu);
        listView->setAcceptDrops(true);
        listView->setProperty("showDropIndicator", QVariant(false));
        listView->setDragDropMode(QAbstractItemView::DropOnly);
        listView->setDefaultDropAction(Qt::CopyAction);
        listView->setSelectionMode(QAbstractItemView::ExtendedSelection);
        listView->setUniformItemSizes(true);

        verticalLayout->addWidget(listView);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 671, 32));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuNavigate = new QMenu(menuBar);
        menuNavigate->setObjectName(QString::fromUtf8("menuNavigate"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuNavigate->menuAction());
        menuFile->addAction(actionRename);
        menuFile->addAction(actionDownload);
        menuFile->addAction(actionDelete);
        menuFile->addAction(actionRefresh);
        menuFile->addSeparator();
        menuFile->addAction(actionCreateDirectory);
        menuFile->addSeparator();
        menuFile->addAction(actionPaste);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuNavigate->addAction(actionBack);
        menuNavigate->addAction(actionGo_Down);
        mainToolBar->addAction(actionBack);
        mainToolBar->addAction(actionGo_Down);
        mainToolBar->addAction(actionRefresh);
        mainToolBar->addAction(actionCreateDirectory);
        mainToolBar->addAction(actionUpload_Album);
        mainToolBar->addAction(actionUploadDirectory);
        mainToolBar->addAction(actionUpload);

        retranslateUi(MainWindow);
        QObject::connect(actionExit, SIGNAL(triggered()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Android File Transfer for Linux", 0, QApplication::UnicodeUTF8));
        actionUpload->setText(QApplication::translate("MainWindow", "Upload", 0, QApplication::UnicodeUTF8));
        actionUpload->setShortcut(QApplication::translate("MainWindow", "Ctrl+U", 0, QApplication::UnicodeUTF8));
        actionCreateDirectory->setText(QApplication::translate("MainWindow", "&CreateDirectory", 0, QApplication::UnicodeUTF8));
        actionCreateDirectory->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", 0, QApplication::UnicodeUTF8));
        actionUploadDirectory->setText(QApplication::translate("MainWindow", "UploadDirectory", 0, QApplication::UnicodeUTF8));
        actionBack->setText(QApplication::translate("MainWindow", "&Back", 0, QApplication::UnicodeUTF8));
        actionBack->setShortcut(QApplication::translate("MainWindow", "Backspace", 0, QApplication::UnicodeUTF8));
        actionGo_Down->setText(QApplication::translate("MainWindow", "&Go Down", 0, QApplication::UnicodeUTF8));
        actionGo_Down->setShortcut(QApplication::translate("MainWindow", "Return", 0, QApplication::UnicodeUTF8));
        actionUpload_Album->setText(QApplication::translate("MainWindow", "Upload Album", 0, QApplication::UnicodeUTF8));
        actionRename->setText(QApplication::translate("MainWindow", "&Rename", 0, QApplication::UnicodeUTF8));
        actionRename->setShortcut(QApplication::translate("MainWindow", "F2", 0, QApplication::UnicodeUTF8));
        actionDelete->setText(QApplication::translate("MainWindow", "D&elete", 0, QApplication::UnicodeUTF8));
        actionDelete->setShortcut(QApplication::translate("MainWindow", "Del", 0, QApplication::UnicodeUTF8));
        actionDownload->setText(QApplication::translate("MainWindow", "&Download", 0, QApplication::UnicodeUTF8));
        actionDownload->setShortcut(QApplication::translate("MainWindow", "Ctrl+D", 0, QApplication::UnicodeUTF8));
        actionExit->setText(QApplication::translate("MainWindow", "E&xit", 0, QApplication::UnicodeUTF8));
        actionExit->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", 0, QApplication::UnicodeUTF8));
        actionRefresh->setText(QApplication::translate("MainWindow", "Re&fresh", 0, QApplication::UnicodeUTF8));
        actionRefresh->setShortcut(QApplication::translate("MainWindow", "F5", 0, QApplication::UnicodeUTF8));
        actionPaste->setText(QApplication::translate("MainWindow", "&Paste", 0, QApplication::UnicodeUTF8));
        actionPaste->setShortcut(QApplication::translate("MainWindow", "Ctrl+V", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("MainWindow", "&File", 0, QApplication::UnicodeUTF8));
        menuNavigate->setTitle(QApplication::translate("MainWindow", "&Navigate", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
