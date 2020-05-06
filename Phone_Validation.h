//
// Created by Sarah Kaiser on 4/22/20.
//

#ifndef PHONE_PHONE_VALIDATION_H
#define PHONE_PHONE_VALIDATION_H
#include <string>
#include <iostream>
#include <vector>
#include <regex>

class Phone_Validation {
public:
    Phone_Validation(){}
    std::string checkTheNumber(std::string,std::regex reg);
    ~Phone_Validation(){}
};


#endif //PHONE_PHONE_VALIDATION_H
