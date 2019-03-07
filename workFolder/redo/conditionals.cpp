#include <iostream>

using namespace std;

int main() {
    int numero;

    cout << "Secret number is from 0 to 10" << "\n";
    cin >> numero;

    if (numero == 10) {
        cout << "You found me!" << "\n";
    } else {
        cout << "You havent found the secret number.." << "\n";
    }

    return 0;    

}