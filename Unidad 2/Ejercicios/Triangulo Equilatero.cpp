/*8
Basado en los 2 ejercicios anteriores, hacer un programa para ingresar por teclado la longitud de los tres lados de un tri�ngulo y luego listar qu� tipo de tri�ngulo es:
- Equil�tero: si los tres lados son iguales.
- Is�sceles: si dos de los tres lados son iguales.
- Escaleno: si los tres lados son distintos entre s�.
*/


#include <iostream>


using namespace std ;



int main() {

    int lado1, lado2, lado3 ;

	cout << "Ingrese un lado" << endl ;
	cin >> lado1 ;

	cout << "Ingrese otro lado" << endl ;
	cin >> lado2 ;

	cout << "Ingrese otro lado" << endl ;
	cin >> lado3 ;

	if(lado1 == lado2 && lado1 == lado3) {
        cout << "Equilatero" << endl ;
	} else if (lado1 == lado2 || lado1 == lado3 || lado3 == lado2) {
	    cout << "Isoceles" << endl ;
	} else if ( lado1 != lado2 && lado1 !=lado3 && lado3 != lado2 ){
        cout << "Escaleno" << endl ;}




	return 0 ;
 }
