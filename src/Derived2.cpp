//
// Created by Pablo Morera on 15/3/2022.
//

#include "Derived2.h"

Derived2::Derived2() = default;
Derived2::~Derived2() = default;

void Derived2::do_something() {
    std::cout<< "Derived2!!!" << std::endl;
}
std::string Derived2::toString() const {
    std::stringstream s;
    s<< "Este es un objeto Derived2!"<<std::endl;
    return s.str();
}