#include <iostream>
using namespace std;
int main() {

    int vetor[10]; //10 posições no array
    //each position index can receive a value
    int i;


     vetor[0] = 10;
     vetor[1] = 20;
     vetor[2] = 30;

     for(i = 0; i< 10; i++ ){
         cout << vetor[i] << "\n";
         // we use vetor[i] so we iterate through each position untill its less than 10
     }

    return 0;
}