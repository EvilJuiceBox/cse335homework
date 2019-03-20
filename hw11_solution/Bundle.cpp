
#include "Bundle.h"
#include <iostream>
#include <cstdlib>

using namespace std;

Bundle::Bundle(string name, double disc): Item(name, 0)
{
    this->discountRate = disc;
}

void Bundle::addItem(Item* item){
    this->cart.push_back(item);
    this->incrementPrice(item->getPrice()); //add the price of the item to the cart.
}

int Bundle::getPrice() const { //Bundle has a special price, since theres a discount with it.
    return Item::getPrice() * this->discountRate;
}

void Bundle::print() const{
    cout<<"Bundle "<< this->getName() <<" contains:(";
        for(int i=0; i<cart.size(); i++){
            cart[i]->print();
        }
    cout << ";Bundle Price:" << this->getPrice() << ");";
}
