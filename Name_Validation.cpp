//
// Created by Sarah Kaiser on 5/4/20.
//

#include "Name_Validation.h"
void Name_Validation::checkTheName(std::string name) {
    //convert the string to a set of chars
    bool valid=0;
    int length=name.length();
    char name_array[length];

    std::vector<char> pieced_down_name;

    for(int i=0;i<length;i++){
        name_array[i]=name[i];
    }
    int j=0;

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

    for(int m=0;m<pieced_down_name.size();m++){
        std::cout<<pieced_down_name.at(m);
    }

    std::cout<<std::endl;

}