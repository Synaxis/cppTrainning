#include <iostream>
#include <limits>
#include <string>
#include <vector>
#include <sstream>
#include <cstdlib>

int g_iRandNum = 0;

const double PI = 3.14159;

int main() {
    
    std::string sQuestion ("Enter Number 1 : ");
    std::string sNum1, sNum2;
    std:::cout << sQUestion;
    getline(std::cin, sNum1);
    std::cout << "Enter number 2 : ";
    getline(std::cin, sNum2);

    int nNum1 = std::stoi(sNum1);
    int nNum2 = std::stoi(sNum2);

    printf("%d +%d = %d\n", nNum1, nNum2, (nNum1 + nNum2));
    printf("%d +%d = %d\n", nNum1, nNum2, (nNum1 - nNum2));
     printf("%d +%d = %d\n", nNum1, nNum2, (nNum1 * nNum2));

     return 0;


}