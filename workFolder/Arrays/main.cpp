#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <limits>

int main() {

    int arrNums[10] = {1}; //set a default value if you want

    int arrNums2[] = {1,2,3}; // auto define the size of the array

    int arrNums3[5] = {8,9}; // the last index will have 8 9 vals

    std::cout << "1st value of this array : " << arrNums3[0] << "\n";
    arrNums3[0] = 7;
    std::cout << "1st value of this array before :" << arrNums3[0] << "\n";

    std::cout << "Array size : " <<  sizeof(arrNums3) / sizeof(*arrNums3) << "\n";
    
    //int arrNums4[2][2][2] //pages //collumns //rows
    int arrNums4[2][2][2] = {{{1,2}, {3,4}},
    {{5,6}, {7,8}}}; 

    std::cout << arrNums4[1][1][1] << "\n";


    return 0;
}