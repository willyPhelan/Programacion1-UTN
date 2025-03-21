///Ejercicio: ALfajores
///Autor:DEK
///Fecha:21-03-2025
///Comentario: Segundo programa del curso 2025 C1 viernes

#include <iostream>

using namespace std;

int main() {

    int cantidad, cajas, sueltos ;
    float importe;


    // Solicito al usuario la cantidad de alfajores

    cout << "Ingrese la cantidad de alfajores: ";
    cin >> cantidad;

    // Calcular el importe

    cajas = cantidad / 12 ;
    sueltos = cantidad % 12 ;
    importe = (cajas * 1000) + (sueltos * 100);

    // Mostrar el resultado
    cout << "El importe total de la venta es: $" << importe << endl;

    return 0;
