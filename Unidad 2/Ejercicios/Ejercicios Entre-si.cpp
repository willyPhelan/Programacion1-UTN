/*6
Hacer un programa para ingresar por teclado tres n�meros.
Luego determinar e informar con una leyenda aclaratoria si los tres son iguales entre s�, caso contrario no emitir nada.
Tener en cuenta:  Si A es igual a B y B es igual a C, entonces A y C son iguales.
*/

#include <iostream>


using namespace std ;



int main() {

    int a, b, c ;

	cout << "Ingrese un num" << endl ;
	cin >> a ;

	cout << "Ingrese otro num" << endl ;
	cin >> b ;

	cout << "Ingrese otro num" << endl ;
	cin >> c ;

	if (a == b && b == c) {
        cout << "Los 3 numeros son iguales" << endl ;
	}

	return 0 ;
 }
