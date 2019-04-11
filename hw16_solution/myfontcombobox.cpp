#include "myfontcombobox.h"

void MyFontComboBox::myCurrentFontChanged(const int&){
    emit iChanged(this);
}
