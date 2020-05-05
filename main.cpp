#include <iostream>
#include <fstream>
#include <vector>
#include <regex>
#include "Phone_Validation.h"
#include "Name_Validation.h"
int main(int argc, char* argv[]) {
    std::vector<std::pair<std::string,std::string>> listings;
    Phone_Validation pv;
    Name_Validation nv;
    //the problem is getline only accepts stuff with nno spaces, so I'll put them in brackets or something so i can still use spaces
    std::regex reg ("([(]?[0-9]{3}[)]?[-]?([0-9]{3})?[-]?[0-9]{4})");
    std::regex good("([A-Z][A-Za-z']+[-]?([A-Z][A-Za-z']+)?([,][A-Z][A-Za-z']+[-]?([A-Z][A-Za-z']+)?)?)");

    std::ifstream inputFile;
    inputFile.open(argv[1]);


    if(inputFile.is_open()){
        while(inputFile.good()) {

            //do control args, but concatenate them as to avoid overflow
            char control[]="ABE";
            inputFile>>control;

            if(std::strncmp(control,"ADD",3)==0) {
                std::string name;
                std::string num;
                inputFile>>name>>num;
                std::string curr_name = nv.checkTheName(name,good);
                std::string numba = pv.checkTheNumber(num, reg);
                listings.push_back(make_pair(curr_name, numba));
            }//end of if choice=ADD

            if(std::strncmp(control,"LIST",4)==0) {
                std::cout<<"Contact List:"<<std::endl;
                std::cout<<"Name:  Number:"<<std::endl;
                for(int i=0;i<listings.size();i++){
                    std::cout<<listings[i].first<<" "<<listings[i].second;
                    std::cout<<std::endl;
                }
            }//end of if choice=LIST

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
                }//end of for loop
            }//end of if choice=DEL
        }//end of while not end of file
        }//end of if file is open
    else{
        std::cout<<"File was not opened, please check args"<<std::endl;
    }//end of if file is not open
    return 0;
}
