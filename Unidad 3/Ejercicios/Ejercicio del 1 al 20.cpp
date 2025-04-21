/*
2	Hacer un programa para mostrar por pantalla los números del 1 al 20 salteando de a 3 valores. Es decir: 1, 4, 7, 10, 13, 16, 19.
Importante: El programa no tiene ningún ingreso de datos.

*/

#include <iostream>


using namespace std ;



int main() {

	int i ;

	for (i = 1 ; i < 21 ; i++) {
        if(i == 1 || i == 4 || i == 7 || i == 10 || i == 13 || i == 16 || i == 19) {
            cout << i ;
            cout << endl ;
        }
	}

	return 0 ;
 }
