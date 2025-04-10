/* 11
Hacer un programa para ingresar cinco números y listar cuantos de esos cinco números son positivos, cuantos son negativos y cuantos son iguales a 0.
*/
#include <iostream>


using namespace std ;



int main() {

    int num1, num2, num3, num4, num5, pos=0, neg=0, cero=0 ;

	cout << "Ingrese un num" << endl ;
	cin >> num1 ;

	cout << "Ingrese otro num" << endl ;
	cin >> num2 ;

	cout << "Ingrese otro num" << endl ;
	cin >> num3 ;

	cout << "Ingres otro num" << endl ;
	cin >> num4 ;

	cout << "Ingrese un ultimo num" << endl ;
	cin >> num5 ;

	if (num1 > 0 ) {
        pos++ ;
	}

	if (num2 > 0 ) {
        pos++ ;
	}

	if (num3 > 0 ) {
        pos++ ;
	}

	if (num4 > 0 ) {
        pos++ ;
	}

	if (num5 > 0 ) {
        pos++ ;
	}

	if (num1 == 0 ) {
        cero++ ;
	}

	if (num2 == 0 ) {
        cero++ ;
	}

	if (num3 == 0 ) {
        cero++ ;
	}

	if (num4 == 0 ) {
        cero++ ;
	}

	if (num5 == 0 ) {
        cero++ ;
	}

	if (num1 < 0 ) {
        neg++ ;
	}

	if (num2 < 0 ) {
        neg++ ;
	}

	if (num3 < 0 ) {
        neg++ ;
	}

	if (num4 < 0 ) {
        neg++ ;
	}

	if (num5 < 0 ) {
        neg++ ;
	}

	cout << "Numeros positivos: " << pos << endl ;
	cout << "Numeros negativos: " << neg << endl ;
	cout << "Cero/s: " << cero << endl ;

	return 0 ;
 }
