#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <limits>

int main() {

    std::string UserAge = "0"; // age is a string
    std::cout << "Enter your age : \n"; // printf
    getline(std::cin, UserAge); // console input and assign to UserAge
    int intAge = std::stoi(UserAge); // strconv UserAge string to intAge int
    if (intAge < 10){
        std::cout << "Go to kindergarten\n";
    } else if ((intAge >=10) || (intAge <= 16)){
        std::cout << "Teenage\n";
    } else if (intAge > 17) {
        std::cout << "You are too old to school! go to university\n";
    }
    else {
        std::cout << "You are an adult\n";
    }

    return 0;

}