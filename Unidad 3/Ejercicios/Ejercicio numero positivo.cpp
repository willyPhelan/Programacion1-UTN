/*
4	Hacer un programa para que el usuario ingrese un n�mero positivo y luego se muestren por pantalla los n�meros entre el 1 y
el n�mero ingresado por el usuario.
Ejemplo. Si el usuario ingresa 15, se mostrar�n los n�meros entre el 1 y el 15.


*/

#include <iostream>

using namespace std ;

int main() {

	int i, num ;

	cout << "Ingrese un numero" << endl ;
	cin >> num ;

	for ( i = 0 ; i <= num ; i++ ) {
        cout << i << endl ;
	}

	return 0 ;
 }
