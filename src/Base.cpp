//
// Created by Pablo Morera on 15/3/2022.
//

#include "Base.h"

Base::Base()=default;
Base::~Base() =default;

std::string Base::toString() const{
    std::stringstream s;
    s<< "Este es un objeto base"<<std::endl;
    s<<"Numero objeto: "<<numObjeto<<std::endl;
    s<<std::endl;
    return s.str();
}
void Base::do_something() {
    std::cout<< "Base!!!"<<std::endl;
}

int Base::getNumObjeto() const {
    return numObjeto;
}

void Base::setNumObjeto(int numObjeto) {
    Base::numObjeto = numObjeto;
}
