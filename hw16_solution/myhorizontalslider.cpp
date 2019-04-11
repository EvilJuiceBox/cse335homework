#include "myhorizontalslider.h"

void MyHorizontalSlider::myCurrentPositionChanged(const int&){
    emit iChanged(this);
}
