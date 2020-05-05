#include <iostream>
#include <fstream>
#include <vector>
#include <regex>
#include "Phone_Validation.h"
#include "Name_Validation.h"
int main(int argc, char* argv[]) {
    std::cout << "Hello, World!" << std::endl;
    std::vector<std::pair<std::string,std::string>> listings;
    Phone_Validation pv;
    Name_Validation nv;
    std::ifstream inputFile;
    inputFile.open(argv[1]);
    std::regex reg ("([0-9]+)");
    std::regex good("([A-Za-z]+)");

    if(inputFile.is_open()){
        std::cout<<"File was opened"<<std::endl;
        while(inputFile.good()) {
            //do control args, but concatenate them as to avoid overflow
            char control[]="ADD";
            inputFile>>control;
            if(std::strncmp(control,"ADD",3)==0) {
                std::string name;
                std::string num;
                inputFile>>name>>num;
                std::string curr_name = nv.checkTheName(name,good);
                std::string numba = pv.checkTheNumber(num, reg);
                listings.push_back(make_pair(curr_name, numba));
            }

            if(std::strncmp(control,"LIST",4)==0) {
                for(int i=0;i<listings.size();i++){
                    std::cout<<listings[i].first<<","<<listings[i].second;
                    std::cout<<std::endl;
                }
            }

            if(std::strncmp(control,"DEL",3)==0) {
                std::string del_val;
                inputFile>>del_val;

                for(int i=0;i<listings.size();i++){
                        if (del_val.compare(listings[i].first) == 0) {
                            listings.erase(listings.begin()+i);
                        }
                        if (del_val.compare(listings[i].second) == 0) {
                            listings.erase(listings.begin()+i);
                        }
                }
            }
            }
        }

    else{
        std::cout<<"File was not opened, please check args"<<std::endl;
    }

    //nv.checkTheName("Hello");
    //pv.checkTheNumber("12-34567",reg);
    return 0;
}
