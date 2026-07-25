/*
EJERCICIO DE REPASO 3
Autor: Jhonatan Torres
Fecha: 22 de julio 2026

Ejercicio 3: Contador con while
Enunciado: Elaborar un programa en C++ que solicite al usuario un numero entero positivo N y muestre en
pantalla los numeros desde 1 hasta N usando un bucle while

Si el usuario ingresa un valor menor o igual a 0, el programa debe mostrar un mensaje de error y terminar.
*/

/*
MODELO E/P/S

Entrada: Un numero entero positivo N

Proceso:
    Leer el valor de N
    Verificar si N es mayo que 0
    Si no es mayo  que 0, mostrar mensaje error
    Repetir mientras el contador sea mayor o igual a N
    Mostrar el valor del contador
    Aumentar el contador en 1 en cada vuelta

Salida:
    Los numeros desde 1 hasta N
    Un mensaje de error si el numero ingresado no es valido.

*/

#include <iostream>
using namespace std;

int main()
{
    // Declarar las variables necesarias
    int N, contador;

    // Pedir al usario un numero entero positivo
    cout << "Ingrese un numero entero positivo: ";
    cin >> N;

    // Validamos que el numero sea mayor que 0
    if (N <= 0)
    {
        // Si el numero no es valido, mostramos un mensaje de error
        cout << "Error: el numero debe ser mayor que 0." << endl;
    }
    else
    {
        // Incializamos el contador en 1
        contador = 1;

        // Repetimos mientras el contador sea menor o igual a N
        while (contador <= N)
        {
            // Mostramos el valor actual del contador
            cout << contador << endl;

            // Aumentamos el contador en 1 para evitar bucle infinito
            contador = contador + 1;
        }
    }

    return 0;
}