//
// Created by Sarah Kaiser on 4/22/20.
//

#include "Phone_Validation.h"
 std::string Phone_Validation::checkTheNumber(std::string num,std::regex reg) {
    //all may have spaces
    //if local, 7 digits and perhaps a dash 123-4567
    //if domestic, 10 digits and perhaps parentheses and dashes (123)456-7890
    //if international, (for US) +1 and 10 digits with perhaps dashes

     auto words_begin =
             std::sregex_iterator(num.begin(), num.end(), reg);
     auto words_end = std::sregex_iterator();

     std::cout << "Found "
               << std::distance(words_begin, words_end)
               << " words:\n";

     for (std::sregex_iterator i = words_begin; i != words_end; ++i) {
         std::smatch match = *i;
         std::string match_str = match.str();
         std::cout << match_str << '\n';
     }

     if(std::distance(words_begin, words_end)>0){
         return num;
     }
     else{
         std::string nothing;
         return nothing;
     }
}