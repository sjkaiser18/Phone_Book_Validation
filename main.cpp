#include <iostream>
#include <fstream>
#include "Phone_Validation.h"
#include "Name_Validation.h"
int main(int argc, char* argv[]) {
    std::cout << "Hello, World!" << std::endl;
    Phone_Validation pv;
    Name_Validation nv;
    std::ifstream inputFile;
    inputFile.open(argv[1]);
    if(inputFile.is_open()){
        std::cout<<"File was opened"<<std::endl;
        std::cout<<"These are valid names"<<std::endl;
        while(inputFile.good()) {
            std::string name;
            getline(inputFile, name);
            nv.checkTheName(name);
        }
    }
    else{
        std::cout<<"File was not opened, please check args"<<std::endl;
    }

    nv.checkTheName("Hello");
    pv.checkTheNumber("12-345");
    return 0;
}
