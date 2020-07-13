/********************************************************************************
** Form generated from reading UI file 'GUI.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUI_H
#define UI_GUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_GUIClass
{
public:
    QWidget *centralWidget;
    QCustomPlot *plot;
    QPushButton *btn_start;
    QPushButton *btn_stop;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_2;
    QDoubleSpinBox *A_box;
    QLabel *label_5;
    QDoubleSpinBox *B_box;
    QLabel *label_6;
    QDoubleSpinBox *J_box;
    QLabel *label_7;
    QDoubleSpinBox *tau_g_box;
    QLabel *label_9;
    QDoubleSpinBox *w_tau_box;
    QDoubleSpinBox *w_theta_box;
    QLabel *label_10;
    QPushButton *btn_set_params;
    QCustomPlot *plot2;
    QCustomPlot *plot3;
    QCustomPlot *plot1;
    QCustomPlot *plot4;
    QCustomPlot *plot5;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *label_26;
    QPlainTextEdit *plainTextEdit;
    QPushButton *btn_reset;
    QDoubleSpinBox *x1min_box;
    QDoubleSpinBox *x1max_box;
    QLabel *label;
    QLabel *label_12;
    QDoubleSpinBox *x2min_box;
    QDoubleSpinBox *x2max_box;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_17;
    QComboBox *analogInBox;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QComboBox *controlBox;
    QComboBox *trajBox;
    QCheckBox *deviceBox;
    QLabel *label_28;
    QLabel *label_29;
    QFrame *line;
    QDoubleSpinBox *Kd_box;
    QLabel *label_30;
    QDoubleSpinBox *Ki_box;
    QLabel *label_31;
    QLabel *label_32;
    QLabel *label_33;
    QDoubleSpinBox *Kff_tau_g_box;
    QDoubleSpinBox *Kp_box;
    QLabel *label_34;
    QLabel *label_35;
    QDoubleSpinBox *Kff_B_box;
    QDoubleSpinBox *Kff_A_box;
    QLabel *label_36;
    QFrame *line_3;
    QFrame *line_4;
    QFrame *line_5;
    QDoubleSpinBox *timeBox;
    QLabel *label_27;
    QDoubleSpinBox *pA_box;
    QLabel *label_15;
    QLabel *label_37;
    QComboBox *humanBox;
    QLabel *label_38;
    QLabel *label_39;
    QComboBox *configBox;
    QDoubleSpinBox *Kff_J_box;
    QLabel *label_40;
    QPushButton *btn_save;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *GUIClass)
    {
        if (GUIClass->objectName().isEmpty())
            GUIClass->setObjectName(QString::fromUtf8("GUIClass"));
        GUIClass->resize(1001, 875);
        GUIClass->setFocusPolicy(Qt::NoFocus);
        centralWidget = new QWidget(GUIClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        plot = new QCustomPlot(centralWidget);
        plot->setObjectName(QString::fromUtf8("plot"));
        plot->setGeometry(QRect(480, 30, 501, 121));
        btn_start = new QPushButton(centralWidget);
        btn_start->setObjectName(QString::fromUtf8("btn_start"));
        btn_start->setGeometry(QRect(20, 800, 71, 23));
        btn_stop = new QPushButton(centralWidget);
        btn_stop->setObjectName(QString::fromUtf8("btn_stop"));
        btn_stop->setGeometry(QRect(110, 800, 71, 23));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(60, 770, 41, 20));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 770, 41, 21));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(150, 40, 61, 16));
        A_box = new QDoubleSpinBox(centralWidget);
        A_box->setObjectName(QString::fromUtf8("A_box"));
        A_box->setGeometry(QRect(150, 60, 71, 22));
        A_box->setDecimals(4);
        A_box->setSingleStep(0.100000000000000);
        A_box->setValue(0.000000000000000);
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(150, 90, 61, 16));
        B_box = new QDoubleSpinBox(centralWidget);
        B_box->setObjectName(QString::fromUtf8("B_box"));
        B_box->setGeometry(QRect(150, 110, 71, 22));
        B_box->setDecimals(4);
        B_box->setSingleStep(0.100000000000000);
        B_box->setValue(0.000000000000000);
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(150, 140, 61, 16));
        J_box = new QDoubleSpinBox(centralWidget);
        J_box->setObjectName(QString::fromUtf8("J_box"));
        J_box->setGeometry(QRect(150, 160, 71, 22));
        J_box->setDecimals(4);
        J_box->setSingleStep(0.100000000000000);
        J_box->setValue(0.000000000000000);
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(150, 190, 61, 16));
        tau_g_box = new QDoubleSpinBox(centralWidget);
        tau_g_box->setObjectName(QString::fromUtf8("tau_g_box"));
        tau_g_box->setGeometry(QRect(150, 210, 71, 22));
        tau_g_box->setDecimals(4);
        tau_g_box->setSingleStep(0.100000000000000);
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(260, 40, 61, 16));
        w_tau_box = new QDoubleSpinBox(centralWidget);
        w_tau_box->setObjectName(QString::fromUtf8("w_tau_box"));
        w_tau_box->setGeometry(QRect(260, 110, 71, 22));
        w_tau_box->setDecimals(1);
        w_tau_box->setMaximum(1000.000000000000000);
        w_tau_box->setSingleStep(0.100000000000000);
        w_tau_box->setValue(0.000000000000000);
        w_theta_box = new QDoubleSpinBox(centralWidget);
        w_theta_box->setObjectName(QString::fromUtf8("w_theta_box"));
        w_theta_box->setGeometry(QRect(260, 60, 71, 22));
        w_theta_box->setDecimals(1);
        w_theta_box->setMaximum(1000000.000000000000000);
        w_theta_box->setSingleStep(10000.000000000000000);
        w_theta_box->setValue(0.000000000000000);
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(260, 90, 61, 16));
        btn_set_params = new QPushButton(centralWidget);
        btn_set_params->setObjectName(QString::fromUtf8("btn_set_params"));
        btn_set_params->setGeometry(QRect(190, 400, 81, 23));
        plot2 = new QCustomPlot(centralWidget);
        plot2->setObjectName(QString::fromUtf8("plot2"));
        plot2->setEnabled(false);
        plot2->setGeometry(QRect(480, 330, 501, 101));
        plot3 = new QCustomPlot(centralWidget);
        plot3->setObjectName(QString::fromUtf8("plot3"));
        plot3->setEnabled(false);
        plot3->setGeometry(QRect(480, 460, 501, 101));
        plot1 = new QCustomPlot(centralWidget);
        plot1->setObjectName(QString::fromUtf8("plot1"));
        plot1->setEnabled(false);
        plot1->setGeometry(QRect(480, 180, 501, 121));
        plot4 = new QCustomPlot(centralWidget);
        plot4->setObjectName(QString::fromUtf8("plot4"));
        plot4->setEnabled(false);
        plot4->setGeometry(QRect(480, 590, 501, 101));
        plot5 = new QCustomPlot(centralWidget);
        plot5->setObjectName(QString::fromUtf8("plot5"));
        plot5->setEnabled(false);
        plot5->setGeometry(QRect(480, 720, 501, 101));
        label_21 = new QLabel(centralWidget);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(490, 10, 61, 16));
        label_22 = new QLabel(centralWidget);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(490, 160, 61, 16));
        label_23 = new QLabel(centralWidget);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(490, 310, 61, 16));
        label_24 = new QLabel(centralWidget);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(490, 440, 61, 16));
        label_25 = new QLabel(centralWidget);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(490, 570, 61, 16));
        label_26 = new QLabel(centralWidget);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(490, 700, 61, 16));
        plainTextEdit = new QPlainTextEdit(centralWidget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setEnabled(false);
        plainTextEdit->setGeometry(QRect(20, 440, 421, 321));
        plainTextEdit->setReadOnly(true);
        plainTextEdit->setOverwriteMode(true);
        plainTextEdit->setCenterOnScroll(false);
        btn_reset = new QPushButton(centralWidget);
        btn_reset->setObjectName(QString::fromUtf8("btn_reset"));
        btn_reset->setGeometry(QRect(200, 800, 71, 23));
        x1min_box = new QDoubleSpinBox(centralWidget);
        x1min_box->setObjectName(QString::fromUtf8("x1min_box"));
        x1min_box->setGeometry(QRect(260, 160, 71, 22));
        x1min_box->setDecimals(1);
        x1min_box->setMinimum(-10.000000000000000);
        x1min_box->setMaximum(10.000000000000000);
        x1min_box->setSingleStep(0.100000000000000);
        x1min_box->setValue(0.000000000000000);
        x1max_box = new QDoubleSpinBox(centralWidget);
        x1max_box->setObjectName(QString::fromUtf8("x1max_box"));
        x1max_box->setGeometry(QRect(260, 210, 71, 22));
        x1max_box->setDecimals(1);
        x1max_box->setMinimum(-10.000000000000000);
        x1max_box->setMaximum(10.000000000000000);
        x1max_box->setSingleStep(0.100000000000000);
        x1max_box->setValue(0.000000000000000);
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(260, 140, 47, 13));
        label_12 = new QLabel(centralWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(260, 190, 47, 13));
        x2min_box = new QDoubleSpinBox(centralWidget);
        x2min_box->setObjectName(QString::fromUtf8("x2min_box"));
        x2min_box->setGeometry(QRect(260, 260, 71, 22));
        x2min_box->setDecimals(1);
        x2min_box->setMinimum(-100.000000000000000);
        x2min_box->setMaximum(100.000000000000000);
        x2min_box->setSingleStep(0.100000000000000);
        x2min_box->setValue(0.000000000000000);
        x2max_box = new QDoubleSpinBox(centralWidget);
        x2max_box->setObjectName(QString::fromUtf8("x2max_box"));
        x2max_box->setGeometry(QRect(260, 310, 71, 22));
        x2max_box->setDecimals(1);
        x2max_box->setMinimum(-100.000000000000000);
        x2max_box->setMaximum(100.000000000000000);
        x2max_box->setSingleStep(0.100000000000000);
        x2max_box->setValue(0.000000000000000);
        label_13 = new QLabel(centralWidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(260, 240, 47, 13));
        label_14 = new QLabel(centralWidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(260, 290, 47, 13));
        label_17 = new QLabel(centralWidget);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(150, 10, 71, 16));
        analogInBox = new QComboBox(centralWidget);
        analogInBox->setObjectName(QString::fromUtf8("analogInBox"));
        analogInBox->setGeometry(QRect(20, 160, 91, 22));
        analogInBox->setEditable(false);
        label_18 = new QLabel(centralWidget);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(20, 190, 71, 16));
        label_19 = new QLabel(centralWidget);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(20, 290, 71, 16));
        label_20 = new QLabel(centralWidget);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(260, 10, 71, 16));
        controlBox = new QComboBox(centralWidget);
        controlBox->setObjectName(QString::fromUtf8("controlBox"));
        controlBox->setGeometry(QRect(20, 210, 91, 22));
        controlBox->setEditable(false);
        trajBox = new QComboBox(centralWidget);
        trajBox->setObjectName(QString::fromUtf8("trajBox"));
        trajBox->setGeometry(QRect(20, 310, 91, 22));
        trajBox->setEditable(false);
        deviceBox = new QCheckBox(centralWidget);
        deviceBox->setObjectName(QString::fromUtf8("deviceBox"));
        deviceBox->setGeometry(QRect(20, 40, 70, 17));
        deviceBox->setChecked(false);
        label_28 = new QLabel(centralWidget);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setGeometry(QRect(20, 140, 71, 16));
        label_29 = new QLabel(centralWidget);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setGeometry(QRect(20, 10, 71, 16));
        line = new QFrame(centralWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(120, 10, 20, 371));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        Kd_box = new QDoubleSpinBox(centralWidget);
        Kd_box->setObjectName(QString::fromUtf8("Kd_box"));
        Kd_box->setGeometry(QRect(370, 160, 71, 22));
        Kd_box->setDecimals(2);
        Kd_box->setMaximum(1000.000000000000000);
        Kd_box->setSingleStep(0.100000000000000);
        Kd_box->setValue(0.000000000000000);
        label_30 = new QLabel(centralWidget);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setGeometry(QRect(370, 140, 61, 16));
        Ki_box = new QDoubleSpinBox(centralWidget);
        Ki_box->setObjectName(QString::fromUtf8("Ki_box"));
        Ki_box->setGeometry(QRect(370, 110, 71, 22));
        Ki_box->setDecimals(2);
        Ki_box->setMaximum(1000.000000000000000);
        Ki_box->setSingleStep(0.100000000000000);
        Ki_box->setValue(0.000000000000000);
        label_31 = new QLabel(centralWidget);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setGeometry(QRect(370, 90, 61, 16));
        label_32 = new QLabel(centralWidget);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setGeometry(QRect(370, 340, 61, 16));
        label_33 = new QLabel(centralWidget);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setGeometry(QRect(370, 40, 61, 16));
        Kff_tau_g_box = new QDoubleSpinBox(centralWidget);
        Kff_tau_g_box->setObjectName(QString::fromUtf8("Kff_tau_g_box"));
        Kff_tau_g_box->setGeometry(QRect(370, 360, 71, 22));
        Kff_tau_g_box->setDecimals(2);
        Kff_tau_g_box->setSingleStep(0.100000000000000);
        Kp_box = new QDoubleSpinBox(centralWidget);
        Kp_box->setObjectName(QString::fromUtf8("Kp_box"));
        Kp_box->setGeometry(QRect(370, 60, 71, 22));
        Kp_box->setDecimals(2);
        Kp_box->setMaximum(1000.000000000000000);
        Kp_box->setSingleStep(0.100000000000000);
        Kp_box->setValue(0.000000000000000);
        label_34 = new QLabel(centralWidget);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setGeometry(QRect(370, 10, 81, 16));
        label_35 = new QLabel(centralWidget);
        label_35->setObjectName(QString::fromUtf8("label_35"));
        label_35->setGeometry(QRect(370, 240, 61, 16));
        Kff_B_box = new QDoubleSpinBox(centralWidget);
        Kff_B_box->setObjectName(QString::fromUtf8("Kff_B_box"));
        Kff_B_box->setGeometry(QRect(370, 260, 71, 22));
        Kff_B_box->setDecimals(2);
        Kff_B_box->setSingleStep(0.100000000000000);
        Kff_A_box = new QDoubleSpinBox(centralWidget);
        Kff_A_box->setObjectName(QString::fromUtf8("Kff_A_box"));
        Kff_A_box->setGeometry(QRect(370, 210, 71, 22));
        Kff_A_box->setDecimals(2);
        Kff_A_box->setSingleStep(0.100000000000000);
        label_36 = new QLabel(centralWidget);
        label_36->setObjectName(QString::fromUtf8("label_36"));
        label_36->setGeometry(QRect(370, 190, 61, 16));
        line_3 = new QFrame(centralWidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(230, 10, 20, 371));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(centralWidget);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(340, 10, 20, 371));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);
        line_5 = new QFrame(centralWidget);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setGeometry(QRect(450, 10, 20, 811));
        line_5->setFrameShape(QFrame::VLine);
        line_5->setFrameShadow(QFrame::Sunken);
        timeBox = new QDoubleSpinBox(centralWidget);
        timeBox->setObjectName(QString::fromUtf8("timeBox"));
        timeBox->setGeometry(QRect(20, 360, 91, 22));
        timeBox->setValue(0.000000000000000);
        label_27 = new QLabel(centralWidget);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(20, 340, 71, 16));
        pA_box = new QDoubleSpinBox(centralWidget);
        pA_box->setObjectName(QString::fromUtf8("pA_box"));
        pA_box->setGeometry(QRect(150, 360, 71, 22));
        pA_box->setDecimals(1);
        pA_box->setMaximum(1000.000000000000000);
        pA_box->setSingleStep(0.100000000000000);
        pA_box->setValue(0.000000000000000);
        label_15 = new QLabel(centralWidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(150, 340, 47, 13));
        label_37 = new QLabel(centralWidget);
        label_37->setObjectName(QString::fromUtf8("label_37"));
        label_37->setGeometry(QRect(150, 310, 71, 16));
        humanBox = new QComboBox(centralWidget);
        humanBox->setObjectName(QString::fromUtf8("humanBox"));
        humanBox->setGeometry(QRect(20, 110, 91, 22));
        humanBox->setEditable(false);
        label_38 = new QLabel(centralWidget);
        label_38->setObjectName(QString::fromUtf8("label_38"));
        label_38->setGeometry(QRect(20, 90, 71, 16));
        label_39 = new QLabel(centralWidget);
        label_39->setObjectName(QString::fromUtf8("label_39"));
        label_39->setGeometry(QRect(20, 240, 71, 16));
        configBox = new QComboBox(centralWidget);
        configBox->setObjectName(QString::fromUtf8("configBox"));
        configBox->setGeometry(QRect(20, 260, 91, 22));
        configBox->setEditable(false);
        Kff_J_box = new QDoubleSpinBox(centralWidget);
        Kff_J_box->setObjectName(QString::fromUtf8("Kff_J_box"));
        Kff_J_box->setGeometry(QRect(370, 310, 71, 22));
        Kff_J_box->setDecimals(2);
        Kff_J_box->setSingleStep(0.100000000000000);
        label_40 = new QLabel(centralWidget);
        label_40->setObjectName(QString::fromUtf8("label_40"));
        label_40->setGeometry(QRect(370, 290, 61, 16));
        btn_save = new QPushButton(centralWidget);
        btn_save->setObjectName(QString::fromUtf8("btn_save"));
        btn_save->setGeometry(QRect(370, 800, 71, 23));
        GUIClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(GUIClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1001, 21));
        GUIClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(GUIClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        GUIClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(GUIClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        GUIClass->setStatusBar(statusBar);

        retranslateUi(GUIClass);
        QObject::connect(btn_start, SIGNAL(clicked()), GUIClass, SLOT(on_btn_start_clicked()));
        QObject::connect(btn_stop, SIGNAL(clicked()), GUIClass, SLOT(on_btn_stop_clicked()));
        QObject::connect(btn_set_params, SIGNAL(clicked()), GUIClass, SLOT(on_btn_set_params_clicked()));
        QObject::connect(btn_reset, SIGNAL(clicked()), GUIClass, SLOT(on_btn_reset_clicked()));
        QObject::connect(btn_save, SIGNAL(clicked()), GUIClass, SLOT(on_btn_save_clicked()));

        analogInBox->setCurrentIndex(-1);
        controlBox->setCurrentIndex(-1);
        trajBox->setCurrentIndex(-1);
        humanBox->setCurrentIndex(-1);
        configBox->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(GUIClass);
    } // setupUi

    void retranslateUi(QMainWindow *GUIClass)
    {
        GUIClass->setWindowTitle(QCoreApplication::translate("GUIClass", "GUI", nullptr));
        btn_start->setText(QCoreApplication::translate("GUIClass", "Start", nullptr));
        btn_stop->setText(QCoreApplication::translate("GUIClass", "Stop", nullptr));
        label_3->setText(QCoreApplication::translate("GUIClass", "0.000", nullptr));
        label_4->setText(QCoreApplication::translate("GUIClass", "Time", nullptr));
        label_2->setText(QCoreApplication::translate("GUIClass", "A", nullptr));
        label_5->setText(QCoreApplication::translate("GUIClass", "B", nullptr));
        label_6->setText(QCoreApplication::translate("GUIClass", "J", nullptr));
        label_7->setText(QCoreApplication::translate("GUIClass", "tau_g", nullptr));
        label_9->setText(QCoreApplication::translate("GUIClass", "w_theta", nullptr));
        label_10->setText(QCoreApplication::translate("GUIClass", "w_tau", nullptr));
        btn_set_params->setText(QCoreApplication::translate("GUIClass", "Set Params", nullptr));
        label_21->setText(QCoreApplication::translate("GUIClass", "Theta", nullptr));
        label_22->setText(QCoreApplication::translate("GUIClass", "Tau", nullptr));
        label_23->setText(QCoreApplication::translate("GUIClass", "EMG", nullptr));
        label_24->setText(QCoreApplication::translate("GUIClass", "Free", nullptr));
        label_25->setText(QCoreApplication::translate("GUIClass", "mu A", nullptr));
        label_26->setText(QCoreApplication::translate("GUIClass", "mu R", nullptr));
        plainTextEdit->setPlainText(QString());
        btn_reset->setText(QCoreApplication::translate("GUIClass", "Reset", nullptr));
        label->setText(QCoreApplication::translate("GUIClass", "x1min", nullptr));
        label_12->setText(QCoreApplication::translate("GUIClass", "x1max", nullptr));
        label_13->setText(QCoreApplication::translate("GUIClass", "x2min", nullptr));
        label_14->setText(QCoreApplication::translate("GUIClass", "x2max", nullptr));
        label_17->setText(QCoreApplication::translate("GUIClass", "Model", nullptr));
        analogInBox->setCurrentText(QString());
        label_18->setText(QCoreApplication::translate("GUIClass", "Controller", nullptr));
        label_19->setText(QCoreApplication::translate("GUIClass", "Trajectory", nullptr));
        label_20->setText(QCoreApplication::translate("GUIClass", "MPC", nullptr));
        controlBox->setCurrentText(QString());
        trajBox->setCurrentText(QString());
        deviceBox->setText(QCoreApplication::translate("GUIClass", "Device", nullptr));
        label_28->setText(QCoreApplication::translate("GUIClass", "Analog In", nullptr));
        label_29->setText(QCoreApplication::translate("GUIClass", "Config", nullptr));
        label_30->setText(QCoreApplication::translate("GUIClass", "Kd", nullptr));
        label_31->setText(QCoreApplication::translate("GUIClass", "Ki", nullptr));
        label_32->setText(QCoreApplication::translate("GUIClass", "Kff_tau_g", nullptr));
        label_33->setText(QCoreApplication::translate("GUIClass", "Kp", nullptr));
        label_34->setText(QCoreApplication::translate("GUIClass", "PID/Impedance", nullptr));
        label_35->setText(QCoreApplication::translate("GUIClass", "Kff_B", nullptr));
        label_36->setText(QCoreApplication::translate("GUIClass", "Kff_A", nullptr));
        label_27->setText(QCoreApplication::translate("GUIClass", "Time Period", nullptr));
        label_15->setText(QCoreApplication::translate("GUIClass", "pA", nullptr));
        label_37->setText(QCoreApplication::translate("GUIClass", "FLA", nullptr));
        humanBox->setCurrentText(QString());
        label_38->setText(QCoreApplication::translate("GUIClass", "Human", nullptr));
        label_39->setText(QCoreApplication::translate("GUIClass", "Config", nullptr));
        configBox->setCurrentText(QString());
        label_40->setText(QCoreApplication::translate("GUIClass", "Kff_J", nullptr));
        btn_save->setText(QCoreApplication::translate("GUIClass", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GUIClass: public Ui_GUIClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUI_H
