//
// Created by pabli on 15/3/2022.
//

#include "Base.h"

Base::Base() { }
Base::~Base() { }

std::string Base::toString() const{
    std::stringstream s;
    s<< "Este es un objeto base"<<std::endl;
    return s.str();
}
void Base::do_something() {
    std::cout<< "Base!!!"<<std::endl;
}