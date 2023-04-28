#include <iostream>
#include "principal.cpp"
using namespace std;

int main(){
    bool esPrimo(int num) {
    if(num <= 1) {
        return false;
    }
    for(int i = 2; i <=sqrt(num); i++) {
        if(num % i == 0) {
            return false;
        }
    }
    return true;
}

}

void listaAlumnos(){
    int n, num, pares = 0, impares = 0, neutros = 0;
    if(num == 0) {
            neutros++;
        } else if(num % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }cout << "La lista contiene " << pares << " numeros pares, " << impares << " numeros impares y " << neutros << " numeros neutros" << endl;
    return 0;


void imprimirMultiplo3(int num){
    cout << "Los siguientes 10 multiplos de " << n << " son: " <<endl;
    for (int i = 1; i <= 10; i++) {
        cout << num *i*3 << endl;
    }
    return 0;
}

    