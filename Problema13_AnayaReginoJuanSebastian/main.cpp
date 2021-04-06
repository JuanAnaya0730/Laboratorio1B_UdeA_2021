/*
                          INFORMATICA II
Grupo 04

Juan Sebastian Anaya Regino
CC: 1007545962

Problema 13. Escriba un programa que reciba un número y calcule la suma de todos los primos
menores que el número ingresado.
Ej: Si se recibe 10 el programa debe imprimir 17.
Nota: la salida del programa debe ser: El resultado de la suma es: 17.

*/

#include <iostream>

using namespace std;

int main()
{
    int N; // N es la variable que almacenara el numero ingresado por el usuario.
    int suma=0; // suma es la variable que almacenara el resultado de la suma.
    bool primo = true; // primo es la variable que determinara si un numero es primo.

    /* Se imprime la funcion del programa */
    cout << "Este programa recibe un numero e imprime en pantalla la suma de todos los "
            "numeros primos menores que el numero ingresado.\n\n";

    /* Se le pide al usuario que ingrese un numero */
    cout << "Ingrese un numero: ";
    cin >> N;

    /* Este ciclo encontrara todos los numeros primos menores que N y los sumara */
    for(int i=2; i<N; ++i){
        /* Este ciclo decidira que numeros son o no primos, modificando la variable 'primo' */
        for(int h=2; h<i; ++h){
            if(i%h==0){
                primo = false;
                break;
            }
        }

        /* Si el valor de i es un numero primo este se le sumara a suma */
        if(primo)
            suma+=i;

        /* Se cambia nuevamente el estado de la variable primo */
        primo = true;
    }

    /* Se imprime en pantalla la suma de todos los numeros primos menores que N */
    cout << "\nEl resultado de la suma es: " << suma << endl << endl;

    return 0;
}
