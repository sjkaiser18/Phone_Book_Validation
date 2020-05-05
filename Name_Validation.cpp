//
// Created by Sarah Kaiser on 5/4/20.
//

#include "Name_Validation.h"
std::string Name_Validation::checkTheName(std::string name,std::regex good) {
    //convert the string to a set of chars
    int length=name.length();
    char name_array[length];

    std::vector<char> pieced_down_name;

    for(int i=0;i<length;i++){
        name_array[i]=name[i];
    }

    int j=0;
    //maybe instead of skipping we delete that value from the character array and smush it back into a string in the end



    while(j<length){
        std::size_t found=whitelist.find(name_array[j]);
        if(isalpha(name_array[j])){
            pieced_down_name.push_back(name_array[j]);
        }
        else if(found!=std::string::npos){
            pieced_down_name.push_back(name_array[j]);
        }
        else{
            std::cout<<"idk";
        }
        j++;
    }

    return name;
}