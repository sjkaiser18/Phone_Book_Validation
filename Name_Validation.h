//
// Created by Sarah Kaiser on 5/4/20.
//

#ifndef PHONE_NAME_VALIDATION_H
#define PHONE_NAME_VALIDATION_H
#include <string>
#include <iostream>
#include <vector>

class Name_Validation {
    public:
    void checkTheName(std::string name);
    std::string whitelist="+()'-., ";
    //char whitelist[7]={'+', '(', ')', '-','.',' '};
};



#endif //PHONE_NAME_VALIDATION_H
