//
// Created by Pablo Morera on 15/3/2022.
//
#include<iostream>
#include"Derived1.h"
#include"Derived2.h"
int main(){
    Base b1;
    Derived1 d1;
    Derived2 d2;
    b1.do_something();
    d1.do_something();
    d2.do_something();
    std::cout<< std::endl;
    std::cout<<b1.toString();
    std::cout<<d1.toString();
    std::cout<<d2.toString();
    //std::cout<< "Hola mundo!" <<std::endl;
    // function main begins program execution
/*
int main(int argc, const char *argv[]) {
    std::cout << "Welcome to the UNA!" << std::endl;

    Derived1 derived1;
    derived1.do_semothing();

    Derived2 derived2;
    derived2.do_semothing();

}  // end function main*/

    return 0;
}
