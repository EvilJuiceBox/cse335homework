#ifndef ALEXFONTCOMBOBOX_H
#define ALEXFONTCOMBOBOX_H

#include <QComboBox>

class MyFontComboBox: public QComboBox{
    Q_OBJECT

public:
    MyFontComboBox(QWidget* qw):QComboBox(qw){};

signals:
    void iChanged(QObject*); //My own signal

public slots:
    void myCurrentFontChanged(const int&);//For receiving its predefined signal. In its implementation, I emit my own signal.
};

#endif // ALEXFONTCOMBOBOX_H
