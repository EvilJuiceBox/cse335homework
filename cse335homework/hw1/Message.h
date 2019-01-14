/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Message.h
 * Author: Veda
 *
 * Created on January 14, 2019, 5:17 PM
 */

#ifndef MESSAGE_H
#define MESSAGE_H

class Message {
protected:
    string myMessage;
    string key;
    
public:
    Message(const string& message, const string& input) //requirement 2
    {
        this->myMessage = message;
        this->key = input;
    }
    
    string getMessage() const { //requirement 1
        return this->myMessage + " | " + this->key;
    }
    
    void setMessage(const string& input)
    {
        this->myMessage = input;
    }
};

#endif /* MESSAGE_H */

