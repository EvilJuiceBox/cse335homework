/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Laptop.h
 * Author: Veda
 *
 * Created on March 19, 2019, 8:41 PM
 */

#ifndef LAPTOP_H
#define LAPTOP_H

#include "Item.h"


class Laptop: public Item {
private:
    string cpu;
public:
    // constructor
    Laptop(string name, float price, string input) : Item(name,price){
        cpu = input;
    }
    
    // print out the laptop name and price
    virtual void print() const{
        cout<<"(Laptop name="<<this->getName()<<", Laptop price="<<this->getPrice()<<");";
    }
    
    // destructor
    virtual ~Laptop(){}
};


#endif /* LAPTOP_H */

