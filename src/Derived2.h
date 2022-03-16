//
// Created by Pablo Morera on 15/3/2022.
//

#ifndef LAB01_INHERITANCE_DERIVED2_H
#define LAB01_INHERITANCE_DERIVED2_H

#include "Base.h"

class Derived2 : public Base{
public:
    Derived2();
    ~Derived2();
    void do_something() override;
    std::string toString() const;
};


#endif //LAB01_INHERITANCE_DERIVED2_H
