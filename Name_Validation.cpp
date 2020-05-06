//
// Created by Sarah Kaiser on 5/4/20.
//

#include "Name_Validation.h"
std::string Name_Validation::checkTheName(std::string name,std::regex good) {
    //convert the string to a set of chars
   int length=name.length();
   bool valid=false;
    auto start =
            std::sregex_iterator(name.begin(), name.end(), good);
    auto stop = std::sregex_iterator();

    std::cout << "Found "
              << std::distance(start, stop)
              << " words:\n";


    for (std::sregex_iterator i = start; i != stop; ++i) {
        std::smatch match = *i;
        std::string matched = match.str();
        std::cout << matched << std::endl;
        if(matched.length()==length){
            valid=true;
        }
    }

    if(valid==true){
        return name;
    }
    else{
        std::string nothing;
        return nothing;
    }

}