#include <iostream>
#include <cstdio>
using namespace std;
int main() {
    printf("Test\n"); // c 
    // tipo nome;
    // tipo nome = valor;
    int vidas; // 10, 25
    char letra; // 'B'
    double testdouble; //2,55555555555555555 casas decimais
    float testefloat;//2.5 //precisao menor
    
    int vidasNovas;
    cout << "Digite o numero de vidas: ";
    cin >> vidasNovas;

    char letraNova;
    cout << "Digite uma letra: ";
    cin >> letraNova;


    cout << vidas << "\n";
    cout << letra << "\n";
    cout << testdouble << "\n";
    cout << testefloat << "\n";



    return 0;
}

