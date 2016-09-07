/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTextEdit *textEdit;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_windowSize;
    QLabel *label_2;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_thresh;
    QPushButton *threshold_pushButton;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_6;
    QComboBox *comboBox_adaptive;
    QPushButton *pushButton_adaptive;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *fliter_pushButton;
    QComboBox *comboBox_filter;
    QPushButton *pushButton_filter;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_9;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *openFile_pushButton;
    QCheckBox *GrayScale_openmode_checkBox;
    QPushButton *pushButton_toSrc;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_4;
    QLineEdit *lineEdit_avg;
    QTabWidget *tabWidget;
    QWidget *tab_3;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout;
    QLabel *label_imgShow;
    QWidget *tab_4;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QGridLayout *gridLayout_2;
    QLabel *label_5;
    QWidget *layoutWidget5;
    QGridLayout *gridLayout_4;
    QComboBox *comboBox;
    QLabel *label_6;
    QGridLayout *gridLayout_3;
    QPushButton *Dilate_pushButton;
    QPushButton *Corrosion_pushButton;
    QWidget *layoutWidget6;
    QGridLayout *gridLayout_5;
    QLabel *label_7;
    QSpinBox *spinBox;
    QPushButton *DrawLine_pushButton;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *find2Dcontour_pushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1424, 864);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(990, 210, 401, 381));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(990, 30, 150, 22));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEdit_windowSize = new QLineEdit(layoutWidget);
        lineEdit_windowSize->setObjectName(QStringLiteral("lineEdit_windowSize"));
        lineEdit_windowSize->setMaximumSize(QSize(40, 16777215));

        horizontalLayout->addWidget(lineEdit_windowSize);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(990, 60, 244, 25));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        lineEdit_thresh = new QLineEdit(layoutWidget1);
        lineEdit_thresh->setObjectName(QStringLiteral("lineEdit_thresh"));
        lineEdit_thresh->setMaximumSize(QSize(40, 16777215));

        horizontalLayout_3->addWidget(lineEdit_thresh);


        horizontalLayout_4->addLayout(horizontalLayout_3);

        threshold_pushButton = new QPushButton(layoutWidget1);
        threshold_pushButton->setObjectName(QStringLiteral("threshold_pushButton"));

        horizontalLayout_4->addWidget(threshold_pushButton);

        layoutWidget2 = new QWidget(centralWidget);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(990, 90, 222, 25));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        comboBox_adaptive = new QComboBox(layoutWidget2);
        comboBox_adaptive->setObjectName(QStringLiteral("comboBox_adaptive"));

        horizontalLayout_6->addWidget(comboBox_adaptive);

        pushButton_adaptive = new QPushButton(layoutWidget2);
        pushButton_adaptive->setObjectName(QStringLiteral("pushButton_adaptive"));

        horizontalLayout_6->addWidget(pushButton_adaptive);

        layoutWidget3 = new QWidget(centralWidget);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(990, 120, 226, 25));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        fliter_pushButton = new QPushButton(layoutWidget3);
        fliter_pushButton->setObjectName(QStringLiteral("fliter_pushButton"));

        horizontalLayout_7->addWidget(fliter_pushButton);

        comboBox_filter = new QComboBox(layoutWidget3);
        comboBox_filter->setObjectName(QStringLiteral("comboBox_filter"));

        horizontalLayout_7->addWidget(comboBox_filter);

        pushButton_filter = new QPushButton(layoutWidget3);
        pushButton_filter->setObjectName(QStringLiteral("pushButton_filter"));

        horizontalLayout_7->addWidget(pushButton_filter);

        layoutWidget4 = new QWidget(centralWidget);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(990, 0, 433, 29));
        horizontalLayout_9 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        openFile_pushButton = new QPushButton(layoutWidget4);
        openFile_pushButton->setObjectName(QStringLiteral("openFile_pushButton"));

        horizontalLayout_2->addWidget(openFile_pushButton);

        GrayScale_openmode_checkBox = new QCheckBox(layoutWidget4);
        GrayScale_openmode_checkBox->setObjectName(QStringLiteral("GrayScale_openmode_checkBox"));
        GrayScale_openmode_checkBox->setEnabled(true);
        GrayScale_openmode_checkBox->setChecked(true);

        horizontalLayout_2->addWidget(GrayScale_openmode_checkBox);


        horizontalLayout_5->addLayout(horizontalLayout_2);

        pushButton_toSrc = new QPushButton(layoutWidget4);
        pushButton_toSrc->setObjectName(QStringLiteral("pushButton_toSrc"));

        horizontalLayout_5->addWidget(pushButton_toSrc);


        horizontalLayout_9->addLayout(horizontalLayout_5);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_4 = new QLabel(layoutWidget4);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMaximumSize(QSize(90, 16777215));

        horizontalLayout_8->addWidget(label_4);

        lineEdit_avg = new QLineEdit(layoutWidget4);
        lineEdit_avg->setObjectName(QStringLiteral("lineEdit_avg"));
        lineEdit_avg->setMaximumSize(QSize(60, 16777215));
        lineEdit_avg->setReadOnly(true);

        horizontalLayout_8->addWidget(lineEdit_avg);


        horizontalLayout_9->addLayout(horizontalLayout_8);

        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 20, 961, 731));
        tabWidget->setTabPosition(QTabWidget::South);
        tabWidget->setIconSize(QSize(16, 16));
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        scrollArea = new QScrollArea(tab_3);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(10, 10, 931, 691));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 929, 689));
        gridLayout = new QGridLayout(scrollAreaWidgetContents);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_imgShow = new QLabel(scrollAreaWidgetContents);
        label_imgShow->setObjectName(QStringLiteral("label_imgShow"));

        gridLayout->addWidget(label_imgShow, 0, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        scrollArea_2 = new QScrollArea(tab_4);
        scrollArea_2->setObjectName(QStringLiteral("scrollArea_2"));
        scrollArea_2->setGeometry(QRect(10, 10, 881, 681));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 879, 679));
        gridLayout_2 = new QGridLayout(scrollAreaWidgetContents_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_5 = new QLabel(scrollAreaWidgetContents_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_2->addWidget(label_5, 0, 0, 1, 1);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);
        tabWidget->addTab(tab_4, QString());
        layoutWidget5 = new QWidget(centralWidget);
        layoutWidget5->setObjectName(QStringLiteral("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(990, 150, 281, 27));
        gridLayout_4 = new QGridLayout(layoutWidget5);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        comboBox = new QComboBox(layoutWidget5);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setMaxVisibleItems(11);

        gridLayout_4->addWidget(comboBox, 0, 2, 1, 1);

        label_6 = new QLabel(layoutWidget5);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_4->addWidget(label_6, 0, 1, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        Dilate_pushButton = new QPushButton(layoutWidget5);
        Dilate_pushButton->setObjectName(QStringLiteral("Dilate_pushButton"));

        gridLayout_3->addWidget(Dilate_pushButton, 0, 0, 1, 1);

        Corrosion_pushButton = new QPushButton(layoutWidget5);
        Corrosion_pushButton->setObjectName(QStringLiteral("Corrosion_pushButton"));

        gridLayout_3->addWidget(Corrosion_pushButton, 0, 1, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 0, 0, 1, 1);

        layoutWidget6 = new QWidget(centralWidget);
        layoutWidget6->setObjectName(QStringLiteral("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(1230, 120, 90, 22));
        gridLayout_5 = new QGridLayout(layoutWidget6);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget6);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_5->addWidget(label_7, 0, 0, 1, 1);

        spinBox = new QSpinBox(layoutWidget6);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setMaximum(765);
        spinBox->setValue(350);
        spinBox->setDisplayIntegerBase(10);

        gridLayout_5->addWidget(spinBox, 0, 1, 1, 1);

        DrawLine_pushButton = new QPushButton(centralWidget);
        DrawLine_pushButton->setObjectName(QStringLiteral("DrawLine_pushButton"));
        DrawLine_pushButton->setGeometry(QRect(990, 180, 75, 23));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(1070, 180, 71, 20));
        lineEdit_2 = new QLineEdit(centralWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(1150, 180, 71, 20));
        find2Dcontour_pushButton = new QPushButton(centralWidget);
        find2Dcontour_pushButton->setObjectName(QStringLiteral("find2Dcontour_pushButton"));
        find2Dcontour_pushButton->setGeometry(QRect(1260, 60, 101, 31));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1424, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
#ifndef QT_NO_SHORTCUT
        label->setBuddy(lineEdit_windowSize);
#endif // QT_NO_SHORTCUT

        retranslateUi(MainWindow);

        comboBox_filter->setCurrentIndex(0);
        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label->setText(QApplication::translate("MainWindow", "\347\252\227\345\217\243\345\244\247\345\260\217\357\274\232", 0));
        lineEdit_windowSize->setText(QApplication::translate("MainWindow", "3", 0));
        label_2->setText(QApplication::translate("MainWindow", "(1~16)", 0));
        label_3->setText(QApplication::translate("MainWindow", "\345\233\272\345\256\232\344\272\214\345\200\274\345\214\226\351\230\210\345\200\274\357\274\232", 0));
        lineEdit_thresh->setText(QApplication::translate("MainWindow", "100", 0));
        threshold_pushButton->setText(QApplication::translate("MainWindow", "\345\233\272\345\256\232\351\230\210\345\200\274\344\272\214\345\200\274\345\214\226", 0));
        comboBox_adaptive->clear();
        comboBox_adaptive->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "\345\271\263\345\235\207\345\200\274\350\207\252\351\200\202\345\272\224\346\226\271\346\263\225", 0)
         << QApplication::translate("MainWindow", "\351\253\230\346\226\257\347\252\227\345\217\243\350\207\252\351\200\202\345\272\224\346\226\271\346\263\225", 0)
        );
        pushButton_adaptive->setText(QApplication::translate("MainWindow", "\350\207\252\351\200\202\345\272\224\351\230\210\345\200\274\345\214\226", 0));
        fliter_pushButton->setText(QApplication::translate("MainWindow", "\351\253\230\346\226\257\346\273\244\346\263\242", 0));
        comboBox_filter->clear();
        comboBox_filter->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "R\345\210\206\351\207\217", 0)
         << QApplication::translate("MainWindow", "G\345\210\206\351\207\217", 0)
         << QApplication::translate("MainWindow", "B\345\210\206\351\207\217", 0)
         << QApplication::translate("MainWindow", "Orange", 0)
         << QApplication::translate("MainWindow", "White", 0)
         << QApplication::translate("MainWindow", "ooo", 0)
        );
        comboBox_filter->setCurrentText(QApplication::translate("MainWindow", "R\345\210\206\351\207\217", 0));
        pushButton_filter->setText(QApplication::translate("MainWindow", "\351\242\234\350\211\262\346\273\244\346\263\242", 0));
        openFile_pushButton->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\345\233\276\347\211\207", 0));
        GrayScale_openmode_checkBox->setText(QApplication::translate("MainWindow", "\347\201\260\345\272\246\346\226\271\345\274\217\346\211\223\345\274\200", 0));
        pushButton_toSrc->setText(QApplication::translate("MainWindow", "\345\216\237\345\233\276", 0));
        label_4->setText(QApplication::translate("MainWindow", "\345\233\276\345\203\217\345\271\263\345\235\207\347\201\260\345\272\246\345\200\274\357\274\232", 0));
        label_imgShow->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Tab 1", 0));
        label_5->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "Tab 2", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "1", 0)
         << QApplication::translate("MainWindow", "2", 0)
         << QApplication::translate("MainWindow", "3", 0)
         << QApplication::translate("MainWindow", "5", 0)
         << QApplication::translate("MainWindow", "7", 0)
         << QApplication::translate("MainWindow", "9", 0)
         << QApplication::translate("MainWindow", "11", 0)
         << QApplication::translate("MainWindow", "13", 0)
         << QApplication::translate("MainWindow", "15", 0)
        );
        comboBox->setCurrentText(QApplication::translate("MainWindow", "1", 0));
        label_6->setText(QApplication::translate("MainWindow", "\345\206\205\346\240\270\345\244\247\345\260\217", 0));
        Dilate_pushButton->setText(QApplication::translate("MainWindow", "\350\206\250\350\203\200", 0));
        Corrosion_pushButton->setText(QApplication::translate("MainWindow", "\350\205\220\350\232\200", 0));
        label_7->setText(QApplication::translate("MainWindow", "\351\253\230\345\205\211\345\200\274", 0));
        DrawLine_pushButton->setText(QApplication::translate("MainWindow", "\347\224\273\347\272\277", 0));
        lineEdit->setText(QApplication::translate("MainWindow", "980", 0));
        lineEdit_2->setText(QApplication::translate("MainWindow", "2500", 0));
        find2Dcontour_pushButton->setText(QApplication::translate("MainWindow", "\345\257\273\346\211\276\350\276\271\347\225\214", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
