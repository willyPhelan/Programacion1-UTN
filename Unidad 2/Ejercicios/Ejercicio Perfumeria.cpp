/* 5
Un negocio de perfumería efectúa descuentos según el importe de la venta.
Si el importe es menor a $100 aplicar un descuento del 5%
Si el importe es entre $100 y hasta $500 aplicar un descuento del 10%
Si el importe es mayor a $500 aplicar un descuento del 15%

Hacer un programa donde se ingresa el importe original sin descuento y se informe por pantalla el importe con el descuento ya aplicado.
Importante: Verifique que el programa emita UN SOLO CARTEL.
*/

#include <iostream>


using namespace std ;



int main() {

    float importe, desc, total ;

	cout << "Ingrese el importe total" << endl ;
	cin >> importe ;

	if(importe < 100 ) {

            desc = importe * 0.05 ; } else if (importe >= 100 && importe <= 500 ) {
            desc = importe * 0.10 ; } else {
            desc = importe * 0.15 ; }

            total = importe - desc ;

                cout << "El descuento es de : $" << desc << " y el total es de: $" << total << endl ;


	return 0 ;
 }
