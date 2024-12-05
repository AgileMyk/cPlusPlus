//
// Created by agile on 12/5/2024.
//
#include <iostream>
#include "func1.h"

#include "Names.h"

void func1() {
    #ifdef MY_NAME
    std::cout << "testing macro define from different file: file exists" << std::endl;
    #endif
    #ifndef MY_NAME
    std::cout << "testing macro define from different file: file does not exist" << std::endl;
    #endif
};
