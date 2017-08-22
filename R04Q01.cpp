#include <iostream>
#include <string.h>
using namespace std;


int main (){
    int i;
    int numeros[100];
    int maior = 0;

    for(i=0; i < 100; i++ ){
        cin >> numeros[i];
        if(numeros [i] == 0){
            break;

        }if(numeros[i] > maior){
            maior = numeros[i];
        }
    }
    cout << "O maior eh: " << maior;

}
