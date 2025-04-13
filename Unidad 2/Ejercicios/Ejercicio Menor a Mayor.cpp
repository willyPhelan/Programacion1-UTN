/* *Hacer un programa para ingresar tres números distintos y listarlos ordenados de menor a mayor.
Sugerimos probar CADA UNA de las siguientes 6 combinaciones.
Si N1=8, N2=6, N3=10 ó  N1=8, N2=10, N3=6. Se muestra: 6, 8, 10.
Si N1=6, N2=8, N3=10 ó  N1=10, N2=8, N3=6. Se muestra: 6, 8, 10.
Si N1=6, N2=10, N3=8 ó  N1=10, N2=6, N3=8. Se muestra: 6, 8, 10.
*/

#include <iostream>


using namespace std ;



int main() {

    int num1, num2, num3 ;

	cout << "Ingrese un numero" << endl ;
	cin >> num1 ;

	cout << "Ingrese otro numero" << endl ;
	cin >> num2 ;

	cout << "Ingrese otro numero" << endl ;
	cin >> num3 ;

	cout << endl ;
	cout << "Numeros listados de menor a mayor" << endl ;
	cout << endl ;


	if (num1 < num2 && num2 < num3) {

        cout << num1 << endl ;
        cout << num2 << endl ;
        cout << num3 << endl ;
	}

	if (num1 < num3 && num3 < num2) {

        cout << num1 << endl ;
        cout << num3 << endl ;
        cout << num2 << endl ;
	}

	if (num2 < num1 && num1 < num3) {

        cout << num2 << endl ;
        cout << num1 << endl ;
        cout << num3 << endl ;
	}

	if (num2 < num3 && num3 < num1) {

        cout << num2 << endl ;
        cout << num3 << endl ;
        cout << num1 << endl ;
	}

	if (num3 < num2 && num2 < num1) {

        cout << num3 << endl ;
        cout << num2 << endl ;
        cout << num1 << endl ;
	}

	if (num3 < num1 && num1 < num2) {

        cout << num3 << endl ;
        cout << num1 << endl ;
        cout << num2 << endl ;
	}

	return 0 ;
 }
