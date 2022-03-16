//
// Created by pabli on 15/3/2022.
//

#ifndef LAB01_INHERITANCE_DERIVED1_H
#define LAB01_INHERITANCE_DERIVED1_H

#include"Base.h"

class Derived1 : public Base{ //heredamos
public:
    Derived1();
    ~Derived1();
    void do_something() override;
    std::string toString() const;
};


#endif //LAB01_INHERITANCE_DERIVED1_H
