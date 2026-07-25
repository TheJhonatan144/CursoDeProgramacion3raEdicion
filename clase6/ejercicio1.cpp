/*
EJERCICIO DE REPASO 5
Autor: Jhonatan Torres
Fecha: 24 de julio 2026

Ejercicio 5: Meny simple con switch

switch: es una estructura de seleccion que permite ejecutar diferentes bloques de codigo segun el valor de una
variable.

Suele ser util cuando:
    Hay varias opciones numericas o fijas.
    Se quiere organizar mejor un menu
    Cada opcion represnta un caso distinto

Diferencia con el if/else
    if/else sirve mas cuando las condiciones pueden ser variadas o complejas
    switch sirve mas cuando comparas una sola variable contra varios valores concretos

Enunciado: Elaborar un programa en C++ que muestre un menu con las siguientes opciones:
    1. Mostrar mensajes de bienvenida
    2. Mostrar el cuadrado de un numero
    3. Salir

El programa debe repetirse hasta que el usario elija la opcion 3

Si el usuario ingrea un opcion invalida, el programa debe mostrar un mensaje de error y volver a mostrar el menu.
*/

/*
E/P/S
Entrada:
    Una opcion del menu
    Si elige una de las opciones se realiza accion correspondiente.

Proceso:
    Mostrar el menu
    Leer la opcion
    Evaluar la opcion con switch
    Ejecutar la accion
    Repetir hasta que el usario elija salir

Salida:
    Mensaje de bienvenida.
    La accion correspondiente a la opcion ingresada por el usuario.
    Mensaje de error.
*/

#include <iostream>
using namespace std;

int main()
{
    // Declaramos las variables
    int opcion, numero, cuadrado;

    // Usamos el do while para que el menu se muestre al menos una vez
    do
    {
        // Mostrar el menu
        cout << "==== MENU CON SWITCH ====" << endl;
        cout << "1. Mostrar mensaje de bienvenida" << endl;
        cout << "2. Mostrar cuadrado de un numero" << endl;
        cout << "3. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        // Evaluamos la opcion ingresando un switch
        switch (opcion)
        {
        case 1:
            // opcion1: mostrar el mensaje
            cout << "Bienvenidos a la clase 6 de C++" << endl;
            break;
        case 2:
            cout << "Ingrese un numero: ";
            cin >> numero;

            cuadrado = numero * numero;

            // Mostramos el resultado
            cout << "El cuadrado es: " << cuadrado << endl;
            break;
        case 3:
            cout << "Saliendo del programa..." << endl;
            break;
        default:
            cout << "Error: opcion invalida." << endl;
        }
    } while (opcion != 3);

    return 0;
}