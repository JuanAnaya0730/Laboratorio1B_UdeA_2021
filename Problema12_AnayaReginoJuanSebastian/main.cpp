/*
                          INFORMATICA II
Grupo 04

Juan Sebastian Anaya Regino
CC: 1007545962

Problema 12. Escriba un programa que calcula el máximo factor primo de un número.
Ej: Si se recibe 33 el programa debe imprimir 11.
Nota: la salida del programa debe ser: El mayor factor primo de 33 es: 11.

*/

#include <iostream>

using namespace std;

bool verificarsiesprimo(int numero);
int factor1(int n1);
int factor2(int n2);
int numerofactores(int n);

int main()
{
    int i, numero, factormaximo;

    i=0;
    factormaximo=1;

    cout << "Ingrese un numero: ";
    cin >> numero;

    for(i=1; i<numerofactores(numero); i++){
        if(verificarsiesprimo(factor1(numero))==true){
            if(factor1(numero)>factormaximo){
                factormaximo=factor1(numero);
            }
        }
    }
    for(i=1; i<numerofactores(numero); i++){
        if(verificarsiesprimo(factor2(numero))==true){
            if(factor2(numero)>factormaximo){
                factormaximo=factor2(numero);
            }
        }
    }


    cout << "El mayor factor primo de " << numero << " es: " << factormaximo << ".\n\n\n";
    return 0;
}

int numerofactores(int n){
    int i, h, c;

    c=0;

    for(i=1; i<=n/2; i++){
        for(h=1; h<=n; h++){
            if(i*h==n){
                c+=2;
            }
        }
    }
    return c;
}

int factor1(int n1){
    int i, h;

    for(i=1; i<=n1/2; i++){
        for(h=1; h<=n1; h++){
            if(i*h==n1){
                n1=i;
                return n1;
            }
        }
    }
}

int factor2(int n2){
    int i, h;

    for(i=1; i<=n2/2; i++){
        for(h=1; h<=n2; h++){
            if(i*h==n2){
                n2=h;
                return n2;
            }
        }
    }
}

bool verificarsiesprimo(int numero){
    int i;

    if(numero==1){
        return false;
    }

    for(i=2; i<numero; i++){
        if(numero%i==0){
            return false;
        }
    }
    return true;
}
