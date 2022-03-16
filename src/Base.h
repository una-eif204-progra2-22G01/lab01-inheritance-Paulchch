//
// Created by Pablo Morera on 15/3/2022.
//

#ifndef LAB01_INHERITANCE_BASE_H
#define LAB01_INHERITANCE_BASE_H

#include<iostream>
#include<sstream>
/* Recordemos que las clases minimo
 * debe de tener: Constructores,
 * destructores, propiedades,
 * métodos get/set, y toString()*/
class Base {
private:
    //de momento nada aquí
    //sin atributos de momento
public:
    Base();
    ~Base();
    virtual void do_something();
    virtual std::string toString() const;
};


#endif //LAB01_INHERITANCE_BASE_H
