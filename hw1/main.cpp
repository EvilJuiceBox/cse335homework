/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Veda
 *
 * Created on January 14, 2019, 5:14 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;


#include "Message.h"

void printSuperSecretMessage(const Message& input) //pass by reference
{
    cout << input.getMessage() << endl;
}

/*
 * 
 */
int main(int argc, char** argv) {
    const Message temp("Letoucan has arrived", "Praise"); //requirement 3
    
    //This is not an object, primitive types cannot be objects!!
    //const int definitelyNotAnObject = 1;
    printSuperSecretMessage(temp);
    
    cout << temp.getMessage() << endl; //requirement 4 
    //printSuperSecretMessage(temp&);
    
    return 0;
}

