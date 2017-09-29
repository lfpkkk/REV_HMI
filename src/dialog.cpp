#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    //initialise ui
    ui->lineEdit_1->setPlaceholderText("Speed:0-150");
    ui->lineEdit_2->setPlaceholderText("Acceleration:0-20");
    ui->lineEdit_1->show();
    ui->lineEdit_2->show();
    ui->lineEdit_3->hide();
    ui->progressBar->hide();
    ui->Slider->hide();

    updateTimer = new QTimer(this);
    connect(updateTimer, SIGNAL(timeout()), this, SLOT(update()));
}

Dialog::~Dialog()
{
    delete ui;

    updateTimer->stop();
}

void Dialog::on_comboBox_currentIndexChanged(int _index)
{
    ui->lineEdit_2->hide();//lineEdit_2 is only used for acceleration
    ui->lineEdit_3->hide();//lineEdit_3 is only used for time
    ui->progressBar->hide();
    ui->Slider->hide();
    QIntValidator *pIntValidator_1 = new QIntValidator(this);
    QIntValidator *pIntValidator_2 = new QIntValidator(this);
    index = _index;

    if(index == 0){
        ui->lineEdit_3->hide();
        pIntValidator_1->setRange(0,150);
        ui->lineEdit_1->setValidator(pIntValidator_1);
        ui->lineEdit_1->setPlaceholderText("Speed:0-150");
        ui->lineEdit_1->show();

        pIntValidator_2->setRange(0,20);
        ui->lineEdit_2->setValidator(pIntValidator_2);
        ui->lineEdit_2->setPlaceholderText("Acceleration:0-20");
        ui->lineEdit_2->show();
    }

    if(index == 1){
        pIntValidator_1->setRange(0,500);
        ui->lineEdit_1->setValidator(pIntValidator_1);
        ui->lineEdit_1->setPlaceholderText("Distance:0-500");
        ui->lineEdit_1->show();
    }

    if(index == 2){
        ui->lineEdit_3->setPlaceholderText("hh:mm:ss");
        ui->lineEdit_3->show();
        ui->lineEdit_3->setFocus();
    }

    if(index == 3){
        ui->lineEdit_1->hide();
        ui->lineEdit_3->setPlaceholderText("hh:mm:ss");
        ui->lineEdit_3->show();
        ui->lineEdit_3->setFocus();
    }

    if(index == 4){
        ui->lineEdit_1->hide();
        ui->lineEdit_3->hide();
        ui->progressBar->show();
        ui->Slider->show();
    }
}

void Dialog::on_setBut_clicked()
{
    if(index == 0){
        inputData.speed = ui->lineEdit_1->text().toInt();
        inputData.acceleration = ui->lineEdit_2->text().toInt();

        if(inputData.setting_index%10 == 0){inputData.setting_index += 1;}
        qDebug()<<inputData.setting_index;
    }

    if(index == 1){
        inputData.drive_dist = ui->lineEdit_1->text().toFloat();

        if(inputData.setting_index/10%10 == 0){inputData.setting_index += 10;}
        qDebug()<<inputData.setting_index;
    }
    if(index == 2){
        QString time_str;
        time_str = ui->lineEdit_3->text();
        if(!time_str.isEmpty()){
            inputData.drive_time = QTime::fromString(time_str, "hh:mm:ss");
        }

        if(inputData.setting_index/100%10 == 0){inputData.setting_index += 100;}
        qDebug()<<inputData.setting_index;
    }
    if(index == 3){
        QString time_str;
        time_str = ui->lineEdit_3->text();
        if(!time_str.isEmpty()){
            inputData.dtime = QTime::fromString(time_str, "hh:mm:ss");
        }

        if(inputData.setting_index/1000%10 == 0){inputData.setting_index += 1000;}
        qDebug()<<inputData.setting_index;
    }
    if(index == 4){
        QString tmp, str = ui->progressBar->text();
        for(int i = 0; i < str.length(); i++) {
            if(str[i] > '0' && str[i] < '9')
                tmp.append(str[i]);
        }
        inputData.pcent = tmp.toInt();
        if(inputData.setting_index/10000%10 == 0){inputData.setting_index += 10000;}
        qDebug()<<str;
    }

}

//update values set in the dialog to the gui
void Dialog::update()
{
    if(testing){
        emit(updated(inputData));
    }
}

void Dialog::on_startBut_clicked()
{
    if(testing == false){
        updateTimer->start(1000);
    }
    testing = true;//trigger timer
    update();
    inputData.setting_index = 0;
}

void Dialog::on_resetBut_clicked()
{
    inputData.setting_index = -1;
    update();
    testing = false;
}
