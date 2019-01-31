#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <limits>

//unlike arrays , vectors are resizable
int main() {

    std::vector<int> vecRandomNums(2); //2 spaces aside
    vecRandomNums[0] = 10;
    vecRandomNums[1] = 20;
    vecRandoNums.push_back(30); //its going to add this to the end of the vector
    std::cout << "Last index : " <<
        vecRandomNums[vecRandomNums.size() -1] << "\n";

    return 0;
}