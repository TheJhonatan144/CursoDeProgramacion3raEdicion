/*
EJERCICIO DE REPASO 4
Autor: Jhonatan Torres
Fecha: 22 de julio 2026

Ejercicio 5: Menu repetitivo con do while

Enunciado: Elaborar un programa en C++ que muestre un menu repetitivo con las siguientes operaciones:
    1. Sumar dos numeros
    2. Mostrar la tabla de multiplcar de un numero
    3. Salir

El programa debe repetirse hasta que el usaurio elija la opcion 3
Si el usuario ingresa una opcion invalida, el programa debe mostrar un mensaje de error y
volver al mostrar menu

*/

/*
ENTRADA:
    Una opcion del menu
    Segun la opcion elegida: dos numeros para sumar o un numero para mostrar su tabla de multiplar

PROCESO:
    Mostrar el menu
    Leer la opcion
    Si la opcion es 1: pedir dos numeros
                        sumarlos
                        mostrar el resultado

    Si la opciones es 2: pedir un numero
                        mostrar su tabla del 1 al 10

    Si la opcion es 3:
                    Mostrar mesnaje de salida


SALIDA:
    Resultados de la suma
    La tabla de multiplar
    mensaje de salida
    mensaje de error por opcion invalida.

*/

#include <iostream>
using namespace std;

int main()
{
    // Declaramos las variables necesarias
    int opcion, num1, num2, suma, numero, i;

    do
    {
        // Mostrasmos el menu principal
        cout << "======= MENU =======" << endl;
        cout << "1. Sumar dos numeros" << endl;
        cout << "2. Mostrar tabla de multiplcar" << endl;
        cout << "3 Salir" << endl;
        cout << "Seleccione una opcion" << endl;
        cin >> opcion;

        // Evaluamos la opcio elegida
        if (opcion == 1)
        { // == significa comparacion a diferencia del = que significa asignacion
            // Pedimos dos numeros para sumarlos
            cout << "Ingrese el primero numero: ";
            cin >> num1;

            cout << "Ingrese el segundo numero: ";
            cin >> num2;

            // Realizamos la suma
            suma = num1 + num2;

            // Mostramos el resultado
            cout << "La suma es: " << suma << endl;
        }
        else if (opcion == 2)
        {
            // Pedimos un numero para mostrar su tabla de multiplar
            cout << "Ingrese un numero: ";
            cin >> numero;

            // Mostramos la tabla del 1 al 10 usando un for
            for (i = 1; i <= 10; i++)
            {
                cout << numero << "x" << i << " = " << numero * i << endl;
            }
        }
        else if (opcion == 3)
        {
            // Mostramos mensaje de salida
            cout << "Salida del programa..." << endl;
        }
        else
        {
            // Si la opcion no esta en el rango valido, mostramos un mensaje de error
            cout << "Error: opcion invalida. Intente nuevamente." << endl;
        }

        // El numero seguira repitiendose mientras la opcion sea diferente de 3
    } while (opcion != 3);

    return 0;
}