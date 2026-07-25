/*
EJERCICIO DE REPASO 4
Autor: Jhonatan Torres
Fecha: 22 de julio 2026

Ejercicio 4: Acumulador con for

Enunciado: Elaborar un programa en C++ que solicite al usuario 5 numeros enteros y calcule
la suma total de esos numeros usando un bucle for.

Al final, el programa debe mostrar el resultado acumulado.

*/

/*
E/P/S

Entrada: Cinco numeros enteros ingresado por el usuario.
Proceso:
    Incializar una variable suma en 0
    Repetir 5 veces:
        repetir un numero
        leer el numero
        sumar ese valor al acumulador
    Mostrar la suma total

Salida: La suma total de los 5 numeros ingrsados.

*/

#include <iostream>
using namespace std;

int main()
{
    // Declaramos las viarables necesarias
    int i, numero, suma;

    // Incializamos el acumulador en 0
    suma = 0;

    // Usamos un for porque ya sabemos que se repetira 5 veces
    for (i = 1; i <= 5; i++)
    {
        // Pedimos cada numero al usuario
        cout << "Ingrese el numero: " << i << ":";
        cin >> numero;

        // Acumulamos el numero ingresado en la suma total
        suma = suma + numero;
    }

    // Mostramo la suma final
    cout << "La suma total es: " << suma << endl;

    return 0;
}