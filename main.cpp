#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <limits>

int main(int argc, char** argv) {
    std::cout << "Ola razer\n";

    if(argc != 1){
        std::cout << "Voce inseriu" << argc <<
        " caracteres\n";
    }

    for(int i = 0; i < argc; ++i){
        std::cout << argv[i] << "\n";
    }

    return 0;
}