#ifndef MYRADIOBUTTON_H
#define MYRADIOBUTTON_H


#include <QRadioButton>

class MyRadioButton: public QRadioButton{
    Q_OBJECT

public:
    MyRadioButton(QWidget* qw):QRadioButton(qw){};
    MyRadioButton(QString qs):QRadioButton(qs){};

signals:
    void iChanged(QObject*); //My own signal

public slots:
    void myStateChanged();//For receiving its predefined signal. In its implementation, I emit my own signal.
};

#endif // MYRADIOBUTTON_H
