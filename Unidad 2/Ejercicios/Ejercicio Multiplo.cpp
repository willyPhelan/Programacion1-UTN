/* 2
Hacer un programa para ingresar por teclado dos números.
Luego informar por pantalla con un cartel aclaratorio si el primer número es múltiplo del segundo.
*/


#include <iostream>


using namespace std ;



int main() {

    int n1, n2 ;

	cout << "Ingrese un numero" << endl ;
	cin >> n1 ;

	cout << "Ingrese otro numero" << endl ;
	cin >> n2 ;

	if(n1 % n2 == 0) {
        cout << "Es multiplo" << endl ;
	} else {
        cout << "No es multiplo" << endl ;}

	return 0 ;
 }
