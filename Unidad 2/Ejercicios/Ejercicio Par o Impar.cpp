/* 3
Hacer un programa para ingresar por teclado un número.
Luego informar por pantalla con un cartel aclaratorio si el mismo es par o impar. */


#include <iostream>


using namespace std ;



int main() {

    int num ;

	cout << "Ingrese un numero" << endl ;
	cin >> num ;

	if (num % 2 == 0) {
        cout << "Es par" << endl ;
	} else {
        cout << "Es impar" << endl ;}

	return 0 ;
 }
