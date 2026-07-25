/*
EJERCICIO DE REPASO 2
Autor: Jhonatan Torres
Fecha: 20 de julio 2026

Enunciado: Pide una base y una altura de un retangulo (enteros) y calcula el area.
*/

#include <iostream>
using namespace std;

int main()
{
    // Declarar variables
    int base, altura, area;

    // Ingreso datos
    cout << "ingrese base: ";
    cin >> base;
    cout << "Ingrese altura: ";
    cin >> altura;

    // Calculos
    area = base * altura;
    cout << "Area = " << area << endl;

    return 0;
}+