/*16
El Laboratorio V&V hace frascos de píldoras para aprender a programar.
Cada frasco contiene 75 píldoras y cada píldora contiene 45 mg de Betamol, 2 grs de Micilina y 7 mg de Ácido Sinítico.
Nos solicitan un programa donde se ingrese la cantidad de frascos de un pedido y
muestre la cantidad de miligramos de Betamol, Micilina y de Ácido Sinítico que son necesarios para elaborarlos. */

#include <iostream>


using namespace std ;



int main() {

    int pedido, betamol, micilina, acido, total_betamol, total_micilina, total_acido ;

    betamol = 3375 ;
    micilina = 150000 ;
    acido = 525 ;

	cout << "Ingrese el total de frascos que necesita" << endl ;
	cin >> pedido ;

	total_acido = pedido * acido ;
	total_betamol = pedido * betamol ;
	total_micilina = pedido * micilina ;

	cout << "La cantidad total de mgs que necesita para " << pedido << " frascos es: " << endl ;
	cout << "Betamol: " << total_betamol << " mgs" << endl ;
	cout << "Micilina: " << total_micilina << " mgs" << endl ;
	cout << "Acido Sinitico: " << total_acido << " mgs" <<  endl ;



	return 0 ;
 }
