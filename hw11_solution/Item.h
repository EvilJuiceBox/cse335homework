/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Item.h
 * Author: Veda
 *
 * Created on March 19, 2019, 8:41 PM
 */

#ifndef ITEM_H
#define ITEM_H
#include <string>
#include <iostream>

using std::string;
using std::cout;

class Item
{
public:
    Item(string n, int p) : name(n), price(p) {}
    
    virtual string getName() const
    {
        return this->name;
    }
    
    virtual int getPrice() const
    {
        return this->price;
    }
    
    //pure virtual function makes this class abstract class
    virtual void print() const = 0;
    
    // destructor
    virtual ~Item(){};
    
protected:
    virtual void incrementPrice(int input)
    {
        this->price += input;
    }
private:
    string name;
    int price;
    
};

#endif /* ITEM_H */

