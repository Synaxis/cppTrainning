#include <iostream>
using namespace std;

int main() {
    int num = 10;
    cout << num << "\n";

    //multiply with -1
    num = num * -1;
    cout << num << "\n";

    //use the - operand
    cout << -num << "\n"; //note this doesnt change the variable 
    
    //simplify 
    num -= 10;

    cout << num << "\n";

    return 0;
}