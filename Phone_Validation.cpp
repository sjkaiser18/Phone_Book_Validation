//
// Created by Sarah Kaiser on 4/22/20.
//

#include "Phone_Validation.h"

void Phone_Validation::checkTheNumber(std::string num) {
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
    while(j<length){
        std::size_t found=whitelist.find(phone_num[j]);
        if(isdigit(phone_num[j])){
            pieced_down_num.push_back(phone_num[j]);
        }
        //std::size_t found=whitelist.find(phone_num[j]);
        else if(found!=std::string::npos){
            pieced_down_num.push_back(phone_num[j]);
        }
        else{
            std::cout<<"idk";
        }
        j++;
    }
    for(int m=0;m<pieced_down_num.size();m++){
        std::cout<<pieced_down_num.at(m);
    }

    std::cout<<std::endl;
}