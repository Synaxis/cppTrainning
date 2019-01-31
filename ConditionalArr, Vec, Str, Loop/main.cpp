#include <vector>
#include <sstream>
#include <limits>

int main() {
    std::string sAge = 0;
    std::cout << "Enter your age : ";
    int nAge = std::stoi(sAge); // like strconv

    if ((nAge >= 1)) && (nAge <= 18)){
        std::cout << "Important Birthday\n";
    } else if ((nAge == 21)) || (nAge == 50)) {
        std::cout << "Someone else important bday\n";
    } else if (nAge >= 65){
        std::cout << "Important day\n";
    }
    else {
        std::cout "Not an important day\n";
    }

    return 0;
 }