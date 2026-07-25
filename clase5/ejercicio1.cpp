/*
EJERCICIO DE REPASO 1
Autor: Jhonatan Torres
Fecha: 22 de julio 2026

Ejercio1: Cambio en una compra.
Enunciado: Un lciente compra un producto. El sistema el precio del producto y el dinero pagado.
Debe mostrar:
    - Si pagado >= precio, mostrar el cambio
    - Si pagado < precio, mostrar cuanto falta pagar.

E/P/S

Entrada: precio, pagado
Proceso: comparar pagado con precio, calcular cambio o faltan
Salida: Mensaje "Su cambio es: " o "Faltan..."
*/

#include <iostream> //Para cin, cout
using namespace std;

int main()
{
    // 1) Declaracion de variables
    double precio, pagado, faltan, cambio;

    // 2) Lectura de datos
    cout << "Ingrese el precio del producto: ";
    cin >> precio;

    cout << "Ingrese el dinero pagado: ";
    cin >> pagado;

    // 3) Decision
    if (pagado < precio)
    {
        faltan = precio - pagado;             // Proceso
        cout << "Faltan $" << faltan << endl; // Salida
    }
    else
    { // Es el equivalente al sino en pseint
        // Si pagado es mayor o igual, hay cambio
        cambio = pagado - precio;
        cout << "Su cambio es: $" << cambio << endl; // Salida
    }

    return 0; // Fin del programa
}