/*
                          INFORMATICA II
Grupo 04

Juan Sebastian Anaya Regino
CC: 1007545962

Problema 8. Escriba un programa que reciba 3 números a, b, c, y calcule la suma de todos los
múltiplos de a y b que sean menores a c. Tenga en cuenta no sumar 2 veces los múltiplos comunes.
Ej: para a=3, b=5 y c=10. Se sumarían 3+6+9+5=23
Para a=5, b=7 y c=36. Se sumarían 5+10+15+20+25+30+35+7+14+21+28 = 210.
Nota: el formato de salida debe ser:
m11 + m12 + m13 + . . . + m21 + m22 + m23. . . = sumatoria.
m11 representa el primer múltiplo de a y así sucesivamente. m21 representa el primer múltiplo de b
y así sucesivamente.

*/

#include <iostream>

using namespace std;

int main()
{
    int a, b, c, suma=0, i=1;

    /* Se imprime en panatalla la funcion del programa */
    cout << "Este programa recibe tres numeros e imprime la suma de todos los multiplos "
            "del primer y segundo numero menores al tercero.\n\n";

    cout << "Ingrese el primer numero: ";
    cin >> a;
    cout << "Ingrese el segundo numero: ";
    cin >> b;
    cout << "Ingrese el tercer numero: ";
    cin >> c;

    while(a*i<c){
        if(a*i!=b*i){
            cout << a*i << '+';
            suma+=a*i;
        }
        i++;
    }

    i=1;

    while(b*i<c){
        if(b*i!=a*i){
            cout << b*i << '+';
            suma+=b*i;
        }
        i++;
    }

    cout << suma << "\n\n\n";

    return 0;
}
