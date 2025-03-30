/*7 Hacer un programa para ingresar por teclado el importe de una venta
y el porcentaje de descuento aplicada a la misma y luego informar por pantalla el importe a pagar.
Ejemplo A. Si el importe de la venta es $1200 y el descuento es el 15% entonces el total a pagar será de $1020.
Ejemplo B. Si el importe de la venta es $800 y el descuento es el 0% entonces el total a pagar será de $800. */


#include <iostream>


using namespace std ;





int main() {

    float importe, total, desc, descuento ;

    cout << "Ingrese el importe" << endl ;
    cin >> importe ;

    cout << "Ingrese el descuento" << endl ;
    cin >> desc ;

    descuento = (desc / 100) * importe ;
    total = importe - descuento ;

    cout << "El total es de $" << total << endl ;

	return 0 ;
 }
