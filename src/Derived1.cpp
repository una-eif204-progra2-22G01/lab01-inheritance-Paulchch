//
// Created by Pablo Morera on 15/3/2022.
//

#include "Derived1.h"

Derived1::Derived1() = default;
Derived1::~Derived1() = default;

std::string Derived1::toString() const {
    std::stringstream s;
    s<< "Este es un objeto Derived1"<<std::endl;
    return s.str();
}

void Derived1::do_something() {
    //Base::do_something();
    std::cout<<"Derived1!!!"<<std::endl;
}
