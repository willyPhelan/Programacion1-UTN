/*1 Hacer un programa para ingresar por teclado la cantidad de horas trabajadas por un operario
y el valor que se le paga por hora trabajada y listar por pantalla el sueldo que le corresponda.

*/




#include <iostream>


using namespace std ;



int main() {

    int horas  ;
    float sueldo, cant_por_hora ;

	cout << "Ingrese cantidad de horas trabajdas" << endl ;
	cin >> horas ;
	cout << "Ingrese el precio que paga por hora" << endl ;
	cin >> cant_por_hora ;

	sueldo = horas * cant_por_hora ;


	cout << "El sueldo corresponde a $" << sueldo << endl ;

	return 0 ;
 }
