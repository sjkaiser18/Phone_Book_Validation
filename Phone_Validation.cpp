//
// Created by Sarah Kaiser on 4/22/20.
//

#include "Phone_Validation.h"
 std::string Phone_Validation::checkTheNumber(std::string num,std::regex reg) {
    //all may have spaces
    //if local, 7 digits and perhaps a dash 123-4567
    //if domestic, 10 digits and perhaps parentheses and dashes (123)456-7890
    //if international, (for US) +1 and 10 digits with perhaps dashes
     int length=num.length();
     bool valid=false;
     auto start =
             std::sregex_iterator(num.begin(), num.end(), reg);
     auto stop = std::sregex_iterator();

     for (std::sregex_iterator i = start; i != stop; ++i) {
         std::smatch match = *i;
         std::string matched = match.str();
         std::cout << matched << std::endl;
         if(matched.length()==length){
             valid=true;
         }
     }

     if(valid==true){
         return num;
     }
     else{
         std::string nothing;
         return nothing;
     }
}