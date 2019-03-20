/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Bundle.h
 * Author: Veda
 *
 * Created on March 19, 2019, 8:41 PM
 */

#ifndef BUNDLE_H
#define BUNDLE_H
#include <vector>
#include "Item.h"

using std::vector;
using std::string;


class Bundle: public Item {
private:
    vector<Item*> cart;
    double discountRate;
    
public:
    Bundle(string name, double disc);
    virtual void addItem(Item* item);
    
    // destructor
    virtual ~Bundle(){
        for(int i=0; i<cart.size(); i++) delete cart[i];
    }
    
    virtual int getPrice() const; //override item getprice 
    virtual void print() const;
};

#endif /* BUNDLE_H */

