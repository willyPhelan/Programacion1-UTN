/* Hacer un programa para ingresar el importe de una compra y el descuento a aplicar. Listar por pantalla, el importe sin descuento, el descuento aplicado y el importe total a cobrar.
Ejemplo: se ingresa importe 4500, descuento 40; se deberá mostrar
Importe: 4500, Descuento: 1800, total: 2700.
*/

#include <iostream>


using namespace std ;



int main() {

    float importe_de_compra, descuento_a_aplicar, descuento, total ;

	cout << "Ingrese el importe" << endl ;
	cin >> importe_de_compra ;

	cout << "Ingrese el descuento a aplicar" << endl ;
	cin >> descuento_a_aplicar ;

	descuento = (importe_de_compra * descuento_a_aplicar) / 100 ;
	total = importe_de_compra - descuento ;

	cout << "Importe de la compra: " << importe_de_compra << endl ;
	cout << "Descuento: %" << descuento_a_aplicar << endl ;
	cout << "Monto descontado: $" << descuento << endl ;
	cout << "Importe a pagar: $" << total << endl ;




	return 0 ;
 }
