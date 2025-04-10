/*7
Hacer un programa para ingresar por teclado tres números e informar con una leyenda aclaratoria si los tres son todos distintos entre sí,
caso contrario no emitir nada.
Tener en cuenta: Si A es distinto de B y B es distinto de C, eso no significa que A y C sean distintos. Ejemplo: A=8, B=6 y C=8.
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

	if (a != b && b != c && a!= c) {
        cout << "Los 3 numeros son distintos entre si" << endl ;
	}

	return 0 ;
 }
