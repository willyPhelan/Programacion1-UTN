/* Hacer un programa para ingresar por teclado un número y luego emitir por pantalla un cartel aclaratorio indicando si el mismo es positivo, negativo o cero.
Importante: Verifique que el programa emita UN SOLO CARTEL.
*/

#include <iostream>


using namespace std ;



int main() {

    int num ;

	cout << "Ingrese un numero" << endl ;
	cin >> num ;

	if (num > 0 ) {
        cout << "El numero ingresado es positivo" << endl ;
	} else if (num < 0 ) {
        cout << "El numero ingresado es negativo" << endl ;
	} else {
         cout << "El numero ingresado es 0" << endl ;}

	return 0 ;
 }
