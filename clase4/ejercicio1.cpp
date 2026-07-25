/*
EJERCICIO DE REPASO 1
Autor: Jhonatan Torres
Fecha: 20 de julio 2026

Enunciado: Pide dos enteros y muestra la suma

*/

#include <iostream>
using namespace std;

int main()
{
    // Estoy declarando mis variables a y b de tipo entero
    int a, b, suma;

    // Ingreso los datos
    cout << "Ingrese a: ";
    cin >> a;
    cout << "ingrese b: ";
    cin >> b;

    // Calculo la respuesta
    suma = a + b;
    cout << "Suma = " << suma << endl;

    return 0;
}