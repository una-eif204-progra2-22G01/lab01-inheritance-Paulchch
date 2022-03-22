//
// Created by Pablo Morera on 15/3/2022.
//

#ifndef LAB01_INHERITANCE_BASE_H
#define LAB01_INHERITANCE_BASE_H

#include<iostream>
#include<sstream>

class Base {
protected:
    int numObjeto;
public:
    int getNumObjeto() const;

    void setNumObjeto(int numObjeto);

public:
    Base();
    ~Base();
    virtual void do_something();
    virtual std::string toString() const;
};


#endif //LAB01_INHERITANCE_BASE_H
