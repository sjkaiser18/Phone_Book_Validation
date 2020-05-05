//
// Created by Sarah Kaiser on 5/4/20.
//

#ifndef PHONE_NAME_VALIDATION_H
#define PHONE_NAME_VALIDATION_H
#include <string>
#include <iostream>
#include <vector>
#include <regex>


class Name_Validation {
    public:
    std::string checkTheName(std::string name,std::regex good);
    std::string whitelist="+()'-., ";
};



#endif //PHONE_NAME_VALIDATION_H
