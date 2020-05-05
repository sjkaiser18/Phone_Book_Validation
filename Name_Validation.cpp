//
// Created by Sarah Kaiser on 5/4/20.
//

#include "Name_Validation.h"
std::string Name_Validation::checkTheName(std::string name,std::regex good) {
    //convert the string to a set of chars
   int length=name.length();
   bool valid=false;
    auto words_begin =
            std::sregex_iterator(name.begin(), name.end(), good);
    auto words_end = std::sregex_iterator();

    std::cout << "Found "
              << std::distance(words_begin, words_end)
              << " words:\n";


    for (std::sregex_iterator i = words_begin; i != words_end; ++i) {
        std::smatch match = *i;
        std::string match_str = match.str();
        std::cout << match_str << '\n';
        if(match_str.length()==length){
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