#include "alexlineedit.h"

void AlexLineEdit::myEditingFinished(){
    emit iChanged(this);
}
