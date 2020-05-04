//
// Created by Sarah Kaiser on 4/22/20.
//

#ifndef PHONE_PHONE_VALIDATION_H
#define PHONE_PHONE_VALIDATION_H
#include <string>
#include <iostream>
#include <vector>

class Phone_Validation {
//try to find integers in a string of a phone number and store them?
public:
//will use an isalpha first to save time checking through ALL of that
//could maybe convert every value to ascii quickly and if it is less than A or greater than z, then don't use
    std::string whitelist="+()'-., ";

void checkTheNumber(std::string);
};


#endif //PHONE_PHONE_VALIDATION_H
