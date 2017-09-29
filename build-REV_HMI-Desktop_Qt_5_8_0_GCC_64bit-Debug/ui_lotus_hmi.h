/********************************************************************************
** Form generated from reading UI file 'lotus_hmi.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOTUS_HMI_H
#define UI_LOTUS_HMI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <mapwidget.h>
#include <qtransparentwidget.h>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_REV_HMI
{
public:
    QWidget *centralWidget;
    QWidget *menuButt;
    QHBoxLayout *menuButtons;
    QPushButton *homeBut;
    QPushButton *battBut;
    QPushButton *mapBut;
    QPushButton *tripBut;
    QPushButton *musicBut;
    QPushButton *logBut;
    QWidget *log;
    QWidget *layoutWidget_3;
    QVBoxLayout *logLayout;
    QPushButton *pushButton_clear_errors;
    QCheckBox *checkBox_logGpsRaw;
    QCheckBox *checkBox_logBmsRaw;
    QPushButton *pushButton_Runsound;
    QSlider *horizontalSlider;
    QCheckBox *checkBox_GPSFile;
    QCheckBox *checkBox_BMSFile;
    QPushButton *pushButton_defaultSettings;
    QPushButton *pushButton_exit;
    QTextBrowser *textBrowser_errors;
    QCustomPlot *efficiencyPlot;
    QWidget *battInfo;
    QTableWidget *info_battTable;
    QWidget *music;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *musicLayout;
    QPushButton *pushButton_moveUp;
    QPushButton *pushButton_shuffle;
    QPushButton *pushButton_moveDown;
    QCheckBox *checkBox_repeatThis;
    QCheckBox *checkBox_repeatAll;
    QPushButton *pushButton_addSong;
    QTableWidget *tableWidget_mediaList;
    QWidget *widget;
    QSlider *volumeSlider;
    QLabel *label_3;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *pushButton_prev;
    QPushButton *pushButton_play;
    QSlider *seekSlider;
    QPushButton *pushButton_stop;
    QPushButton *pushButton_next;
    QWidget *trip;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *tripButLayout;
    QLabel *editname_label;
    QTextEdit *editname;
    QLabel *label_7;
    QGridLayout *gridLayout_6;
    QPushButton *pushButton_stopRecording;
    QPushButton *pushButton_startRecording;
    QPushButton *pushButton_changeRange;
    QLabel *label_10;
    QLabel *l_trip_time;
    QLabel *label_4;
    QLabel *l_drive_time;
    QLabel *label_54;
    QGridLayout *gridLayout_7;
    QPushButton *pushButton_location;
    QPushButton *pushButton_export;
    QLabel *label_exportLocation;
    QTransparentWidget *gridWidget_2;
    QGridLayout *trip_stats_layout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *totalenergy_label;
    QLabel *energyUse;
    QLabel *label_2;
    QHBoxLayout *trip_hori1;
    QLabel *trip_slabel_dist;
    QLabel *l_trip_distance;
    QLabel *label_distkm;
    QHBoxLayout *horizontalLayout_2;
    QLabel *energyRem_label;
    QLabel *energyRem;
    QLabel *label_5;
    QHBoxLayout *trip_hori5;
    QLabel *label_accel;
    QLabel *l_trip_Accel60;
    QLabel *label_050s;
    QCustomPlot *IVPlot;
    QTransparentWidget *widget_2;
    QLabel *label_avg;
    QLabel *label_max;
    QLabel *label_current;
    QLabel *label_driveA;
    QLabel *l_trip_speedMax;
    QLabel *label_speedekmh;
    QLabel *l_trip_ncurrentAvg;
    QLabel *l_trip_ncurrentMax;
    QLabel *label_tripspeed;
    QLabel *l_trip_speedAvgElapsed;
    QLabel *label_11;
    QWidget *home;
    QWidget *warningIcons;
    QGridLayout *WarningIcons;
    QLabel *Handbrakeicon;
    QLabel *Neticon;
    QLabel *CELicon;
    QLabel *Dooricon;
    QLabel *SeatBelticon;
    QWidget *speed;
    QLabel *l_speed;
    QLabel *label_kmh;
    QLabel *l_time;
    QGraphicsView *graphicsView;
    QLabel *driver_name;
    QProgressBar *progressBar_battery;
    QWidget *layoutWidget1;
    QHBoxLayout *voltageText;
    QLabel *l_voltage;
    QLabel *labelVoltage;
    QProgressBar *progressBar_amps;
    QWidget *layoutWidget2;
    QHBoxLayout *currentText;
    QLabel *l_current;
    QLabel *label_A;
    QProgressBar *progressBar_ampsCharge;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_tripDist;
    QLabel *val_tripDist;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_tripTime;
    QLabel *val_tripTime;
    QLabel *label_6;
    QLabel *economy_label;
    QLabel *val_economy;
    QLabel *l_remdist;
    QLabel *label_KM;
    QWidget *horizontalWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *GPSicon;
    QLabel *TBSicon;
    QLabel *lowBatticon;
    QLabel *Fueldooricon;
    QLabel *Safetyswitchicon;
    QProgressBar *efficiencyBar;
    QLabel *label;
    QLabel *efficiencyLabel;
    QWidget *tempBlack;
    QGraphicsView *REVlogo;
    QGraphicsView *uwaLogo;
    QWidget *map;
    MapWidget *mapWidget;
    QWidget *controls;
    QVBoxLayout *verticalLayout_4;
    QWidget *mapControls;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton_zoomIn;
    QPushButton *pushButton_zoomOut;
    QCheckBox *checkBox_autoFollow;
    QCheckBox *checkBox_showMyTrack;
    QPushButton *pushButton_loadTrack;
    QPushButton *pushButton_deleteTrack;
    QPushButton *mapContHide;
    QWidget *battery;
    QTableWidget *tableWidget_cellValues;
    QTransparentWidget *transparentWidget;
    QLabel *l_cell_ave;
    QLabel *label_32;
    QLabel *label_33;
    QLabel *l_cell_max;
    QLabel *l_cell_min;
    QLabel *label_35;
    QLabel *label_36;
    QLabel *label_50;
    QLabel *label_56;
    QLabel *est_cap;
    QLabel *label_57;
    QPushButton *pushButton_NNreset;
    QWidget *layoutWidget_4;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_maxVoltage;
    QLabel *l_trip_voltageMax;
    QTableWidget *tableWidget_batteryCells_max;
    QSpacerItem *verticalSpacer_5;
    QLabel *label_17;
    QGridLayout *gridLayout_8;
    QLabel *l_max_bat;
    QLabel *l_max_volt;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_minVoltage;
    QLabel *l_trip_voltageMin;
    QTableWidget *tableWidget_batteryCells_min;
    QLabel *label_12;
    QGridLayout *gridLayout_2;
    QLabel *l_min_bat;
    QLabel *l_min_volt;
    QSpacerItem *verticalSpacer_12;
    QTransparentWidget *tripWidget1;
    QGridLayout *trip1;
    QLabel *l_trip_pcurrentAvg;
    QLabel *l_trip_capacityPerKm;
    QLabel *label_16;
    QLabel *label_25;
    QLabel *label_15;
    QLabel *l_trip_pcurrentMax;
    QLabel *l_trip_ncurrentMax_2;
    QLabel *label_34;
    QLabel *label_44;
    QLabel *label_28;
    QLabel *label_13;
    QLabel *label_43;
    QFrame *line_6;
    QLabel *l_trip_capacityRegenerated;
    QLabel *l_trip_capacityUsed;
    QLabel *label_21;
    QLabel *l_trip_ncurrentAvg_2;
    QLabel *label_18;
    QLabel *label_22;
    QLabel *label_14;
    QLabel *label_8;
    QLabel *label_19;
    QLabel *label_9;

    void setupUi(QMainWindow *REV_HMI)
    {
        if (REV_HMI->objectName().isEmpty())
            REV_HMI->setObjectName(QStringLiteral("REV_HMI"));
        REV_HMI->resize(1280, 720);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(REV_HMI->sizePolicy().hasHeightForWidth());
        REV_HMI->setSizePolicy(sizePolicy);
        REV_HMI->setMinimumSize(QSize(1280, 720));
        REV_HMI->setMaximumSize(QSize(1280, 720));
        QFont font;
        font.setFamily(QStringLiteral("Lucida Console"));
        font.setKerning(true);
        font.setStyleStrategy(QFont::PreferDefault);
        REV_HMI->setFont(font);
        REV_HMI->setFocusPolicy(Qt::ClickFocus);
        REV_HMI->setContextMenuPolicy(Qt::CustomContextMenu);
        REV_HMI->setWindowOpacity(1);
        REV_HMI->setStyleSheet(QLatin1String("\n"
"QProgressBar {\n"
"	background-color: rgba(255, 255, 255, 150);\n"
"    border: 2px solid grey;\n"
"    border-radius: 5px;\n"
"	text-align: center;\n"
"}\n"
"\n"
"QProgressBar::chunk {\n"
"    border-radius: 3px;\n"
"    margin: 1.0px;\n"
"}\n"
"QProgressBar{\n"
"font: 75 20pt \"Latha\";\n"
"}\n"
"\n"
"\n"
""));
        centralWidget = new QWidget(REV_HMI);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setMinimumSize(QSize(1280, 720));
        centralWidget->setMaximumSize(QSize(1280, 720));
        QPalette palette;
        QRadialGradient gradient(0.5, 0.5, 0.5, 0.5, 0.5);
        gradient.setSpread(QGradient::PadSpread);
        gradient.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient.setColorAt(0, QColor(255, 255, 255, 255));
        gradient.setColorAt(1, QColor(0, 129, 9, 255));
        QBrush brush(gradient);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush1);
        QRadialGradient gradient1(0.5, 0.5, 0.5, 0.5, 0.5);
        gradient1.setSpread(QGradient::PadSpread);
        gradient1.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient1.setColorAt(0, QColor(255, 255, 255, 255));
        gradient1.setColorAt(1, QColor(0, 129, 9, 255));
        QBrush brush2(gradient1);
        palette.setBrush(QPalette::Active, QPalette::Base, brush2);
        QRadialGradient gradient2(0.5, 0.5, 0.5, 0.5, 0.5);
        gradient2.setSpread(QGradient::PadSpread);
        gradient2.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient2.setColorAt(0, QColor(255, 255, 255, 255));
        gradient2.setColorAt(1, QColor(0, 129, 9, 255));
        QBrush brush3(gradient2);
        palette.setBrush(QPalette::Active, QPalette::Window, brush3);
        QRadialGradient gradient3(0.5, 0.5, 0.5, 0.5, 0.5);
        gradient3.setSpread(QGradient::PadSpread);
        gradient3.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient3.setColorAt(0, QColor(255, 255, 255, 255));
        gradient3.setColorAt(1, QColor(0, 129, 9, 255));
        QBrush brush4(gradient3);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        QRadialGradient gradient4(0.5, 0.5, 0.5, 0.5, 0.5);
        gradient4.setSpread(QGradient::PadSpread);
        gradient4.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient4.setColorAt(0, QColor(255, 255, 255, 255));
        gradient4.setColorAt(1, QColor(0, 129, 9, 255));
        QBrush brush5(gradient4);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush5);
        QRadialGradient gradient5(0.5, 0.5, 0.5, 0.5, 0.5);
        gradient5.setSpread(QGradient::PadSpread);
        gradient5.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient5.setColorAt(0, QColor(255, 255, 255, 255));
        gradient5.setColorAt(1, QColor(0, 129, 9, 255));
        QBrush brush6(gradient5);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        QRadialGradient gradient6(0.5, 0.5, 0.5, 0.5, 0.5);
        gradient6.setSpread(QGradient::PadSpread);
        gradient6.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient6.setColorAt(0, QColor(255, 255, 255, 255));
        gradient6.setColorAt(1, QColor(0, 129, 9, 255));
        QBrush brush7(gradient6);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        QRadialGradient gradient7(0.5, 0.5, 0.5, 0.5, 0.5);
        gradient7.setSpread(QGradient::PadSpread);
        gradient7.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient7.setColorAt(0, QColor(255, 255, 255, 255));
        gradient7.setColorAt(1, QColor(0, 129, 9, 255));
        QBrush brush8(gradient7);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush8);
        QRadialGradient gradient8(0.5, 0.5, 0.5, 0.5, 0.5);
        gradient8.setSpread(QGradient::PadSpread);
        gradient8.setCoordinateMode(QGradient::ObjectBoundingMode);
        gradient8.setColorAt(0, QColor(255, 255, 255, 255));
        gradient8.setColorAt(1, QColor(0, 129, 9, 255));
        QBrush brush9(gradient8);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        centralWidget->setPalette(palette);
        QFont font1;
        font1.setFamily(QStringLiteral("Lucida Console"));
        centralWidget->setFont(font1);
        centralWidget->setStyleSheet(QLatin1String("#centralWidget{\n"
"	background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(0, 129, 9, 255));\n"
"}\n"
"\n"
"QToolButton{\n"
"color: rgb(0, 0, 0);\n"
"}\n"
"\n"
"QCheckBox {\n"
"color: rgb(0,0,0);\n"
"}"));
        menuButt = new QWidget(centralWidget);
        menuButt->setObjectName(QStringLiteral("menuButt"));
        menuButt->setGeometry(QRect(290, 590, 721, 131));
        menuButt->setFocusPolicy(Qt::NoFocus);
        menuButt->setContextMenuPolicy(Qt::DefaultContextMenu);
        menuButtons = new QHBoxLayout(menuButt);
        menuButtons->setObjectName(QStringLiteral("menuButtons"));
        homeBut = new QPushButton(menuButt);
        homeBut->setObjectName(QStringLiteral("homeBut"));
        homeBut->setMaximumSize(QSize(100, 100));
        homeBut->setFocusPolicy(Qt::ClickFocus);
        homeBut->setStyleSheet(QLatin1String("#homeBut:disabled{\n"
"background-color: rgba(255, 255, 255, 0);\n"
"	border-image: url(:/Icons/car.png);\n"
"}\n"
"#homeBut{\n"
"background-color: rgba(255, 255, 255, 0);\n"
"	border-image: url(:/Icons/carw.png);\n"
"}"));

        menuButtons->addWidget(homeBut);

        battBut = new QPushButton(menuButt);
        battBut->setObjectName(QStringLiteral("battBut"));
        battBut->setMaximumSize(QSize(100, 100));
        battBut->setFocusPolicy(Qt::ClickFocus);
        battBut->setStyleSheet(QLatin1String("#battBut:disabled{\n"
"background-color: rgba(255, 255, 255, 0);\n"
"	border-image: url(:/Icons/battery.png);\n"
"}\n"
"#battBut{\n"
"background-color: rgba(255, 255, 255, 0);\n"
"	border-image: url(:/Icons/batteryw.png);\n"
"}\n"
""));

        menuButtons->addWidget(battBut);

        mapBut = new QPushButton(menuButt);
        mapBut->setObjectName(QStringLiteral("mapBut"));
        mapBut->setMaximumSize(QSize(100, 100));
        mapBut->setFocusPolicy(Qt::ClickFocus);
        mapBut->setStyleSheet(QLatin1String("#mapBut:disabled{\n"
"background-color: rgba(255, 255, 255, 0);\n"
"	border-image: url(:/Icons/map.png);\n"
"}\n"
"#mapBut{\n"
"background-color: rgba(255, 255, 255, 0);\n"
"	border-image: url(:/Icons/mapw.png);\n"
"}"));

        menuButtons->addWidget(mapBut);

        tripBut = new QPushButton(menuButt);
        tripBut->setObjectName(QStringLiteral("tripBut"));
        tripBut->setMinimumSize(QSize(0, 0));
        tripBut->setMaximumSize(QSize(100, 100));
        tripBut->setFocusPolicy(Qt::ClickFocus);
        tripBut->setStyleSheet(QLatin1String("#tripBut:disabled{\n"
"background-color: rgba(255, 255, 255, 0);\n"
"	border-image: url(:/Icons/data.png);\n"
"}\n"
"#tripBut{\n"
"background-color: rgba(255, 255, 255, 0);\n"
"	border-image: url(:/Icons/dataw.png);\n"
"}"));

        menuButtons->addWidget(tripBut);

        musicBut = new QPushButton(menuButt);
        musicBut->setObjectName(QStringLiteral("musicBut"));
        musicBut->setMaximumSize(QSize(100, 100));
        musicBut->setFocusPolicy(Qt::ClickFocus);
        musicBut->setStyleSheet(QLatin1String("#musicBut:disabled{\n"
"background-color: rgba(255, 255, 255, 0);\n"
"	border-image: url(:/Icons/music.png);\n"
"}\n"
"#musicBut{\n"
"background-color: rgba(255, 255, 255, 0);\n"
"	border-image: url(:/Icons/musicw.png);\n"
"}"));

        menuButtons->addWidget(musicBut);

        logBut = new QPushButton(menuButt);
        logBut->setObjectName(QStringLiteral("logBut"));
        logBut->setMaximumSize(QSize(100, 100));
        logBut->setFocusPolicy(Qt::ClickFocus);
        logBut->setStyleSheet(QLatin1String("#logBut:disabled{\n"
"background-color: rgba(255, 255, 255, 0);\n"
"	border-image: url(:/Icons/log.png);\n"
"}\n"
"#logBut{\n"
"background-color: rgba(255, 255, 255, 0);\n"
"	border-image: url(:/Icons/logw.png);\n"
"}"));

        menuButtons->addWidget(logBut);

        log = new QWidget(centralWidget);
        log->setObjectName(QStringLiteral("log"));
        log->setGeometry(QRect(0, 0, 1280, 600));
        log->setFont(font1);
        log->setStyleSheet(QLatin1String("QPushButton:focus{\n"
"color: rgb(255, 0, 4);\n"
"}\n"
"QCheckBox:focus{\n"
"background-color: rgba(255, 0, 4, 50);\n"
"}"));
        layoutWidget_3 = new QWidget(log);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(950, 40, 291, 521));
        logLayout = new QVBoxLayout(layoutWidget_3);
        logLayout->setSpacing(3);
        logLayout->setObjectName(QStringLiteral("logLayout"));
        logLayout->setContentsMargins(10, 0, 10, 0);
        pushButton_clear_errors = new QPushButton(layoutWidget_3);
        pushButton_clear_errors->setObjectName(QStringLiteral("pushButton_clear_errors"));
        pushButton_clear_errors->setMaximumSize(QSize(16777215, 50));
        QFont font2;
        font2.setPointSize(16);
        pushButton_clear_errors->setFont(font2);
        pushButton_clear_errors->setStyleSheet(QStringLiteral("selection-background-color: rgb(255, 0, 0);"));

        logLayout->addWidget(pushButton_clear_errors);

        checkBox_logGpsRaw = new QCheckBox(layoutWidget_3);
        checkBox_logGpsRaw->setObjectName(QStringLiteral("checkBox_logGpsRaw"));
        checkBox_logGpsRaw->setStyleSheet(QLatin1String("QCheckBox::indicator {\n"
"     width: 30px;\n"
"     height: 30px;\n"
"}"));

        logLayout->addWidget(checkBox_logGpsRaw);

        checkBox_logBmsRaw = new QCheckBox(layoutWidget_3);
        checkBox_logBmsRaw->setObjectName(QStringLiteral("checkBox_logBmsRaw"));
        checkBox_logBmsRaw->setStyleSheet(QLatin1String("QCheckBox::indicator {\n"
"     width: 30px;\n"
"     height: 30px;\n"
"}"));

        logLayout->addWidget(checkBox_logBmsRaw);

        pushButton_Runsound = new QPushButton(layoutWidget_3);
        pushButton_Runsound->setObjectName(QStringLiteral("pushButton_Runsound"));
        pushButton_Runsound->setMaximumSize(QSize(16777215, 50));
        pushButton_Runsound->setFont(font2);
        pushButton_Runsound->setStyleSheet(QStringLiteral("selection-background-color: rgb(255, 0, 0);"));

        logLayout->addWidget(pushButton_Runsound);

        horizontalSlider = new QSlider(layoutWidget_3);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(horizontalSlider->sizePolicy().hasHeightForWidth());
        horizontalSlider->setSizePolicy(sizePolicy1);
        horizontalSlider->setFocusPolicy(Qt::NoFocus);
        horizontalSlider->setMaximum(100);
        horizontalSlider->setValue(50);
        horizontalSlider->setSliderPosition(50);
        horizontalSlider->setOrientation(Qt::Horizontal);

        logLayout->addWidget(horizontalSlider);

        checkBox_GPSFile = new QCheckBox(layoutWidget_3);
        checkBox_GPSFile->setObjectName(QStringLiteral("checkBox_GPSFile"));
        checkBox_GPSFile->setStyleSheet(QLatin1String("QCheckBox::indicator {\n"
"     width: 30px;\n"
"     height: 30px;\n"
"}"));

        logLayout->addWidget(checkBox_GPSFile);

        checkBox_BMSFile = new QCheckBox(layoutWidget_3);
        checkBox_BMSFile->setObjectName(QStringLiteral("checkBox_BMSFile"));
        checkBox_BMSFile->setStyleSheet(QLatin1String("QCheckBox::indicator {\n"
"     width: 30px;\n"
"     height: 30px;\n"
"}"));

        logLayout->addWidget(checkBox_BMSFile);

        pushButton_defaultSettings = new QPushButton(layoutWidget_3);
        pushButton_defaultSettings->setObjectName(QStringLiteral("pushButton_defaultSettings"));
        pushButton_defaultSettings->setMaximumSize(QSize(16777215, 50));
        pushButton_defaultSettings->setFont(font2);
        pushButton_defaultSettings->setStyleSheet(QStringLiteral("selection-background-color: rgb(255, 0, 0);"));

        logLayout->addWidget(pushButton_defaultSettings);

        pushButton_exit = new QPushButton(layoutWidget_3);
        pushButton_exit->setObjectName(QStringLiteral("pushButton_exit"));
        pushButton_exit->setMaximumSize(QSize(16777215, 50));
        QFont font3;
        font3.setPointSize(18);
        font3.setBold(true);
        font3.setWeight(75);
        pushButton_exit->setFont(font3);
        pushButton_exit->setStyleSheet(QStringLiteral("selection-background-color: rgb(255, 0, 0);"));

        logLayout->addWidget(pushButton_exit);

        textBrowser_errors = new QTextBrowser(log);
        textBrowser_errors->setObjectName(QStringLiteral("textBrowser_errors"));
        textBrowser_errors->setGeometry(QRect(470, 30, 471, 531));
        textBrowser_errors->setFocusPolicy(Qt::NoFocus);
        textBrowser_errors->setStyleSheet(QLatin1String("font: 10pt \"Lucida Console\";\n"
"background-color: rgb(212, 212, 212);"));
        efficiencyPlot = new QCustomPlot(log);
        efficiencyPlot->setObjectName(QStringLiteral("efficiencyPlot"));
        efficiencyPlot->setGeometry(QRect(0, 30, 461, 251));
        efficiencyPlot->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        battInfo = new QWidget(log);
        battInfo->setObjectName(QStringLiteral("battInfo"));
        battInfo->setGeometry(QRect(20, 280, 411, 281));
        info_battTable = new QTableWidget(battInfo);
        if (info_battTable->columnCount() < 11)
            info_battTable->setColumnCount(11);
        if (info_battTable->rowCount() < 8)
            info_battTable->setRowCount(8);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        info_battTable->setItem(0, 0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        info_battTable->setItem(0, 1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        info_battTable->setItem(0, 2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        info_battTable->setItem(1, 1, __qtablewidgetitem3);
        info_battTable->setObjectName(QStringLiteral("info_battTable"));
        info_battTable->setEnabled(false);
        info_battTable->setGeometry(QRect(-10, 10, 431, 291));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(100);
        sizePolicy2.setVerticalStretch(100);
        sizePolicy2.setHeightForWidth(info_battTable->sizePolicy().hasHeightForWidth());
        info_battTable->setSizePolicy(sizePolicy2);
        info_battTable->setFocusPolicy(Qt::NoFocus);
        info_battTable->setStyleSheet(QStringLiteral(""));
        info_battTable->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        info_battTable->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        info_battTable->setAutoScroll(false);
        info_battTable->setTabKeyNavigation(false);
        info_battTable->setSelectionMode(QAbstractItemView::NoSelection);
        info_battTable->setShowGrid(true);
        info_battTable->setRowCount(8);
        info_battTable->setColumnCount(11);
        info_battTable->horizontalHeader()->setVisible(false);
        info_battTable->horizontalHeader()->setDefaultSectionSize(12);
        info_battTable->horizontalHeader()->setHighlightSections(false);
        info_battTable->horizontalHeader()->setMinimumSectionSize(5);
        info_battTable->verticalHeader()->setVisible(false);
        info_battTable->verticalHeader()->setDefaultSectionSize(12);
        info_battTable->verticalHeader()->setMinimumSectionSize(5);
        music = new QWidget(centralWidget);
        music->setObjectName(QStringLiteral("music"));
        music->setGeometry(QRect(0, 0, 1280, 600));
        music->setStyleSheet(QLatin1String("QPushButton:focus{\n"
"color: rgb(255, 0, 4);\n"
"}\n"
"QCheckBox:focus{\n"
"background-color: rgba(255, 0, 4, 50);\n"
"}\n"
"QToolButton:focus{\n"
"background-color:rgba(255,0,4,50);\n"
"}"));
        layoutWidget = new QWidget(music);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 140, 1241, 461));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        musicLayout = new QVBoxLayout();
        musicLayout->setSpacing(0);
        musicLayout->setObjectName(QStringLiteral("musicLayout"));
        musicLayout->setContentsMargins(0, -1, -1, -1);
        pushButton_moveUp = new QPushButton(layoutWidget);
        pushButton_moveUp->setObjectName(QStringLiteral("pushButton_moveUp"));
        pushButton_moveUp->setMaximumSize(QSize(300, 50));

        musicLayout->addWidget(pushButton_moveUp);

        pushButton_shuffle = new QPushButton(layoutWidget);
        pushButton_shuffle->setObjectName(QStringLiteral("pushButton_shuffle"));
        pushButton_shuffle->setMaximumSize(QSize(300, 50));

        musicLayout->addWidget(pushButton_shuffle);

        pushButton_moveDown = new QPushButton(layoutWidget);
        pushButton_moveDown->setObjectName(QStringLiteral("pushButton_moveDown"));
        pushButton_moveDown->setMaximumSize(QSize(300, 50));

        musicLayout->addWidget(pushButton_moveDown);

        checkBox_repeatThis = new QCheckBox(layoutWidget);
        checkBox_repeatThis->setObjectName(QStringLiteral("checkBox_repeatThis"));
        checkBox_repeatThis->setMaximumSize(QSize(300, 50));

        musicLayout->addWidget(checkBox_repeatThis);

        checkBox_repeatAll = new QCheckBox(layoutWidget);
        checkBox_repeatAll->setObjectName(QStringLiteral("checkBox_repeatAll"));
        checkBox_repeatAll->setMaximumSize(QSize(300, 50));

        musicLayout->addWidget(checkBox_repeatAll);

        pushButton_addSong = new QPushButton(layoutWidget);
        pushButton_addSong->setObjectName(QStringLiteral("pushButton_addSong"));
        pushButton_addSong->setMaximumSize(QSize(300, 50));

        musicLayout->addWidget(pushButton_addSong);


        gridLayout->addLayout(musicLayout, 0, 2, 1, 1);

        tableWidget_mediaList = new QTableWidget(layoutWidget);
        if (tableWidget_mediaList->columnCount() < 3)
            tableWidget_mediaList->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_mediaList->setHorizontalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_mediaList->setHorizontalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_mediaList->setHorizontalHeaderItem(2, __qtablewidgetitem6);
        tableWidget_mediaList->setObjectName(QStringLiteral("tableWidget_mediaList"));
        tableWidget_mediaList->setEnabled(true);
        tableWidget_mediaList->setMinimumSize(QSize(0, 0));
        tableWidget_mediaList->setMaximumSize(QSize(900, 16777215));
        tableWidget_mediaList->setFocusPolicy(Qt::NoFocus);
        tableWidget_mediaList->setStyleSheet(QStringLiteral("font: 75 10pt \"Latha\";"));
        tableWidget_mediaList->setFrameShape(QFrame::StyledPanel);
        tableWidget_mediaList->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_mediaList->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget_mediaList->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget_mediaList->setRowCount(0);
        tableWidget_mediaList->setColumnCount(3);
        tableWidget_mediaList->horizontalHeader()->setDefaultSectionSize(250);
        tableWidget_mediaList->horizontalHeader()->setMinimumSectionSize(150);
        tableWidget_mediaList->verticalHeader()->setDefaultSectionSize(50);
        tableWidget_mediaList->verticalHeader()->setMinimumSectionSize(50);

        gridLayout->addWidget(tableWidget_mediaList, 0, 1, 1, 1);

        widget = new QWidget(layoutWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMaximumSize(QSize(100, 16777215));
        volumeSlider = new QSlider(widget);
        volumeSlider->setObjectName(QStringLiteral("volumeSlider"));
        volumeSlider->setGeometry(QRect(0, 50, 100, 400));
        sizePolicy.setHeightForWidth(volumeSlider->sizePolicy().hasHeightForWidth());
        volumeSlider->setSizePolicy(sizePolicy);
        volumeSlider->setMinimumSize(QSize(0, 400));
        volumeSlider->setMaximumSize(QSize(100, 400));
        volumeSlider->setFocusPolicy(Qt::NoFocus);
        volumeSlider->setLayoutDirection(Qt::LeftToRight);
        volumeSlider->setValue(60);
        volumeSlider->setSliderPosition(60);
        volumeSlider->setOrientation(Qt::Vertical);
        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 10, 81, 31));
        QFont font4;
        font4.setFamily(QStringLiteral("Lucida Grande"));
        font4.setPointSize(20);
        label_3->setFont(font4);
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(widget, 0, 0, 1, 1);

        layoutWidget_2 = new QWidget(music);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(20, 10, 1241, 121));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        pushButton_prev = new QPushButton(layoutWidget_2);
        pushButton_prev->setObjectName(QStringLiteral("pushButton_prev"));
        pushButton_prev->setMaximumSize(QSize(200, 200));
        pushButton_prev->setFocusPolicy(Qt::ClickFocus);
        pushButton_prev->setStyleSheet(QLatin1String("border-image: url(:/images/prev.png);\n"
""));

        horizontalLayout_7->addWidget(pushButton_prev);

        pushButton_play = new QPushButton(layoutWidget_2);
        pushButton_play->setObjectName(QStringLiteral("pushButton_play"));
        pushButton_play->setMaximumSize(QSize(200, 200));
        pushButton_play->setFocusPolicy(Qt::ClickFocus);
        pushButton_play->setStyleSheet(QLatin1String("#pushButton_play:focus{\n"
"background-color: rgba(255, 255, 255, 0);\n"
"	border-image: url(:/images/pause.png);\n"
"}\n"
"\n"
"#pushButton_play{\n"
"background-color: rgba(255, 255, 255, 0);\n"
"	border-image: url(:/images/play.png);\n"
"}\n"
"\n"
""));

        horizontalLayout_7->addWidget(pushButton_play);

        seekSlider = new QSlider(layoutWidget_2);
        seekSlider->setObjectName(QStringLiteral("seekSlider"));
        seekSlider->setMaximumSize(QSize(500, 16777215));
        seekSlider->setFocusPolicy(Qt::NoFocus);
        seekSlider->setMaximum(1000);
        seekSlider->setOrientation(Qt::Horizontal);
        seekSlider->setTickPosition(QSlider::NoTicks);

        horizontalLayout_7->addWidget(seekSlider);

        pushButton_stop = new QPushButton(layoutWidget_2);
        pushButton_stop->setObjectName(QStringLiteral("pushButton_stop"));
        pushButton_stop->setMaximumSize(QSize(200, 200));
        pushButton_stop->setFocusPolicy(Qt::ClickFocus);
        pushButton_stop->setStyleSheet(QStringLiteral("border-image: url(:/images/stop.png);"));

        horizontalLayout_7->addWidget(pushButton_stop);

        pushButton_next = new QPushButton(layoutWidget_2);
        pushButton_next->setObjectName(QStringLiteral("pushButton_next"));
        pushButton_next->setMaximumSize(QSize(200, 200));
        pushButton_next->setFocusPolicy(Qt::ClickFocus);
        pushButton_next->setStyleSheet(QStringLiteral("border-image: url(:/images/next.png);"));

        horizontalLayout_7->addWidget(pushButton_next);

        trip = new QWidget(centralWidget);
        trip->setObjectName(QStringLiteral("trip"));
        trip->setGeometry(QRect(0, 0, 1280, 600));
        trip->setStyleSheet(QLatin1String("QPushButton:focus{\n"
"color: rgb(255, 0, 4);\n"
"}\n"
"QCheckBox:focus{\n"
"background-color: rgba(255, 0, 4, 50);\n"
"}"));
        verticalLayoutWidget = new QWidget(trip);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(1020, 10, 251, 571));
        tripButLayout = new QVBoxLayout(verticalLayoutWidget);
        tripButLayout->setObjectName(QStringLiteral("tripButLayout"));
        tripButLayout->setContentsMargins(0, 0, 0, 0);
        editname_label = new QLabel(verticalLayoutWidget);
        editname_label->setObjectName(QStringLiteral("editname_label"));
        QFont font5;
        font5.setPointSize(25);
        editname_label->setFont(font5);
        editname_label->setStyleSheet(QStringLiteral(""));
        editname_label->setAlignment(Qt::AlignCenter);

        tripButLayout->addWidget(editname_label);

        editname = new QTextEdit(verticalLayoutWidget);
        editname->setObjectName(QStringLiteral("editname"));
        editname->setMaximumSize(QSize(16777215, 30));

        tripButLayout->addWidget(editname);

        label_7 = new QLabel(verticalLayoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font5);
        label_7->setStyleSheet(QStringLiteral(""));
        label_7->setAlignment(Qt::AlignCenter);

        tripButLayout->addWidget(label_7);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        pushButton_stopRecording = new QPushButton(verticalLayoutWidget);
        pushButton_stopRecording->setObjectName(QStringLiteral("pushButton_stopRecording"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(pushButton_stopRecording->sizePolicy().hasHeightForWidth());
        pushButton_stopRecording->setSizePolicy(sizePolicy3);
        pushButton_stopRecording->setMinimumSize(QSize(80, 25));
        pushButton_stopRecording->setMaximumSize(QSize(125, 50));
        QFont font6;
        font6.setPointSize(20);
        pushButton_stopRecording->setFont(font6);
        pushButton_stopRecording->setStyleSheet(QStringLiteral("selection-background-color: rgb(255, 0, 0);"));

        gridLayout_6->addWidget(pushButton_stopRecording, 1, 1, 1, 1);

        pushButton_startRecording = new QPushButton(verticalLayoutWidget);
        pushButton_startRecording->setObjectName(QStringLiteral("pushButton_startRecording"));
        sizePolicy3.setHeightForWidth(pushButton_startRecording->sizePolicy().hasHeightForWidth());
        pushButton_startRecording->setSizePolicy(sizePolicy3);
        pushButton_startRecording->setMinimumSize(QSize(80, 50));
        pushButton_startRecording->setMaximumSize(QSize(125, 50));
        pushButton_startRecording->setFont(font6);
        pushButton_startRecording->setStyleSheet(QStringLiteral("selection-background-color: rgb(255, 0, 0);"));

        gridLayout_6->addWidget(pushButton_startRecording, 1, 0, 1, 1);


        tripButLayout->addLayout(gridLayout_6);

        pushButton_changeRange = new QPushButton(verticalLayoutWidget);
        pushButton_changeRange->setObjectName(QStringLiteral("pushButton_changeRange"));
        pushButton_changeRange->setMaximumSize(QSize(250, 50));
        QFont font7;
        font7.setPointSize(18);
        pushButton_changeRange->setFont(font7);
        pushButton_changeRange->setStyleSheet(QStringLiteral("selection-background-color: rgb(255, 0, 0);"));

        tripButLayout->addWidget(pushButton_changeRange);

        label_10 = new QLabel(verticalLayoutWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        QFont font8;
        font8.setFamily(QStringLiteral("Lucida Console"));
        font8.setPointSize(25);
        font8.setBold(false);
        font8.setItalic(false);
        font8.setWeight(50);
        label_10->setFont(font8);
        label_10->setStyleSheet(QStringLiteral(""));
        label_10->setAlignment(Qt::AlignCenter);

        tripButLayout->addWidget(label_10);

        l_trip_time = new QLabel(verticalLayoutWidget);
        l_trip_time->setObjectName(QStringLiteral("l_trip_time"));
        l_trip_time->setStyleSheet(QStringLiteral("font: 75 20pt \"Lucida Console\";"));
        l_trip_time->setText(QStringLiteral("00:00:00"));
        l_trip_time->setAlignment(Qt::AlignCenter);

        tripButLayout->addWidget(l_trip_time);

        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font5);
        label_4->setStyleSheet(QStringLiteral(""));
        label_4->setAlignment(Qt::AlignCenter);

        tripButLayout->addWidget(label_4);

        l_drive_time = new QLabel(verticalLayoutWidget);
        l_drive_time->setObjectName(QStringLiteral("l_drive_time"));
        l_drive_time->setStyleSheet(QStringLiteral("font: 75 20pt \"Lucida Console\";"));
        l_drive_time->setText(QStringLiteral("00:00:00"));
        l_drive_time->setAlignment(Qt::AlignCenter);

        tripButLayout->addWidget(l_drive_time);

        label_54 = new QLabel(verticalLayoutWidget);
        label_54->setObjectName(QStringLiteral("label_54"));
        label_54->setFont(font5);
        label_54->setStyleSheet(QStringLiteral(""));
        label_54->setAlignment(Qt::AlignCenter);

        tripButLayout->addWidget(label_54);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        pushButton_location = new QPushButton(verticalLayoutWidget);
        pushButton_location->setObjectName(QStringLiteral("pushButton_location"));
        sizePolicy.setHeightForWidth(pushButton_location->sizePolicy().hasHeightForWidth());
        pushButton_location->setSizePolicy(sizePolicy);
        pushButton_location->setMinimumSize(QSize(100, 50));
        pushButton_location->setMaximumSize(QSize(125, 100));
        pushButton_location->setFont(font6);
        pushButton_location->setStyleSheet(QStringLiteral("selection-background-color: rgb(255, 0, 0);"));

        gridLayout_7->addWidget(pushButton_location, 1, 0, 1, 1);

        pushButton_export = new QPushButton(verticalLayoutWidget);
        pushButton_export->setObjectName(QStringLiteral("pushButton_export"));
        pushButton_export->setMinimumSize(QSize(0, 25));
        pushButton_export->setMaximumSize(QSize(125, 50));
        pushButton_export->setFont(font6);
        pushButton_export->setStyleSheet(QStringLiteral("selection-background-color: rgb(255, 0, 0);"));

        gridLayout_7->addWidget(pushButton_export, 1, 1, 1, 1);


        tripButLayout->addLayout(gridLayout_7);

        label_exportLocation = new QLabel(verticalLayoutWidget);
        label_exportLocation->setObjectName(QStringLiteral("label_exportLocation"));
        QFont font9;
        font9.setPointSize(14);
        label_exportLocation->setFont(font9);
        label_exportLocation->setStyleSheet(QStringLiteral(""));
        label_exportLocation->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        tripButLayout->addWidget(label_exportLocation);

        gridWidget_2 = new QTransparentWidget(trip);
        gridWidget_2->setObjectName(QStringLiteral("gridWidget_2"));
        gridWidget_2->setGeometry(QRect(460, 310, 541, 271));
        trip_stats_layout = new QGridLayout(gridWidget_2);
        trip_stats_layout->setObjectName(QStringLiteral("trip_stats_layout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        totalenergy_label = new QLabel(gridWidget_2);
        totalenergy_label->setObjectName(QStringLiteral("totalenergy_label"));
        totalenergy_label->setMinimumSize(QSize(400, 50));
        totalenergy_label->setMaximumSize(QSize(16777215, 50));
        QFont font10;
        font10.setFamily(QStringLiteral("Lucida Console"));
        font10.setPointSize(22);
        font10.setBold(false);
        font10.setItalic(false);
        font10.setWeight(50);
        totalenergy_label->setFont(font10);
        totalenergy_label->setStyleSheet(QStringLiteral(""));

        horizontalLayout_4->addWidget(totalenergy_label);

        energyUse = new QLabel(gridWidget_2);
        energyUse->setObjectName(QStringLiteral("energyUse"));
        QFont font11;
        font11.setPointSize(22);
        energyUse->setFont(font11);
        energyUse->setStyleSheet(QStringLiteral(""));

        horizontalLayout_4->addWidget(energyUse);

        label_2 = new QLabel(gridWidget_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font10);
        label_2->setStyleSheet(QStringLiteral(""));

        horizontalLayout_4->addWidget(label_2);


        trip_stats_layout->addLayout(horizontalLayout_4, 5, 0, 1, 1);

        trip_hori1 = new QHBoxLayout();
        trip_hori1->setObjectName(QStringLiteral("trip_hori1"));
        trip_slabel_dist = new QLabel(gridWidget_2);
        trip_slabel_dist->setObjectName(QStringLiteral("trip_slabel_dist"));
        trip_slabel_dist->setMinimumSize(QSize(0, 50));
        trip_slabel_dist->setMaximumSize(QSize(350, 50));
        trip_slabel_dist->setFont(font10);
        trip_slabel_dist->setStyleSheet(QStringLiteral(""));

        trip_hori1->addWidget(trip_slabel_dist);

        l_trip_distance = new QLabel(gridWidget_2);
        l_trip_distance->setObjectName(QStringLiteral("l_trip_distance"));
        l_trip_distance->setMinimumSize(QSize(75, 25));
        l_trip_distance->setMaximumSize(QSize(100, 100));
        l_trip_distance->setFont(font11);
        l_trip_distance->setStyleSheet(QStringLiteral(""));
        l_trip_distance->setText(QStringLiteral("0.00"));
        l_trip_distance->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        trip_hori1->addWidget(l_trip_distance);

        label_distkm = new QLabel(gridWidget_2);
        label_distkm->setObjectName(QStringLiteral("label_distkm"));
        label_distkm->setMinimumSize(QSize(45, 25));
        label_distkm->setMaximumSize(QSize(60, 100));
        label_distkm->setFont(font11);
        label_distkm->setLayoutDirection(Qt::LeftToRight);
        label_distkm->setStyleSheet(QStringLiteral(""));
        label_distkm->setText(QStringLiteral("km"));
        label_distkm->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        trip_hori1->addWidget(label_distkm);


        trip_stats_layout->addLayout(trip_hori1, 4, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        energyRem_label = new QLabel(gridWidget_2);
        energyRem_label->setObjectName(QStringLiteral("energyRem_label"));
        energyRem_label->setMinimumSize(QSize(400, 50));
        energyRem_label->setMaximumSize(QSize(0, 50));
        energyRem_label->setFont(font10);
        energyRem_label->setStyleSheet(QStringLiteral(""));
        energyRem_label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(energyRem_label);

        energyRem = new QLabel(gridWidget_2);
        energyRem->setObjectName(QStringLiteral("energyRem"));
        energyRem->setFont(font11);
        energyRem->setStyleSheet(QStringLiteral(""));

        horizontalLayout_2->addWidget(energyRem);

        label_5 = new QLabel(gridWidget_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font10);
        label_5->setStyleSheet(QStringLiteral(""));

        horizontalLayout_2->addWidget(label_5);


        trip_stats_layout->addLayout(horizontalLayout_2, 6, 0, 1, 1);

        trip_hori5 = new QHBoxLayout();
        trip_hori5->setObjectName(QStringLiteral("trip_hori5"));
        label_accel = new QLabel(gridWidget_2);
        label_accel->setObjectName(QStringLiteral("label_accel"));
        label_accel->setMinimumSize(QSize(100, 50));
        label_accel->setMaximumSize(QSize(400, 50));
        label_accel->setFont(font10);
        label_accel->setStyleSheet(QStringLiteral(""));

        trip_hori5->addWidget(label_accel);

        l_trip_Accel60 = new QLabel(gridWidget_2);
        l_trip_Accel60->setObjectName(QStringLiteral("l_trip_Accel60"));
        l_trip_Accel60->setMinimumSize(QSize(75, 25));
        l_trip_Accel60->setMaximumSize(QSize(75, 50));
        l_trip_Accel60->setFont(font10);
        l_trip_Accel60->setStyleSheet(QStringLiteral(""));
        l_trip_Accel60->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        trip_hori5->addWidget(l_trip_Accel60);

        label_050s = new QLabel(gridWidget_2);
        label_050s->setObjectName(QStringLiteral("label_050s"));
        label_050s->setMinimumSize(QSize(70, 25));
        label_050s->setMaximumSize(QSize(45, 50));
        label_050s->setFont(font11);
        label_050s->setStyleSheet(QStringLiteral(""));

        trip_hori5->addWidget(label_050s);


        trip_stats_layout->addLayout(trip_hori5, 7, 0, 1, 1);

        IVPlot = new QCustomPlot(trip);
        IVPlot->setObjectName(QStringLiteral("IVPlot"));
        IVPlot->setGeometry(QRect(10, 10, 991, 291));
        IVPlot->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        widget_2 = new QTransparentWidget(trip);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(20, 320, 421, 261));
        label_avg = new QLabel(widget_2);
        label_avg->setObjectName(QStringLiteral("label_avg"));
        label_avg->setGeometry(QRect(140, 0, 100, 86));
        label_avg->setMinimumSize(QSize(50, 25));
        label_avg->setMaximumSize(QSize(100, 100));
        label_avg->setFont(font8);
        label_avg->setStyleSheet(QStringLiteral(""));
        label_avg->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_max = new QLabel(widget_2);
        label_max->setObjectName(QStringLiteral("label_max"));
        label_max->setGeometry(QRect(240, 0, 100, 86));
        label_max->setMinimumSize(QSize(75, 25));
        label_max->setMaximumSize(QSize(100, 100));
        label_max->setFont(font5);
        label_max->setStyleSheet(QStringLiteral(""));
        label_max->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_max->setIndent(15);
        label_current = new QLabel(widget_2);
        label_current->setObjectName(QStringLiteral("label_current"));
        label_current->setGeometry(QRect(0, 130, 121, 50));
        label_current->setMinimumSize(QSize(0, 0));
        label_current->setMaximumSize(QSize(200, 50));
        QFont font12;
        font12.setFamily(QStringLiteral("Lucida Console"));
        font12.setPointSize(20);
        font12.setBold(false);
        font12.setItalic(false);
        font12.setWeight(50);
        label_current->setFont(font12);
        label_current->setStyleSheet(QStringLiteral(""));
        label_current->setText(QStringLiteral("Current "));
        label_current->setIndent(-1);
        label_driveA = new QLabel(widget_2);
        label_driveA->setObjectName(QStringLiteral("label_driveA"));
        label_driveA->setGeometry(QRect(340, 140, 70, 40));
        label_driveA->setMinimumSize(QSize(45, 25));
        label_driveA->setMaximumSize(QSize(70, 50));
        label_driveA->setFont(font6);
        label_driveA->setStyleSheet(QStringLiteral(""));
        l_trip_speedMax = new QLabel(widget_2);
        l_trip_speedMax->setObjectName(QStringLiteral("l_trip_speedMax"));
        l_trip_speedMax->setGeometry(QRect(260, 70, 75, 50));
        l_trip_speedMax->setMinimumSize(QSize(75, 25));
        l_trip_speedMax->setMaximumSize(QSize(75, 50));
        l_trip_speedMax->setFont(font12);
        l_trip_speedMax->setStyleSheet(QStringLiteral(""));
        l_trip_speedMax->setText(QStringLiteral("0.00"));
        l_trip_speedMax->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_speedekmh = new QLabel(widget_2);
        label_speedekmh->setObjectName(QStringLiteral("label_speedekmh"));
        label_speedekmh->setGeometry(QRect(320, 60, 101, 71));
        sizePolicy.setHeightForWidth(label_speedekmh->sizePolicy().hasHeightForWidth());
        label_speedekmh->setSizePolicy(sizePolicy);
        label_speedekmh->setMinimumSize(QSize(45, 0));
        label_speedekmh->setMaximumSize(QSize(100000, 16777215));
        label_speedekmh->setFont(font6);
        label_speedekmh->setStyleSheet(QStringLiteral(""));
        label_speedekmh->setAlignment(Qt::AlignCenter);
        l_trip_ncurrentAvg = new QLabel(widget_2);
        l_trip_ncurrentAvg->setObjectName(QStringLiteral("l_trip_ncurrentAvg"));
        l_trip_ncurrentAvg->setGeometry(QRect(140, 130, 75, 50));
        l_trip_ncurrentAvg->setMinimumSize(QSize(75, 25));
        l_trip_ncurrentAvg->setMaximumSize(QSize(75, 50));
        l_trip_ncurrentAvg->setFont(font12);
        l_trip_ncurrentAvg->setStyleSheet(QStringLiteral(""));
        l_trip_ncurrentAvg->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        l_trip_ncurrentMax = new QLabel(widget_2);
        l_trip_ncurrentMax->setObjectName(QStringLiteral("l_trip_ncurrentMax"));
        l_trip_ncurrentMax->setGeometry(QRect(260, 130, 75, 50));
        l_trip_ncurrentMax->setMinimumSize(QSize(75, 25));
        l_trip_ncurrentMax->setMaximumSize(QSize(75, 50));
        l_trip_ncurrentMax->setFont(font6);
        l_trip_ncurrentMax->setStyleSheet(QStringLiteral(""));
        l_trip_ncurrentMax->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_tripspeed = new QLabel(widget_2);
        label_tripspeed->setObjectName(QStringLiteral("label_tripspeed"));
        label_tripspeed->setGeometry(QRect(0, 70, 131, 50));
        label_tripspeed->setMinimumSize(QSize(0, 0));
        label_tripspeed->setMaximumSize(QSize(220, 50));
        label_tripspeed->setFont(font12);
        label_tripspeed->setStyleSheet(QStringLiteral(""));
        l_trip_speedAvgElapsed = new QLabel(widget_2);
        l_trip_speedAvgElapsed->setObjectName(QStringLiteral("l_trip_speedAvgElapsed"));
        l_trip_speedAvgElapsed->setGeometry(QRect(140, 70, 75, 50));
        l_trip_speedAvgElapsed->setMinimumSize(QSize(75, 25));
        l_trip_speedAvgElapsed->setMaximumSize(QSize(75, 50));
        l_trip_speedAvgElapsed->setFont(font12);
        l_trip_speedAvgElapsed->setStyleSheet(QStringLiteral(""));
        l_trip_speedAvgElapsed->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_11 = new QLabel(widget_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(40, 190, 301, 51));
        QFont font13;
        font13.setPointSize(10);
        label_11->setFont(font13);
        gridWidget_2->raise();
        IVPlot->raise();
        verticalLayoutWidget->raise();
        widget_2->raise();
        home = new QWidget(centralWidget);
        home->setObjectName(QStringLiteral("home"));
        home->setEnabled(true);
        home->setGeometry(QRect(0, 0, 1280, 600));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(home->sizePolicy().hasHeightForWidth());
        home->setSizePolicy(sizePolicy4);
        home->setMinimumSize(QSize(1280, 600));
        home->setMaximumSize(QSize(16777215, 600));
        QPalette palette1;
        home->setPalette(palette1);
        home->setFocusPolicy(Qt::ClickFocus);
        home->setStyleSheet(QStringLiteral(""));
        warningIcons = new QWidget(home);
        warningIcons->setObjectName(QStringLiteral("warningIcons"));
        warningIcons->setGeometry(QRect(200, 20, 400, 100));
        warningIcons->setMaximumSize(QSize(900, 100));
        WarningIcons = new QGridLayout(warningIcons);
        WarningIcons->setObjectName(QStringLiteral("WarningIcons"));
        Handbrakeicon = new QLabel(warningIcons);
        Handbrakeicon->setObjectName(QStringLiteral("Handbrakeicon"));
        Handbrakeicon->setEnabled(true);
        sizePolicy.setHeightForWidth(Handbrakeicon->sizePolicy().hasHeightForWidth());
        Handbrakeicon->setSizePolicy(sizePolicy);
        Handbrakeicon->setMinimumSize(QSize(75, 75));
        Handbrakeicon->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 0);\n"
"border-image: url(:/images/Handbrakeicon.png);"));

        WarningIcons->addWidget(Handbrakeicon, 5, 4, 1, 1);

        Neticon = new QLabel(warningIcons);
        Neticon->setObjectName(QStringLiteral("Neticon"));
        Neticon->setEnabled(true);
        sizePolicy.setHeightForWidth(Neticon->sizePolicy().hasHeightForWidth());
        Neticon->setSizePolicy(sizePolicy);
        Neticon->setMinimumSize(QSize(75, 75));
        Neticon->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 0);\n"
"border-image: url(:/images/3Gicon.png);"));

        WarningIcons->addWidget(Neticon, 5, 7, 1, 1);

        CELicon = new QLabel(warningIcons);
        CELicon->setObjectName(QStringLiteral("CELicon"));
        CELicon->setEnabled(true);
        sizePolicy.setHeightForWidth(CELicon->sizePolicy().hasHeightForWidth());
        CELicon->setSizePolicy(sizePolicy);
        CELicon->setMinimumSize(QSize(75, 75));
        CELicon->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 0);\n"
"border-image: url(:/images/CELicon.png);"));

        WarningIcons->addWidget(CELicon, 5, 6, 1, 1);

        Dooricon = new QLabel(warningIcons);
        Dooricon->setObjectName(QStringLiteral("Dooricon"));
        Dooricon->setEnabled(true);
        sizePolicy.setHeightForWidth(Dooricon->sizePolicy().hasHeightForWidth());
        Dooricon->setSizePolicy(sizePolicy);
        Dooricon->setMinimumSize(QSize(75, 75));
        Dooricon->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 0);\n"
"border-image: url(:/images/Dooricon.png);"));

        WarningIcons->addWidget(Dooricon, 5, 2, 1, 1);

        SeatBelticon = new QLabel(warningIcons);
        SeatBelticon->setObjectName(QStringLiteral("SeatBelticon"));
        SeatBelticon->setEnabled(true);
        QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(50);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(SeatBelticon->sizePolicy().hasHeightForWidth());
        SeatBelticon->setSizePolicy(sizePolicy5);
        SeatBelticon->setMinimumSize(QSize(75, 75));
        SeatBelticon->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 0);\n"
"border-image: url(:/images/Belticon.png);"));

        WarningIcons->addWidget(SeatBelticon, 5, 3, 1, 1);

        speed = new QWidget(home);
        speed->setObjectName(QStringLiteral("speed"));
        speed->setEnabled(true);
        speed->setGeometry(QRect(480, 270, 311, 231));
        speed->setMinimumSize(QSize(150, 0));
        QFont font14;
        font14.setFamily(QStringLiteral("Lucida Console"));
        font14.setPointSize(30);
        font14.setBold(false);
        font14.setItalic(false);
        font14.setWeight(50);
        speed->setFont(font14);
        speed->setFocusPolicy(Qt::NoFocus);
        speed->setStyleSheet(QStringLiteral(""));
        l_speed = new QLabel(speed);
        l_speed->setObjectName(QStringLiteral("l_speed"));
        l_speed->setGeometry(QRect(70, 70, 191, 91));
        l_speed->setMinimumSize(QSize(150, 30));
        l_speed->setMaximumSize(QSize(2000, 2000));
        QFont font15;
        font15.setFamily(QStringLiteral("Lucida Console"));
        font15.setPointSize(60);
        font15.setBold(false);
        font15.setItalic(false);
        font15.setWeight(9);
        l_speed->setFont(font15);
        l_speed->setStyleSheet(QStringLiteral("font: 75 60pt \"Lucida Console\";"));
        l_speed->setText(QStringLiteral("--"));
        l_speed->setAlignment(Qt::AlignCenter);
        label_kmh = new QLabel(speed);
        label_kmh->setObjectName(QStringLiteral("label_kmh"));
        label_kmh->setGeometry(QRect(60, 180, 200, 18));
        label_kmh->setMaximumSize(QSize(200, 100));
        label_kmh->setStyleSheet(QStringLiteral("font: 75 20pt \"Lucida Console\";"));
        label_kmh->setAlignment(Qt::AlignCenter);
        l_time = new QLabel(home);
        l_time->setObjectName(QStringLiteral("l_time"));
        l_time->setGeometry(QRect(1090, 60, 150, 25));
        l_time->setMinimumSize(QSize(150, 25));
        l_time->setMaximumSize(QSize(150, 25));
        QFont font16;
        font16.setFamily(QStringLiteral("Liberation serif"));
        font16.setPointSize(15);
        font16.setBold(true);
        font16.setItalic(false);
        font16.setWeight(75);
        l_time->setFont(font16);
        l_time->setStyleSheet(QLatin1String("font: 75 15pt \"Liberation serif\";\n"
"font-weight:bold;"));
        l_time->setText(QStringLiteral("--:--:--"));
        l_time->setAlignment(Qt::AlignCenter);
        graphicsView = new QGraphicsView(home);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(550, 90, 181, 191));
        graphicsView->setFocusPolicy(Qt::NoFocus);
        graphicsView->setStyleSheet(QStringLiteral("border-image: url(:/images/REV-logo---round.png);"));
        driver_name = new QLabel(home);
        driver_name->setObjectName(QStringLiteral("driver_name"));
        driver_name->setGeometry(QRect(40, 40, 211, 71));
        driver_name->setStyleSheet(QStringLiteral("font: 75 15pt \"Lucida Console\";"));
        progressBar_battery = new QProgressBar(home);
        progressBar_battery->setObjectName(QStringLiteral("progressBar_battery"));
        progressBar_battery->setEnabled(true);
        progressBar_battery->setGeometry(QRect(50, 200, 120, 400));
        sizePolicy.setHeightForWidth(progressBar_battery->sizePolicy().hasHeightForWidth());
        progressBar_battery->setSizePolicy(sizePolicy);
        progressBar_battery->setMinimumSize(QSize(0, 200));
        progressBar_battery->setMaximumSize(QSize(200, 400));
        QFont font17;
        font17.setFamily(QStringLiteral("Latha"));
        font17.setPointSize(20);
        font17.setBold(false);
        font17.setItalic(false);
        font17.setWeight(9);
        progressBar_battery->setFont(font17);
        progressBar_battery->setAutoFillBackground(false);
        progressBar_battery->setStyleSheet(QLatin1String("QProgressBar::chunk {\n"
"	background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1, stop:0 rgb(0, 200, 0), stop:1 rgb(90, 255,80));\n"
"}"));
        progressBar_battery->setMaximum(100);
        progressBar_battery->setValue(90);
        progressBar_battery->setAlignment(Qt::AlignCenter);
        progressBar_battery->setTextVisible(true);
        progressBar_battery->setOrientation(Qt::Vertical);
        progressBar_battery->setInvertedAppearance(false);
        progressBar_battery->setFormat(QStringLiteral("%p%"));
        layoutWidget1 = new QWidget(home);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(50, 140, 121, 51));
        voltageText = new QHBoxLayout(layoutWidget1);
        voltageText->setObjectName(QStringLiteral("voltageText"));
        voltageText->setContentsMargins(0, 0, 0, 0);
        l_voltage = new QLabel(layoutWidget1);
        l_voltage->setObjectName(QStringLiteral("l_voltage"));
        l_voltage->setMinimumSize(QSize(0, 0));
        l_voltage->setMaximumSize(QSize(400, 200));
        QFont font18;
        font18.setFamily(QStringLiteral("Lucida Console"));
        font18.setPointSize(30);
        font18.setBold(false);
        font18.setItalic(false);
        font18.setWeight(9);
        l_voltage->setFont(font18);
        l_voltage->setStyleSheet(QStringLiteral("font: 75 30pt \"Lucida Console\";"));
        l_voltage->setText(QStringLiteral("0"));
        l_voltage->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        l_voltage->setWordWrap(true);

        voltageText->addWidget(l_voltage);

        labelVoltage = new QLabel(layoutWidget1);
        labelVoltage->setObjectName(QStringLiteral("labelVoltage"));
        labelVoltage->setMinimumSize(QSize(0, 0));
        labelVoltage->setMaximumSize(QSize(300, 200));
        labelVoltage->setFont(font18);
        labelVoltage->setStyleSheet(QStringLiteral("font: 75 30pt \"Lucida Console\";"));
        labelVoltage->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        labelVoltage->setWordWrap(true);

        voltageText->addWidget(labelVoltage);

        progressBar_amps = new QProgressBar(home);
        progressBar_amps->setObjectName(QStringLiteral("progressBar_amps"));
        progressBar_amps->setGeometry(QRect(1110, 200, 120, 300));
        sizePolicy4.setHeightForWidth(progressBar_amps->sizePolicy().hasHeightForWidth());
        progressBar_amps->setSizePolicy(sizePolicy4);
        progressBar_amps->setMinimumSize(QSize(0, 0));
        progressBar_amps->setMaximumSize(QSize(200, 600));
        progressBar_amps->setAutoFillBackground(false);
        progressBar_amps->setStyleSheet(QLatin1String("QProgressBar:verticall {\n"
"border: 1px solid gray;\n"
"border-radius: 3px;\n"
"background: white;\n"
"padding: 1px;\n"
"text-align: right;\n"
"}\n"
"QProgressBar::chunk:vertical {\n"
"background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #00AA00, stop: 1 #66FF66);\n"
"margin-top: 2px; /* space */\n"
"height: 10px;\n"
"}"));
        progressBar_amps->setValue(50);
        progressBar_amps->setAlignment(Qt::AlignCenter);
        progressBar_amps->setTextVisible(false);
        progressBar_amps->setOrientation(Qt::Vertical);
        progressBar_amps->setInvertedAppearance(false);
        progressBar_amps->setTextDirection(QProgressBar::TopToBottom);
        layoutWidget2 = new QWidget(home);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(1100, 140, 131, 51));
        currentText = new QHBoxLayout(layoutWidget2);
        currentText->setObjectName(QStringLiteral("currentText"));
        currentText->setContentsMargins(0, 0, 0, 0);
        l_current = new QLabel(layoutWidget2);
        l_current->setObjectName(QStringLiteral("l_current"));
        l_current->setMinimumSize(QSize(0, 0));
        l_current->setMaximumSize(QSize(1000, 100));
        l_current->setFont(font18);
        l_current->setStyleSheet(QStringLiteral("font: 75 30pt \"Lucida Console\";"));
        l_current->setText(QStringLiteral("0"));
        l_current->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        currentText->addWidget(l_current);

        label_A = new QLabel(layoutWidget2);
        label_A->setObjectName(QStringLiteral("label_A"));
        label_A->setMinimumSize(QSize(0, 0));
        label_A->setMaximumSize(QSize(100, 100));
        label_A->setStyleSheet(QStringLiteral("font: 75 30pt \"Lucida Console\";"));
        label_A->setText(QStringLiteral("A"));
        label_A->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        currentText->addWidget(label_A);

        progressBar_ampsCharge = new QProgressBar(home);
        progressBar_ampsCharge->setObjectName(QStringLiteral("progressBar_ampsCharge"));
        progressBar_ampsCharge->setGeometry(QRect(1110, 500, 120, 100));
        sizePolicy4.setHeightForWidth(progressBar_ampsCharge->sizePolicy().hasHeightForWidth());
        progressBar_ampsCharge->setSizePolicy(sizePolicy4);
        progressBar_ampsCharge->setMinimumSize(QSize(0, 0));
        progressBar_ampsCharge->setMaximumSize(QSize(200, 600));
        progressBar_ampsCharge->setAutoFillBackground(false);
        progressBar_ampsCharge->setStyleSheet(QLatin1String("QProgressBar:verticall {\n"
"border: 1px solid gray;\n"
"border-radius: 3px;\n"
"background: white;\n"
"padding: 1px;\n"
"text-align: right;\n"
"}\n"
"QProgressBar::chunk:vertical {\n"
"background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #00AA00, stop: 1 #66FF66);\n"
"margin-top: 2px; /* space */\n"
"height: 10px;\n"
"}"));
        progressBar_ampsCharge->setValue(0);
        progressBar_ampsCharge->setAlignment(Qt::AlignCenter);
        progressBar_ampsCharge->setTextVisible(false);
        progressBar_ampsCharge->setOrientation(Qt::Vertical);
        progressBar_ampsCharge->setInvertedAppearance(true);
        progressBar_ampsCharge->setTextDirection(QProgressBar::TopToBottom);
        horizontalLayoutWidget_2 = new QWidget(home);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(180, 210, 330, 80));
        horizontalLayout_9 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_tripDist = new QLabel(horizontalLayoutWidget_2);
        label_tripDist->setObjectName(QStringLiteral("label_tripDist"));
        QFont font19;
        font19.setFamily(QStringLiteral("Lucida Console"));
        font19.setPointSize(18);
        font19.setBold(false);
        font19.setItalic(false);
        font19.setWeight(50);
        label_tripDist->setFont(font19);
        label_tripDist->setStyleSheet(QStringLiteral(""));

        horizontalLayout_9->addWidget(label_tripDist);

        val_tripDist = new QLabel(horizontalLayoutWidget_2);
        val_tripDist->setObjectName(QStringLiteral("val_tripDist"));
        QFont font20;
        font20.setFamily(QStringLiteral("Lucida Console"));
        font20.setPointSize(20);
        font20.setBold(false);
        font20.setItalic(false);
        font20.setWeight(9);
        val_tripDist->setFont(font20);
        val_tripDist->setStyleSheet(QStringLiteral("font: 75 20pt \"Lucida Console\";"));

        horizontalLayout_9->addWidget(val_tripDist);

        horizontalLayoutWidget_3 = new QWidget(home);
        horizontalLayoutWidget_3->setObjectName(QStringLiteral("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(830, 200, 271, 80));
        horizontalLayout_10 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        label_tripTime = new QLabel(horizontalLayoutWidget_3);
        label_tripTime->setObjectName(QStringLiteral("label_tripTime"));
        label_tripTime->setFont(font7);
        label_tripTime->setStyleSheet(QStringLiteral(""));

        horizontalLayout_10->addWidget(label_tripTime);

        val_tripTime = new QLabel(horizontalLayoutWidget_3);
        val_tripTime->setObjectName(QStringLiteral("val_tripTime"));
        val_tripTime->setStyleSheet(QStringLiteral("font: 75 20pt \"Lucida Console\";"));

        horizontalLayout_10->addWidget(val_tripTime);

        label_6 = new QLabel(home);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(190, 320, 291, 31));
        label_6->setFont(font19);
        label_6->setStyleSheet(QStringLiteral(""));
        economy_label = new QLabel(home);
        economy_label->setObjectName(QStringLiteral("economy_label"));
        economy_label->setGeometry(QRect(950, 320, 141, 31));
        economy_label->setStyleSheet(QStringLiteral("font: 75 20pt \"Lucida Console\";"));
        economy_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        val_economy = new QLabel(home);
        val_economy->setObjectName(QStringLiteral("val_economy"));
        val_economy->setGeometry(QRect(770, 350, 321, 111));
        val_economy->setStyleSheet(QStringLiteral("font: 75 30pt \"Lucida Console\";"));
        val_economy->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        l_remdist = new QLabel(home);
        l_remdist->setObjectName(QStringLiteral("l_remdist"));
        l_remdist->setGeometry(QRect(190, 360, 61, 78));
        l_remdist->setMinimumSize(QSize(0, 0));
        l_remdist->setMaximumSize(QSize(200, 200));
        l_remdist->setFont(font18);
        l_remdist->setStyleSheet(QStringLiteral("font: 75 30pt \"Lucida Console\";"));
        l_remdist->setText(QStringLiteral("0"));
        l_remdist->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_KM = new QLabel(home);
        label_KM->setObjectName(QStringLiteral("label_KM"));
        label_KM->setGeometry(QRect(230, 360, 100, 78));
        label_KM->setMinimumSize(QSize(0, 30));
        label_KM->setMaximumSize(QSize(100, 100));
        label_KM->setFont(font18);
        label_KM->setStyleSheet(QStringLiteral("font: 75 30pt \"Lucida Console\";"));
        label_KM->setAlignment(Qt::AlignCenter);
        horizontalWidget = new QWidget(home);
        horizontalWidget->setObjectName(QStringLiteral("horizontalWidget"));
        horizontalWidget->setGeometry(QRect(680, 30, 400, 80));
        horizontalLayout = new QHBoxLayout(horizontalWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        GPSicon = new QLabel(horizontalWidget);
        GPSicon->setObjectName(QStringLiteral("GPSicon"));
        GPSicon->setEnabled(true);
        sizePolicy.setHeightForWidth(GPSicon->sizePolicy().hasHeightForWidth());
        GPSicon->setSizePolicy(sizePolicy);
        GPSicon->setMinimumSize(QSize(75, 75));
        GPSicon->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 0);\n"
"border-image: url(:/images/GPSicon.png);"));

        horizontalLayout->addWidget(GPSicon);

        TBSicon = new QLabel(horizontalWidget);
        TBSicon->setObjectName(QStringLiteral("TBSicon"));
        TBSicon->setEnabled(true);
        sizePolicy.setHeightForWidth(TBSicon->sizePolicy().hasHeightForWidth());
        TBSicon->setSizePolicy(sizePolicy);
        TBSicon->setMinimumSize(QSize(75, 75));
        TBSicon->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 0);\n"
"border-image: url(:/images/TBSicon.png);"));

        horizontalLayout->addWidget(TBSicon);

        lowBatticon = new QLabel(horizontalWidget);
        lowBatticon->setObjectName(QStringLiteral("lowBatticon"));
        lowBatticon->setEnabled(true);
        QSizePolicy sizePolicy6(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(50);
        sizePolicy6.setVerticalStretch(50);
        sizePolicy6.setHeightForWidth(lowBatticon->sizePolicy().hasHeightForWidth());
        lowBatticon->setSizePolicy(sizePolicy6);
        lowBatticon->setMinimumSize(QSize(75, 75));
        lowBatticon->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 0);\n"
"border-image: url(:/images/Lowbatticon.png);"));

        horizontalLayout->addWidget(lowBatticon);

        Fueldooricon = new QLabel(horizontalWidget);
        Fueldooricon->setObjectName(QStringLiteral("Fueldooricon"));
        Fueldooricon->setEnabled(true);
        sizePolicy.setHeightForWidth(Fueldooricon->sizePolicy().hasHeightForWidth());
        Fueldooricon->setSizePolicy(sizePolicy);
        Fueldooricon->setMinimumSize(QSize(75, 75));
        Fueldooricon->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 0);\n"
"border-image: url(:/images/Fueldooricon.png);"));

        horizontalLayout->addWidget(Fueldooricon);

        Safetyswitchicon = new QLabel(horizontalWidget);
        Safetyswitchicon->setObjectName(QStringLiteral("Safetyswitchicon"));
        Safetyswitchicon->setEnabled(true);
        sizePolicy.setHeightForWidth(Safetyswitchicon->sizePolicy().hasHeightForWidth());
        Safetyswitchicon->setSizePolicy(sizePolicy);
        Safetyswitchicon->setMinimumSize(QSize(75, 75));
        Safetyswitchicon->setStyleSheet(QLatin1String("background-color: rgba(255, 255, 255, 0);\n"
"border-image: url(:/images/Safetyswitchicon.png);"));

        horizontalLayout->addWidget(Safetyswitchicon);

        efficiencyBar = new QProgressBar(home);
        efficiencyBar->setObjectName(QStringLiteral("efficiencyBar"));
        efficiencyBar->setGeometry(QRect(440, 550, 411, 51));
        efficiencyBar->setValue(50);
        efficiencyBar->setTextVisible(false);
        label = new QLabel(home);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(520, 510, 141, 41));
        label->setStyleSheet(QStringLiteral("font: 75 20pt \"Lucida Console\";"));
        efficiencyLabel = new QLabel(home);
        efficiencyLabel->setObjectName(QStringLiteral("efficiencyLabel"));
        efficiencyLabel->setGeometry(QRect(690, 510, 141, 31));
        efficiencyLabel->setStyleSheet(QStringLiteral("font: 75 20pt \"Lucida Console\";"));
        tempBlack = new QWidget(centralWidget);
        tempBlack->setObjectName(QStringLiteral("tempBlack"));
        tempBlack->setEnabled(true);
        tempBlack->setGeometry(QRect(0, 0, 1281, 711));
        tempBlack->setFocusPolicy(Qt::NoFocus);
        tempBlack->setStyleSheet(QLatin1String("\n"
"	background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(0, 129, 9, 255));\n"
""));
        REVlogo = new QGraphicsView(tempBlack);
        REVlogo->setObjectName(QStringLiteral("REVlogo"));
        REVlogo->setEnabled(true);
        REVlogo->setGeometry(QRect(970, 610, 311, 81));
        REVlogo->setFocusPolicy(Qt::NoFocus);
        REVlogo->setStyleSheet(QStringLiteral("border-image: url(:/images/logo.png);"));
        uwaLogo = new QGraphicsView(tempBlack);
        uwaLogo->setObjectName(QStringLiteral("uwaLogo"));
        uwaLogo->setEnabled(true);
        uwaLogo->setGeometry(QRect(20, 620, 281, 81));
        uwaLogo->setFocusPolicy(Qt::NoFocus);
        uwaLogo->setStyleSheet(QStringLiteral("border-image: url(:/images/UWA-logo.png);"));
        uwaLogo->raise();
        REVlogo->raise();
        map = new QWidget(centralWidget);
        map->setObjectName(QStringLiteral("map"));
        map->setGeometry(QRect(0, 0, 1280, 600));
        mapWidget = new MapWidget(map);
        mapWidget->setObjectName(QStringLiteral("mapWidget"));
        mapWidget->setGeometry(QRect(0, 0, 1280, 600));
        controls = new QWidget(mapWidget);
        controls->setObjectName(QStringLiteral("controls"));
        controls->setGeometry(QRect(990, 140, 281, 381));
        verticalLayout_4 = new QVBoxLayout(controls);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        mapControls = new QWidget(controls);
        mapControls->setObjectName(QStringLiteral("mapControls"));
        mapControls->setStyleSheet(QStringLiteral(""));
        verticalLayout_3 = new QVBoxLayout(mapControls);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, -1, 25, -1);
        pushButton_zoomIn = new QPushButton(mapControls);
        pushButton_zoomIn->setObjectName(QStringLiteral("pushButton_zoomIn"));
        sizePolicy4.setHeightForWidth(pushButton_zoomIn->sizePolicy().hasHeightForWidth());
        pushButton_zoomIn->setSizePolicy(sizePolicy4);
        pushButton_zoomIn->setMinimumSize(QSize(165, 25));
        pushButton_zoomIn->setMaximumSize(QSize(10000, 50));
        QFont font21;
        font21.setFamily(QStringLiteral("Latha"));
        font21.setPointSize(18);
        font21.setBold(false);
        font21.setItalic(false);
        font21.setWeight(50);
        pushButton_zoomIn->setFont(font21);
        pushButton_zoomIn->setStyleSheet(QStringLiteral("selection-background-color: rgb(255, 0, 0);"));

        verticalLayout_3->addWidget(pushButton_zoomIn);

        pushButton_zoomOut = new QPushButton(mapControls);
        pushButton_zoomOut->setObjectName(QStringLiteral("pushButton_zoomOut"));
        sizePolicy3.setHeightForWidth(pushButton_zoomOut->sizePolicy().hasHeightForWidth());
        pushButton_zoomOut->setSizePolicy(sizePolicy3);
        pushButton_zoomOut->setMinimumSize(QSize(165, 25));
        pushButton_zoomOut->setMaximumSize(QSize(1000, 50));
        pushButton_zoomOut->setFont(font7);
        pushButton_zoomOut->setStyleSheet(QStringLiteral("selection-background-color: rgb(255, 0, 0);"));

        verticalLayout_3->addWidget(pushButton_zoomOut);

        checkBox_autoFollow = new QCheckBox(mapControls);
        checkBox_autoFollow->setObjectName(QStringLiteral("checkBox_autoFollow"));
        sizePolicy4.setHeightForWidth(checkBox_autoFollow->sizePolicy().hasHeightForWidth());
        checkBox_autoFollow->setSizePolicy(sizePolicy4);
        checkBox_autoFollow->setMinimumSize(QSize(165, 15));
        checkBox_autoFollow->setMaximumSize(QSize(300, 30));
        checkBox_autoFollow->setFont(font6);
        checkBox_autoFollow->setStyleSheet(QLatin1String("QCheckBox::indicator {\n"
"     width: 40px;\n"
"     height: 40px;\n"
"}"));
        checkBox_autoFollow->setChecked(true);

        verticalLayout_3->addWidget(checkBox_autoFollow);

        checkBox_showMyTrack = new QCheckBox(mapControls);
        checkBox_showMyTrack->setObjectName(QStringLiteral("checkBox_showMyTrack"));
        sizePolicy4.setHeightForWidth(checkBox_showMyTrack->sizePolicy().hasHeightForWidth());
        checkBox_showMyTrack->setSizePolicy(sizePolicy4);
        checkBox_showMyTrack->setMinimumSize(QSize(20, 30));
        checkBox_showMyTrack->setMaximumSize(QSize(300, 30));
        checkBox_showMyTrack->setFont(font6);
        checkBox_showMyTrack->setStyleSheet(QLatin1String("QCheckBox::indicator {\n"
"     width: 40px;\n"
"     height: 40px;\n"
"}"));
        checkBox_showMyTrack->setChecked(true);

        verticalLayout_3->addWidget(checkBox_showMyTrack);

        pushButton_loadTrack = new QPushButton(mapControls);
        pushButton_loadTrack->setObjectName(QStringLiteral("pushButton_loadTrack"));
        sizePolicy4.setHeightForWidth(pushButton_loadTrack->sizePolicy().hasHeightForWidth());
        pushButton_loadTrack->setSizePolicy(sizePolicy4);
        pushButton_loadTrack->setMinimumSize(QSize(165, 25));
        pushButton_loadTrack->setMaximumSize(QSize(500, 50));
        pushButton_loadTrack->setFont(font6);
        pushButton_loadTrack->setStyleSheet(QStringLiteral("selection-background-color: rgb(255, 0, 0);"));

        verticalLayout_3->addWidget(pushButton_loadTrack);

        pushButton_deleteTrack = new QPushButton(mapControls);
        pushButton_deleteTrack->setObjectName(QStringLiteral("pushButton_deleteTrack"));
        pushButton_deleteTrack->setMaximumSize(QSize(500, 50));
        pushButton_deleteTrack->setFont(font6);
        pushButton_deleteTrack->setStyleSheet(QStringLiteral("selection-background-color: rgb(255, 0, 0);"));

        verticalLayout_3->addWidget(pushButton_deleteTrack);


        verticalLayout_4->addWidget(mapControls);

        mapContHide = new QPushButton(mapWidget);
        mapContHide->setObjectName(QStringLiteral("mapContHide"));
        mapContHide->setGeometry(QRect(1010, 510, 231, 50));
        mapContHide->setMaximumSize(QSize(300, 50));
        QFont font22;
        font22.setPointSize(20);
        font22.setBold(true);
        font22.setWeight(75);
        mapContHide->setFont(font22);
        mapContHide->setLayoutDirection(Qt::LeftToRight);
        mapContHide->setStyleSheet(QStringLiteral("selection-background-color: rgb(255, 0, 0);"));
        battery = new QWidget(centralWidget);
        battery->setObjectName(QStringLiteral("battery"));
        battery->setEnabled(false);
        battery->setGeometry(QRect(0, 0, 1280, 600));
        sizePolicy.setHeightForWidth(battery->sizePolicy().hasHeightForWidth());
        battery->setSizePolicy(sizePolicy);
        battery->setFont(font1);
        battery->setStyleSheet(QLatin1String("QPushButton:focus{\n"
"color: rgb(255, 0, 4);\n"
"}\n"
"QCheckBox:focus{\n"
"background-color: rgba(255, 0, 4, 50);\n"
"}"));
        tableWidget_cellValues = new QTableWidget(battery);
        if (tableWidget_cellValues->columnCount() < 11)
            tableWidget_cellValues->setColumnCount(11);
        if (tableWidget_cellValues->rowCount() < 8)
            tableWidget_cellValues->setRowCount(8);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        __qtablewidgetitem7->setTextAlignment(Qt::AlignCenter);
        tableWidget_cellValues->setItem(0, 0, __qtablewidgetitem7);
        tableWidget_cellValues->setObjectName(QStringLiteral("tableWidget_cellValues"));
        tableWidget_cellValues->setGeometry(QRect(10, 10, 681, 411));
        QSizePolicy sizePolicy7(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy7.setHorizontalStretch(100);
        sizePolicy7.setVerticalStretch(100);
        sizePolicy7.setHeightForWidth(tableWidget_cellValues->sizePolicy().hasHeightForWidth());
        tableWidget_cellValues->setSizePolicy(sizePolicy7);
        tableWidget_cellValues->setSizeIncrement(QSize(1, 1));
        QFont font23;
        font23.setFamily(QStringLiteral("Lucida Console"));
        font23.setPointSize(11);
        font23.setBold(true);
        font23.setItalic(false);
        font23.setWeight(75);
        tableWidget_cellValues->setFont(font23);
        tableWidget_cellValues->setFocusPolicy(Qt::NoFocus);
        tableWidget_cellValues->setStyleSheet(QLatin1String("font: 75 11pt \"Lucida Console\";\n"
"font-weight: bold;\n"
"text-align: center;"));
        tableWidget_cellValues->setMidLineWidth(0);
        tableWidget_cellValues->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidget_cellValues->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidget_cellValues->setTabKeyNavigation(false);
        tableWidget_cellValues->setSelectionMode(QAbstractItemView::NoSelection);
        tableWidget_cellValues->setIconSize(QSize(20, 20));
        tableWidget_cellValues->setShowGrid(true);
        tableWidget_cellValues->setCornerButtonEnabled(false);
        tableWidget_cellValues->setRowCount(8);
        tableWidget_cellValues->setColumnCount(11);
        tableWidget_cellValues->horizontalHeader()->setVisible(false);
        tableWidget_cellValues->horizontalHeader()->setDefaultSectionSize(40);
        tableWidget_cellValues->horizontalHeader()->setHighlightSections(false);
        tableWidget_cellValues->horizontalHeader()->setMinimumSectionSize(10);
        tableWidget_cellValues->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidget_cellValues->verticalHeader()->setVisible(false);
        tableWidget_cellValues->verticalHeader()->setDefaultSectionSize(25);
        tableWidget_cellValues->verticalHeader()->setMinimumSectionSize(5);
        transparentWidget = new QTransparentWidget(battery);
        transparentWidget->setObjectName(QStringLiteral("transparentWidget"));
        transparentWidget->setGeometry(QRect(10, 430, 681, 161));
        QSizePolicy sizePolicy8(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(transparentWidget->sizePolicy().hasHeightForWidth());
        transparentWidget->setSizePolicy(sizePolicy8);
        l_cell_ave = new QLabel(transparentWidget);
        l_cell_ave->setObjectName(QStringLiteral("l_cell_ave"));
        l_cell_ave->setGeometry(QRect(140, 10, 61, 32));
        l_cell_ave->setFont(font7);
        l_cell_ave->setAlignment(Qt::AlignCenter);
        label_32 = new QLabel(transparentWidget);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setGeometry(QRect(20, 60, 121, 32));
        label_32->setFont(font7);
        label_33 = new QLabel(transparentWidget);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setGeometry(QRect(20, 110, 121, 32));
        label_33->setFont(font7);
        l_cell_max = new QLabel(transparentWidget);
        l_cell_max->setObjectName(QStringLiteral("l_cell_max"));
        l_cell_max->setGeometry(QRect(140, 110, 61, 32));
        l_cell_max->setFont(font7);
        l_cell_max->setAlignment(Qt::AlignCenter);
        l_cell_min = new QLabel(transparentWidget);
        l_cell_min->setObjectName(QStringLiteral("l_cell_min"));
        l_cell_min->setGeometry(QRect(140, 60, 61, 32));
        l_cell_min->setFont(font7);
        l_cell_min->setAlignment(Qt::AlignCenter);
        label_35 = new QLabel(transparentWidget);
        label_35->setObjectName(QStringLiteral("label_35"));
        label_35->setGeometry(QRect(20, 10, 111, 32));
        QSizePolicy sizePolicy9(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(label_35->sizePolicy().hasHeightForWidth());
        label_35->setSizePolicy(sizePolicy9);
        label_35->setFont(font7);
        label_36 = new QLabel(transparentWidget);
        label_36->setObjectName(QStringLiteral("label_36"));
        label_36->setGeometry(QRect(220, 10, 21, 32));
        label_36->setFont(font7);
        label_50 = new QLabel(transparentWidget);
        label_50->setObjectName(QStringLiteral("label_50"));
        label_50->setGeometry(QRect(220, 60, 21, 32));
        label_50->setFont(font7);
        label_56 = new QLabel(transparentWidget);
        label_56->setObjectName(QStringLiteral("label_56"));
        label_56->setGeometry(QRect(220, 110, 21, 32));
        label_56->setFont(font7);
        est_cap = new QLabel(transparentWidget);
        est_cap->setObjectName(QStringLiteral("est_cap"));
        est_cap->setGeometry(QRect(450, 50, 91, 20));
        est_cap->setFont(font6);
        est_cap->setAlignment(Qt::AlignCenter);
        label_57 = new QLabel(transparentWidget);
        label_57->setObjectName(QStringLiteral("label_57"));
        label_57->setGeometry(QRect(350, 20, 301, 21));
        label_57->setFont(font6);
        pushButton_NNreset = new QPushButton(transparentWidget);
        pushButton_NNreset->setObjectName(QStringLiteral("pushButton_NNreset"));
        pushButton_NNreset->setGeometry(QRect(420, 90, 150, 41));
        pushButton_NNreset->setMaximumSize(QSize(150, 75));
        pushButton_NNreset->setFont(font6);
        layoutWidget_4 = new QWidget(battery);
        layoutWidget_4->setObjectName(QStringLiteral("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(1000, 20, 261, 581));
        verticalLayout_10 = new QVBoxLayout(layoutWidget_4);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        label_maxVoltage = new QLabel(layoutWidget_4);
        label_maxVoltage->setObjectName(QStringLiteral("label_maxVoltage"));
        label_maxVoltage->setFont(font3);
        label_maxVoltage->setAlignment(Qt::AlignCenter);

        verticalLayout_10->addWidget(label_maxVoltage);

        l_trip_voltageMax = new QLabel(layoutWidget_4);
        l_trip_voltageMax->setObjectName(QStringLiteral("l_trip_voltageMax"));
        l_trip_voltageMax->setFont(font7);
        l_trip_voltageMax->setText(QStringLiteral("0"));
        l_trip_voltageMax->setAlignment(Qt::AlignCenter);

        verticalLayout_10->addWidget(l_trip_voltageMax);

        tableWidget_batteryCells_max = new QTableWidget(layoutWidget_4);
        if (tableWidget_batteryCells_max->columnCount() < 11)
            tableWidget_batteryCells_max->setColumnCount(11);
        if (tableWidget_batteryCells_max->rowCount() < 8)
            tableWidget_batteryCells_max->setRowCount(8);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget_batteryCells_max->setItem(0, 0, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget_batteryCells_max->setItem(0, 1, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget_batteryCells_max->setItem(0, 2, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget_batteryCells_max->setItem(1, 1, __qtablewidgetitem11);
        tableWidget_batteryCells_max->setObjectName(QStringLiteral("tableWidget_batteryCells_max"));
        tableWidget_batteryCells_max->setEnabled(false);
        tableWidget_batteryCells_max->setFocusPolicy(Qt::NoFocus);
        tableWidget_batteryCells_max->setStyleSheet(QLatin1String("QTableWidget{\n"
"border-width: 2px;\n"
"border-style: solid;\n"
"border-color: darkgrey;\n"
"border-radius: 8px;\n"
"padding:4px;\n"
"}\n"
"\n"
""));
        tableWidget_batteryCells_max->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidget_batteryCells_max->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidget_batteryCells_max->setAutoScroll(false);
        tableWidget_batteryCells_max->setSelectionMode(QAbstractItemView::NoSelection);
        tableWidget_batteryCells_max->setRowCount(8);
        tableWidget_batteryCells_max->setColumnCount(11);
        tableWidget_batteryCells_max->horizontalHeader()->setVisible(false);
        tableWidget_batteryCells_max->horizontalHeader()->setDefaultSectionSize(12);
        tableWidget_batteryCells_max->horizontalHeader()->setHighlightSections(false);
        tableWidget_batteryCells_max->horizontalHeader()->setMinimumSectionSize(8);
        tableWidget_batteryCells_max->verticalHeader()->setVisible(false);
        tableWidget_batteryCells_max->verticalHeader()->setDefaultSectionSize(12);
        tableWidget_batteryCells_max->verticalHeader()->setMinimumSectionSize(8);

        verticalLayout_10->addWidget(tableWidget_batteryCells_max);

        verticalSpacer_5 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_10->addItem(verticalSpacer_5);

        label_17 = new QLabel(layoutWidget_4);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setFont(font7);
        label_17->setAlignment(Qt::AlignCenter);

        verticalLayout_10->addWidget(label_17);

        gridLayout_8 = new QGridLayout();
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        l_max_bat = new QLabel(layoutWidget_4);
        l_max_bat->setObjectName(QStringLiteral("l_max_bat"));
        l_max_bat->setFont(font7);
        l_max_bat->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(l_max_bat, 0, 0, 1, 1);

        l_max_volt = new QLabel(layoutWidget_4);
        l_max_volt->setObjectName(QStringLiteral("l_max_volt"));
        l_max_volt->setFont(font7);
        l_max_volt->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(l_max_volt, 0, 1, 1, 1);


        verticalLayout_10->addLayout(gridLayout_8);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_10->addItem(verticalSpacer_3);

        label_minVoltage = new QLabel(layoutWidget_4);
        label_minVoltage->setObjectName(QStringLiteral("label_minVoltage"));
        label_minVoltage->setFont(font3);
        label_minVoltage->setAlignment(Qt::AlignCenter);

        verticalLayout_10->addWidget(label_minVoltage);

        l_trip_voltageMin = new QLabel(layoutWidget_4);
        l_trip_voltageMin->setObjectName(QStringLiteral("l_trip_voltageMin"));
        l_trip_voltageMin->setFont(font7);
        l_trip_voltageMin->setText(QStringLiteral("0"));
        l_trip_voltageMin->setAlignment(Qt::AlignCenter);

        verticalLayout_10->addWidget(l_trip_voltageMin);

        tableWidget_batteryCells_min = new QTableWidget(layoutWidget_4);
        if (tableWidget_batteryCells_min->columnCount() < 11)
            tableWidget_batteryCells_min->setColumnCount(11);
        if (tableWidget_batteryCells_min->rowCount() < 8)
            tableWidget_batteryCells_min->setRowCount(8);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget_batteryCells_min->setItem(0, 0, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget_batteryCells_min->setItem(0, 1, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget_batteryCells_min->setItem(0, 2, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget_batteryCells_min->setItem(1, 1, __qtablewidgetitem15);
        tableWidget_batteryCells_min->setObjectName(QStringLiteral("tableWidget_batteryCells_min"));
        tableWidget_batteryCells_min->setEnabled(false);
        tableWidget_batteryCells_min->setFocusPolicy(Qt::NoFocus);
        tableWidget_batteryCells_min->setStyleSheet(QLatin1String("QTableWidget{\n"
"border-width: 2px;\n"
"border-style: solid;\n"
"border-color: darkgrey;\n"
"border-radius: 8px;\n"
"padding:4px;\n"
"}\n"
"\n"
""));
        tableWidget_batteryCells_min->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidget_batteryCells_min->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidget_batteryCells_min->setAutoScroll(false);
        tableWidget_batteryCells_min->setSelectionMode(QAbstractItemView::NoSelection);
        tableWidget_batteryCells_min->setRowCount(8);
        tableWidget_batteryCells_min->setColumnCount(11);
        tableWidget_batteryCells_min->horizontalHeader()->setVisible(false);
        tableWidget_batteryCells_min->horizontalHeader()->setDefaultSectionSize(12);
        tableWidget_batteryCells_min->horizontalHeader()->setHighlightSections(false);
        tableWidget_batteryCells_min->horizontalHeader()->setMinimumSectionSize(8);
        tableWidget_batteryCells_min->verticalHeader()->setVisible(false);
        tableWidget_batteryCells_min->verticalHeader()->setDefaultSectionSize(12);
        tableWidget_batteryCells_min->verticalHeader()->setMinimumSectionSize(8);

        verticalLayout_10->addWidget(tableWidget_batteryCells_min);

        label_12 = new QLabel(layoutWidget_4);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setFont(font7);
        label_12->setAlignment(Qt::AlignCenter);

        verticalLayout_10->addWidget(label_12);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        l_min_bat = new QLabel(layoutWidget_4);
        l_min_bat->setObjectName(QStringLiteral("l_min_bat"));
        l_min_bat->setFont(font7);
        l_min_bat->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(l_min_bat, 0, 1, 1, 1);

        l_min_volt = new QLabel(layoutWidget_4);
        l_min_volt->setObjectName(QStringLiteral("l_min_volt"));
        l_min_volt->setFont(font7);
        l_min_volt->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(l_min_volt, 0, 2, 1, 1);


        verticalLayout_10->addLayout(gridLayout_2);

        verticalSpacer_12 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_10->addItem(verticalSpacer_12);

        tripWidget1 = new QTransparentWidget(battery);
        tripWidget1->setObjectName(QStringLiteral("tripWidget1"));
        tripWidget1->setGeometry(QRect(700, 10, 281, 581));
        trip1 = new QGridLayout(tripWidget1);
        trip1->setObjectName(QStringLiteral("trip1"));
        l_trip_pcurrentAvg = new QLabel(tripWidget1);
        l_trip_pcurrentAvg->setObjectName(QStringLiteral("l_trip_pcurrentAvg"));
        l_trip_pcurrentAvg->setFont(font7);
        l_trip_pcurrentAvg->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        trip1->addWidget(l_trip_pcurrentAvg, 5, 1, 1, 1);

        l_trip_capacityPerKm = new QLabel(tripWidget1);
        l_trip_capacityPerKm->setObjectName(QStringLiteral("l_trip_capacityPerKm"));
        l_trip_capacityPerKm->setFont(font7);
        l_trip_capacityPerKm->setText(QStringLiteral("0.00"));
        l_trip_capacityPerKm->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        trip1->addWidget(l_trip_capacityPerKm, 13, 2, 1, 1);

        label_16 = new QLabel(tripWidget1);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setFont(font7);

        trip1->addWidget(label_16, 5, 3, 1, 1);

        label_25 = new QLabel(tripWidget1);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setMinimumSize(QSize(100, 0));
        label_25->setFont(font7);
        label_25->setMargin(0);
        label_25->setIndent(15);

        trip1->addWidget(label_25, 5, 0, 1, 1);

        label_15 = new QLabel(tripWidget1);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setFont(font7);

        trip1->addWidget(label_15, 13, 3, 1, 1);

        l_trip_pcurrentMax = new QLabel(tripWidget1);
        l_trip_pcurrentMax->setObjectName(QStringLiteral("l_trip_pcurrentMax"));
        l_trip_pcurrentMax->setFont(font7);
        l_trip_pcurrentMax->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        trip1->addWidget(l_trip_pcurrentMax, 5, 2, 1, 1);

        l_trip_ncurrentMax_2 = new QLabel(tripWidget1);
        l_trip_ncurrentMax_2->setObjectName(QStringLiteral("l_trip_ncurrentMax_2"));
        l_trip_ncurrentMax_2->setFont(font7);
        l_trip_ncurrentMax_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        trip1->addWidget(l_trip_ncurrentMax_2, 6, 2, 1, 1);

        label_34 = new QLabel(tripWidget1);
        label_34->setObjectName(QStringLiteral("label_34"));
        label_34->setFont(font3);

        trip1->addWidget(label_34, 9, 0, 1, 2);

        label_44 = new QLabel(tripWidget1);
        label_44->setObjectName(QStringLiteral("label_44"));
        label_44->setFont(font3);
        label_44->setText(QStringLiteral("Current "));
        label_44->setIndent(-1);

        trip1->addWidget(label_44, 4, 0, 1, 2);

        label_28 = new QLabel(tripWidget1);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setFont(font7);

        trip1->addWidget(label_28, 6, 3, 1, 1);

        label_13 = new QLabel(tripWidget1);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setFont(font7);

        trip1->addWidget(label_13, 12, 3, 1, 1);

        label_43 = new QLabel(tripWidget1);
        label_43->setObjectName(QStringLiteral("label_43"));
        label_43->setMinimumSize(QSize(100, 0));
        label_43->setFont(font7);
        label_43->setIndent(15);

        trip1->addWidget(label_43, 6, 0, 1, 1);

        line_6 = new QFrame(tripWidget1);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);

        trip1->addWidget(line_6, 8, 0, 1, 4);

        l_trip_capacityRegenerated = new QLabel(tripWidget1);
        l_trip_capacityRegenerated->setObjectName(QStringLiteral("l_trip_capacityRegenerated"));
        l_trip_capacityRegenerated->setFont(font7);
        l_trip_capacityRegenerated->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        trip1->addWidget(l_trip_capacityRegenerated, 12, 2, 1, 1);

        l_trip_capacityUsed = new QLabel(tripWidget1);
        l_trip_capacityUsed->setObjectName(QStringLiteral("l_trip_capacityUsed"));
        l_trip_capacityUsed->setFont(font7);
        l_trip_capacityUsed->setText(QStringLiteral("0.00"));
        l_trip_capacityUsed->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        trip1->addWidget(l_trip_capacityUsed, 11, 2, 1, 1);

        label_21 = new QLabel(tripWidget1);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setFont(font7);
        label_21->setText(QStringLiteral("kWh"));

        trip1->addWidget(label_21, 11, 3, 1, 1);

        l_trip_ncurrentAvg_2 = new QLabel(tripWidget1);
        l_trip_ncurrentAvg_2->setObjectName(QStringLiteral("l_trip_ncurrentAvg_2"));
        l_trip_ncurrentAvg_2->setFont(font7);
        l_trip_ncurrentAvg_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        trip1->addWidget(l_trip_ncurrentAvg_2, 6, 1, 1, 1);

        label_18 = new QLabel(tripWidget1);
        label_18->setObjectName(QStringLiteral("label_18"));
        QFont font24;
        font24.setPointSize(20);
        font24.setUnderline(true);
        label_18->setFont(font24);
        label_18->setStyleSheet(QStringLiteral("text-decoration: underline;"));
        label_18->setAlignment(Qt::AlignCenter);

        trip1->addWidget(label_18, 0, 0, 1, 4);

        label_22 = new QLabel(tripWidget1);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setFont(font7);
        label_22->setIndent(15);

        trip1->addWidget(label_22, 12, 0, 1, 2);

        label_14 = new QLabel(tripWidget1);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setFont(font3);
        label_14->setIndent(15);

        trip1->addWidget(label_14, 1, 2, 1, 2);

        label_8 = new QLabel(tripWidget1);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font3);
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        trip1->addWidget(label_8, 1, 1, 1, 1);

        label_19 = new QLabel(tripWidget1);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setFont(font7);
        label_19->setIndent(15);

        trip1->addWidget(label_19, 11, 0, 1, 2);

        label_9 = new QLabel(tripWidget1);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font7);
        label_9->setIndent(15);

        trip1->addWidget(label_9, 13, 0, 1, 2);

        REV_HMI->setCentralWidget(centralWidget);
        home->raise();
        trip->raise();
        battery->raise();
        map->raise();
        music->raise();
        tempBlack->raise();
        menuButt->raise();
        log->raise();
        QWidget::setTabOrder(pushButton_stopRecording, pushButton_clear_errors);
        QWidget::setTabOrder(pushButton_clear_errors, checkBox_logGpsRaw);
        QWidget::setTabOrder(checkBox_logGpsRaw, checkBox_logBmsRaw);
        QWidget::setTabOrder(checkBox_logBmsRaw, pushButton_Runsound);
        QWidget::setTabOrder(pushButton_Runsound, checkBox_GPSFile);
        QWidget::setTabOrder(checkBox_GPSFile, checkBox_BMSFile);
        QWidget::setTabOrder(checkBox_BMSFile, pushButton_defaultSettings);
        QWidget::setTabOrder(pushButton_defaultSettings, pushButton_exit);
        QWidget::setTabOrder(pushButton_exit, pushButton_location);
        QWidget::setTabOrder(pushButton_location, editname);
        QWidget::setTabOrder(editname, pushButton_startRecording);
        QWidget::setTabOrder(pushButton_startRecording, pushButton_export);
        QWidget::setTabOrder(pushButton_export, pushButton_zoomIn);
        QWidget::setTabOrder(pushButton_zoomIn, pushButton_zoomOut);
        QWidget::setTabOrder(pushButton_zoomOut, checkBox_autoFollow);
        QWidget::setTabOrder(checkBox_autoFollow, pushButton_loadTrack);
        QWidget::setTabOrder(pushButton_loadTrack, pushButton_moveUp);
        QWidget::setTabOrder(pushButton_moveUp, pushButton_moveDown);
        QWidget::setTabOrder(pushButton_moveDown, checkBox_repeatThis);
        QWidget::setTabOrder(checkBox_repeatThis, checkBox_repeatAll);
        QWidget::setTabOrder(checkBox_repeatAll, pushButton_addSong);

        retranslateUi(REV_HMI);

        QMetaObject::connectSlotsByName(REV_HMI);
    } // setupUi

    void retranslateUi(QMainWindow *REV_HMI)
    {
        REV_HMI->setWindowTitle(QApplication::translate("REV_HMI", "MainWindow", Q_NULLPTR));
        homeBut->setText(QString());
        battBut->setText(QString());
        mapBut->setText(QString());
        tripBut->setText(QString());
        musicBut->setText(QString());
        logBut->setText(QString());
        pushButton_clear_errors->setText(QApplication::translate("REV_HMI", "Clear Log", Q_NULLPTR));
        checkBox_logGpsRaw->setText(QApplication::translate("REV_HMI", "GPS raw data", Q_NULLPTR));
        checkBox_logBmsRaw->setText(QApplication::translate("REV_HMI", "BMS raw data", Q_NULLPTR));
        pushButton_Runsound->setText(QApplication::translate("REV_HMI", "Run Eng Simu", Q_NULLPTR));
        checkBox_GPSFile->setText(QApplication::translate("REV_HMI", "GPS File", Q_NULLPTR));
        checkBox_BMSFile->setText(QApplication::translate("REV_HMI", "BMS File", Q_NULLPTR));
        pushButton_defaultSettings->setText(QApplication::translate("REV_HMI", "Default Settings", Q_NULLPTR));
        pushButton_exit->setText(QApplication::translate("REV_HMI", "Exit Program", Q_NULLPTR));

        const bool __sortingEnabled = info_battTable->isSortingEnabled();
        info_battTable->setSortingEnabled(false);
        info_battTable->setSortingEnabled(__sortingEnabled);

        pushButton_moveUp->setText(QApplication::translate("REV_HMI", "Move Up", Q_NULLPTR));
        pushButton_shuffle->setText(QApplication::translate("REV_HMI", "Shuffle", Q_NULLPTR));
        pushButton_moveDown->setText(QApplication::translate("REV_HMI", "Move Down", Q_NULLPTR));
        checkBox_repeatThis->setText(QApplication::translate("REV_HMI", "Repeat This", Q_NULLPTR));
        checkBox_repeatAll->setText(QApplication::translate("REV_HMI", "Repeat All", Q_NULLPTR));
        pushButton_addSong->setText(QApplication::translate("REV_HMI", "Add Song", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_mediaList->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("REV_HMI", "Title", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_mediaList->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("REV_HMI", "Artist", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_mediaList->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("REV_HMI", "Album", Q_NULLPTR));
        label_3->setText(QApplication::translate("REV_HMI", "Volume", Q_NULLPTR));
        pushButton_prev->setText(QApplication::translate("REV_HMI", "Prev", Q_NULLPTR));
        pushButton_play->setText(QApplication::translate("REV_HMI", "Play", Q_NULLPTR));
        pushButton_stop->setText(QApplication::translate("REV_HMI", "Stop", Q_NULLPTR));
        pushButton_next->setText(QApplication::translate("REV_HMI", "Next", Q_NULLPTR));
        editname_label->setText(QApplication::translate("REV_HMI", "Driver Name", Q_NULLPTR));
        label_7->setText(QApplication::translate("REV_HMI", "Logging", Q_NULLPTR));
        pushButton_stopRecording->setText(QApplication::translate("REV_HMI", "Stop", Q_NULLPTR));
        pushButton_startRecording->setText(QApplication::translate("REV_HMI", "Start", Q_NULLPTR));
        pushButton_changeRange->setText(QApplication::translate("REV_HMI", "Change max range", Q_NULLPTR));
        label_10->setText(QApplication::translate("REV_HMI", "Elapsed Time", Q_NULLPTR));
        label_4->setText(QApplication::translate("REV_HMI", "Driving Time", Q_NULLPTR));
        label_54->setText(QApplication::translate("REV_HMI", "Export to:", Q_NULLPTR));
        pushButton_location->setText(QApplication::translate("REV_HMI", "Location", Q_NULLPTR));
        pushButton_export->setText(QApplication::translate("REV_HMI", "Export", Q_NULLPTR));
        label_exportLocation->setText(QApplication::translate("REV_HMI", "Directory", Q_NULLPTR));
        totalenergy_label->setText(QApplication::translate("REV_HMI", "Total Energy Usage", Q_NULLPTR));
        energyUse->setText(QApplication::translate("REV_HMI", "0", Q_NULLPTR));
        label_2->setText(QApplication::translate("REV_HMI", "kWh", Q_NULLPTR));
        trip_slabel_dist->setText(QApplication::translate("REV_HMI", "Distance", Q_NULLPTR));
        energyRem_label->setText(QApplication::translate("REV_HMI", "Energy Remaining", Q_NULLPTR));
        energyRem->setText(QApplication::translate("REV_HMI", "0", Q_NULLPTR));
        label_5->setText(QApplication::translate("REV_HMI", "kWh", Q_NULLPTR));
        label_accel->setText(QApplication::translate("REV_HMI", "Accel 0-50 km/h", Q_NULLPTR));
        l_trip_Accel60->setText(QApplication::translate("REV_HMI", "0.00", Q_NULLPTR));
        label_050s->setText(QApplication::translate("REV_HMI", "s", Q_NULLPTR));
        label_avg->setText(QApplication::translate("REV_HMI", "Avg", Q_NULLPTR));
        label_max->setText(QApplication::translate("REV_HMI", "Max", Q_NULLPTR));
        label_driveA->setText(QApplication::translate("REV_HMI", "A", Q_NULLPTR));
        label_speedekmh->setText(QApplication::translate("REV_HMI", "km/h", Q_NULLPTR));
        l_trip_ncurrentAvg->setText(QApplication::translate("REV_HMI", "0.00", Q_NULLPTR));
        l_trip_ncurrentMax->setText(QApplication::translate("REV_HMI", "0.00", Q_NULLPTR));
        label_tripspeed->setText(QApplication::translate("REV_HMI", "Speed", Q_NULLPTR));
        l_trip_speedAvgElapsed->setText(QApplication::translate("REV_HMI", "0.00", Q_NULLPTR));
        label_11->setText(QApplication::translate("REV_HMI", "<html><head/><body><p>Energy [measured in Wh / 100km ]  </p><p>(typical values will be in range 100 - 250)</p></body></html>", Q_NULLPTR));
        Handbrakeicon->setText(QString());
        Neticon->setText(QString());
        CELicon->setText(QString());
        Dooricon->setText(QString());
        SeatBelticon->setText(QString());
        label_kmh->setText(QApplication::translate("REV_HMI", "km/h", Q_NULLPTR));
        driver_name->setText(QApplication::translate("REV_HMI", "UWA REV Project", Q_NULLPTR));
        labelVoltage->setText(QApplication::translate("REV_HMI", "V", Q_NULLPTR));
        label_tripDist->setText(QApplication::translate("REV_HMI", "Trip Distance", Q_NULLPTR));
        val_tripDist->setText(QApplication::translate("REV_HMI", "0.00 km", Q_NULLPTR));
        label_tripTime->setText(QApplication::translate("REV_HMI", "Trip Time", Q_NULLPTR));
        val_tripTime->setText(QApplication::translate("REV_HMI", "00:00:00", Q_NULLPTR));
        label_6->setText(QApplication::translate("REV_HMI", "Distance Remaining", Q_NULLPTR));
        economy_label->setText(QApplication::translate("REV_HMI", "Economy", Q_NULLPTR));
        val_economy->setText(QApplication::translate("REV_HMI", "0.00 Wh/km", Q_NULLPTR));
        label_KM->setText(QApplication::translate("REV_HMI", "km", Q_NULLPTR));
        GPSicon->setText(QString());
        TBSicon->setText(QString());
        lowBatticon->setText(QString());
        Fueldooricon->setText(QString());
        Safetyswitchicon->setText(QString());
        label->setText(QApplication::translate("REV_HMI", "Efficiency", Q_NULLPTR));
        efficiencyLabel->setText(QApplication::translate("REV_HMI", "-- %", Q_NULLPTR));
        pushButton_zoomIn->setText(QApplication::translate("REV_HMI", "Zoom in", Q_NULLPTR));
        pushButton_zoomOut->setText(QApplication::translate("REV_HMI", "Zoom out", Q_NULLPTR));
        checkBox_autoFollow->setText(QApplication::translate("REV_HMI", "Recenter", Q_NULLPTR));
        checkBox_showMyTrack->setText(QApplication::translate("REV_HMI", "Show track", Q_NULLPTR));
        pushButton_loadTrack->setText(QApplication::translate("REV_HMI", "Load track", Q_NULLPTR));
        pushButton_deleteTrack->setText(QApplication::translate("REV_HMI", "Delete track", Q_NULLPTR));
        mapContHide->setText(QApplication::translate("REV_HMI", "Hide Controls", Q_NULLPTR));

        const bool __sortingEnabled1 = tableWidget_cellValues->isSortingEnabled();
        tableWidget_cellValues->setSortingEnabled(false);
        tableWidget_cellValues->setSortingEnabled(__sortingEnabled1);

        l_cell_ave->setText(QApplication::translate("REV_HMI", "--", Q_NULLPTR));
        label_32->setText(QApplication::translate("REV_HMI", "Minimum", Q_NULLPTR));
        label_33->setText(QApplication::translate("REV_HMI", "Maximum", Q_NULLPTR));
        l_cell_max->setText(QApplication::translate("REV_HMI", "--", Q_NULLPTR));
        l_cell_min->setText(QApplication::translate("REV_HMI", "--", Q_NULLPTR));
        label_35->setText(QApplication::translate("REV_HMI", "Average", Q_NULLPTR));
        label_36->setText(QApplication::translate("REV_HMI", "V", Q_NULLPTR));
        label_50->setText(QApplication::translate("REV_HMI", "V", Q_NULLPTR));
        label_56->setText(QApplication::translate("REV_HMI", "V", Q_NULLPTR));
        est_cap->setText(QApplication::translate("REV_HMI", "--", Q_NULLPTR));
        label_57->setText(QApplication::translate("REV_HMI", "NN Estimator Value", Q_NULLPTR));
        pushButton_NNreset->setText(QApplication::translate("REV_HMI", "RESET", Q_NULLPTR));
        label_maxVoltage->setText(QApplication::translate("REV_HMI", "Max. Voltage", Q_NULLPTR));

        const bool __sortingEnabled2 = tableWidget_batteryCells_max->isSortingEnabled();
        tableWidget_batteryCells_max->setSortingEnabled(false);
        tableWidget_batteryCells_max->setSortingEnabled(__sortingEnabled2);

        label_17->setText(QApplication::translate("REV_HMI", "Maximum Cell", Q_NULLPTR));
        l_max_bat->setText(QApplication::translate("REV_HMI", "--", Q_NULLPTR));
        l_max_volt->setText(QApplication::translate("REV_HMI", "--", Q_NULLPTR));
        label_minVoltage->setText(QApplication::translate("REV_HMI", "Min. Voltage", Q_NULLPTR));

        const bool __sortingEnabled3 = tableWidget_batteryCells_min->isSortingEnabled();
        tableWidget_batteryCells_min->setSortingEnabled(false);
        tableWidget_batteryCells_min->setSortingEnabled(__sortingEnabled3);

        label_12->setText(QApplication::translate("REV_HMI", "Minimum Cell", Q_NULLPTR));
        l_min_bat->setText(QApplication::translate("REV_HMI", "--", Q_NULLPTR));
        l_min_volt->setText(QApplication::translate("REV_HMI", "--", Q_NULLPTR));
        l_trip_pcurrentAvg->setText(QApplication::translate("REV_HMI", "0.00", Q_NULLPTR));
        label_16->setText(QApplication::translate("REV_HMI", "A", Q_NULLPTR));
        label_25->setText(QApplication::translate("REV_HMI", "Charge", Q_NULLPTR));
        label_15->setText(QApplication::translate("REV_HMI", "kWh", Q_NULLPTR));
        l_trip_pcurrentMax->setText(QApplication::translate("REV_HMI", "0.00", Q_NULLPTR));
        l_trip_ncurrentMax_2->setText(QApplication::translate("REV_HMI", "0.00", Q_NULLPTR));
        label_34->setText(QApplication::translate("REV_HMI", "Energy", Q_NULLPTR));
        label_28->setText(QApplication::translate("REV_HMI", "A", Q_NULLPTR));
        label_13->setText(QApplication::translate("REV_HMI", "kWh", Q_NULLPTR));
        label_43->setText(QApplication::translate("REV_HMI", "Drive", Q_NULLPTR));
        l_trip_capacityRegenerated->setText(QApplication::translate("REV_HMI", "0.00", Q_NULLPTR));
        l_trip_ncurrentAvg_2->setText(QApplication::translate("REV_HMI", "0.00", Q_NULLPTR));
        label_18->setText(QApplication::translate("REV_HMI", "Trip Statistics", Q_NULLPTR));
        label_22->setText(QApplication::translate("REV_HMI", "Regen", Q_NULLPTR));
        label_14->setText(QApplication::translate("REV_HMI", "Max", Q_NULLPTR));
        label_8->setText(QApplication::translate("REV_HMI", "Avg", Q_NULLPTR));
        label_19->setText(QApplication::translate("REV_HMI", "Used", Q_NULLPTR));
        label_9->setText(QApplication::translate("REV_HMI", "Per km", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class REV_HMI: public Ui_REV_HMI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOTUS_HMI_H
