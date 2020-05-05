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

    //need to adjust count for incorrect inputs too
    std::regex reg ("(([+]?[1-9][0-9]?[0-9]?)?[\\s]?[(]?[1-9][0-9]{2}[)]?[-\\s]?([0-9]{3})?[-\\s]?[0-9]{4})");
    std::regex good("([A-Z][']?[A-Za-z]+[.]?[-]?([A-Z][']?[A-Za-z]+[.]?)?[\\s]?[']?([A-Z][']?[A-Za-z]+[.]?)?[-]?([A-Z][']?[A-Za-z]+[.]?)?[']?([,]?[\\s]?[A-Z][']?[A-Za-z]+[.]?)?[-]?([A-Z][']?[A-Za-z]+[.]?)?([,]?[\\s]?[A-Z][']?[A-Za-z]+[.]?[-]?([A-Z][']?[A-Za-z]+[.]?)?)?)");

    std::ifstream inputFile;
    for(int q=1;q<2;q++) {
        inputFile.open(argv[q]);
        if (inputFile.is_open()) {
            while (inputFile.good()) {

                //do control args, but concatenate them as to avoid overflow
                char control[] = "ABE";
                inputFile >> control;

                if (std::strncmp(control, "ADD", 3) == 0) {
                    std::string dummy;
                    std::string name;
                    std::string num;
                    getline(inputFile, dummy, '<');
                    getline(inputFile, name, '>');
                    getline(inputFile, dummy, '<');
                    getline(inputFile, num, '>');
                    std::string curr_name = nv.checkTheName(name, good);
                    std::string numba = pv.checkTheNumber(num, reg);

                    if (curr_name == name && numba == num && curr_name.length() != 0 && numba.length() != 0) {
                        listings.push_back(make_pair(curr_name, numba));
                    } else if (curr_name != name && numba != num) {
                        std::cout << "Both the name and phone number are invalid,please fix before continuing"
                                  << std::endl;
                    } else if (curr_name != name || name.length() == 0) {
                        std::cout << "Name is invalid, please fix before continuing" << std::endl;
                    } else if (numba != num || name.length() == 0) {
                        std::cout << "Phone Number is invalid,please fix before continuing" << std::endl;
                    }
                }//end of if choice=ADD

                if (std::strncmp(control, "LIST", 4) == 0) {
                    std::cout << "Contact List:" << std::endl;
                    std::cout << "Name:  Number:" << std::endl;
                    if (listings.size() == 0) {
                        std::cout << "   NONE  " << std::endl;
                    }
                    for (int i = 0; i < listings.size(); i++) {
                        std::cout << listings[i].first << " " << listings[i].second;
                        std::cout << std::endl;
                    }
                }//end of if choice=LIST

                if (std::strncmp(control, "DEL", 3) == 0) {
                    std::string del_val;
                    inputFile >> del_val;

                    for (int i = 0; i < listings.size(); i++) {
                        if (del_val.compare(listings[i].first) == 0) {
                            listings.erase(listings.begin() + i);
                        }
                        if (del_val.compare(listings[i].second) == 0) {
                            listings.erase(listings.begin() + i);
                        }
                    }//end of for loop
                }//end of if choice=DEL
            }//end of while not end of file
        }//end of if file is open
        else {
            std::cout << "File was not opened, please check args" << std::endl;
        }//end of if file is not open
    }
    return 0;
}
