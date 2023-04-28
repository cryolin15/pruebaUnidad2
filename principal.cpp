#include <iostream>
#include<math.h>
#include "funciones.cpp"
using namespace std;

int main(int argc, char const*argv[]) {
    int num;
    cout << "Ingrese un numero: ";
    cin >> num;
    if(esPrimo(num)) {
        cout << "El numero es primo" << endl;
    } else {
        cout << "El numero no es primo" << endl;
    }
}


void numerosPares(){
 int n, num, pares = 0, impares = 0, neutros = 0;
    cout << "Cuantos numeros desea ingresar?: ";
    cin >> n;
    for(int i = 0; i < n; i++) {
        cout << "Ingrese el numero " << i + 1 << ": ";
        cin >> num;
    }
}

void leer(){
    cout <<"Escribe un numero: ";
    cin >>num;
int numeros[] = {2, 4, 5, 0, -7, 10, 11, 0};
    int cantidad = sizeof(numeros)/sizeof(numeros[0]);
    contarNumeros(numeros, cantidad);
    return 0;
}

int main(){
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;
    imprimirMultiplosDeTres(numero);
    return 0;
}