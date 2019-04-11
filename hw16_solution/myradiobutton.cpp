#include "myradiobutton.h"

void MyRadioButton::myStateChanged(){
    emit iChanged(this);
}
