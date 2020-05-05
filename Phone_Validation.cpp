//
// Created by Sarah Kaiser on 4/22/20.
//

#include "Phone_Validation.h"
 std::string Phone_Validation::checkTheNumber(std::string num,std::regex reg) {
    //all may have spaces
    //if local, 7 digits and perhaps a dash 123-4567
    //if domestic, 10 digits and perhaps parentheses and dashes (123)456-7890
    //if international, (for US) +1 and 10 digits with perhaps dashes

    int c=9;
    bool valid=0;
    int length =num.length();
    char phone_num[length];

    std::vector<char> pieced_down_num;
    for(int i=0;i<length;i++){
        phone_num[i]=num[i];
    }


    int j=0;
    int nums_left=0;
    bool dash=false;

    std::sregex_iterator currentMatch(num.begin(),num.end(),reg);
    std::sregex_iterator lastMatch;
    while(currentMatch!=lastMatch){
        std::smatch match = *currentMatch;
        std::cout <<match.str()<<std::endl;
        currentMatch++;
    }

    return num; //turn this into the actual # post trimming
}