#ifndef MYHEADER2_H_INCLUDED
#define MYHEADER2_H_INCLUDED

#include<iostream>
#include"myHeader1.h"

namespace myNameSpace{
    void fun3() {
        std::cout << "fun3 called" << std::endl;
    }
    void fun4() {
        std::cout << "fun4 called" << std::endl;
    }
}

#endif // MYHEADER2_H_INCLUDED