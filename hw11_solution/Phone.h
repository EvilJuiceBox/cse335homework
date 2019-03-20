/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Phone.h
 * Author: Veda
 *
 * Created on March 19, 2019, 8:41 PM
 */

#ifndef PHONE_H
#define PHONE_H

#include "Item.h"


class Phone: public Item{
private:
    int year;
public:
    // constructor
    Phone(string name, float price, int y):Item(name,price){
        year = y;
    }
    
    // print out the phone name and price
    virtual void print() const{
        cout<<"(Phone name="<<this->getName()<<", Phone price="<<this->getPrice()<<");";
    }
    
    // destructor
    virtual ~Phone(){}
};

#endif /* PHONE_H */

