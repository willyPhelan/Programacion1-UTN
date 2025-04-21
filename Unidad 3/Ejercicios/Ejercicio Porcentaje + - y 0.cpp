/*
8	Hacer un programa para ingresar una lista de 10 números, luego informar el porcentaje de positivos, negativos, y  ceros.

*/

#include <iostream>


using namespace std ;



int main() {

	  int i, num, positivos=0, negativos=0, cero=0;
	  float porcentaje_pos=0, porcentaje_neg=0, porcentaje_cero=0,total=0 ;

	for (i = 1 ; i <= 10 ; i++) {
	cout << "Ingrese un numero" << endl ;
    cin >> num ;

    if (num > 0) {
        positivos++ ;
    }

    if (num < 0) {
        negativos++ ;
    }

    if (num == 0) {
        cero++ ;
    }

    total= positivos + negativos + cero ;

    porcentaje_pos = (positivos * 100) / total ;
    porcentaje_cero = (cero * 100) / total ;
    porcentaje_neg = (negativos * 100) / total ;

	}


    cout << endl << "Total: "<< total << endl ;
	cout << endl << "Procentaje de numeros positivos: " << porcentaje_pos << "%" << endl ;
	cout << endl << "Procentaje de numeros negativos: " << porcentaje_neg<< "%" << endl ;
	cout << endl << "Procentaje de numeros cero/s: " << porcentaje_cero << "%" << endl ;

	return 0 ;
 }
