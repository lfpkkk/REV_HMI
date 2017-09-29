#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QIntValidator>

#include "GPS.h"
#include "logger.h"
#include "battery.h"

namespace Ui {
class Dialog;
}

struct InputData
{
    int setting_index;// indicate the index of which the values are mannually set;
    int speed;
    int pcent;
    int acceleration;
    float drive_dist;
    qreal total_energy;
    qreal rmain_energy;
    QTime drive_time;
    QTime dtime;

    //initialization
    InputData(){
        setting_index = 0;
        speed = 0;
        pcent = 90;
        acceleration = 0;
        total_energy = 305.5;
        rmain_energy = 305.5*0.9;
        drive_dist = 0;
        drive_time = QTime(0,0);
        dtime = QTime(0,0);
    }

};

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private slots:
    void on_comboBox_currentIndexChanged(int index);
    void on_setBut_clicked();
    void update();

    void on_startBut_clicked();

    void on_resetBut_clicked();

private:
    Ui::Dialog *ui;

    QIntValidator *pIntValidator_1;
    QIntValidator *pIntValidator_2;
    int index;
    bool testing = false;
    QTimer *updateTimer;

    InputData inputData;

signals:
    void updated(InputData inputData);
};

#endif // DIALOG_H
