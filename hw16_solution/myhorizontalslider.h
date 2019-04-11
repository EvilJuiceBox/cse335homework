#ifndef MYHORIZONTALSLIDER_H
#define MYHORIZONTALSLIDER_H

#include <QSlider>
class MyHorizontalSlider:public QSlider
{
    Q_OBJECT

public:
    MyHorizontalSlider(QWidget* qw):QSlider(qw){};

signals:
    void iChanged(QObject*); //My own signal

public slots:
    void myCurrentPositionChanged(const int&);//For receiving its predefined signal. In its implementation, I emit my own signal.

};

#endif // MYHORIZONTALSLIDER_H
