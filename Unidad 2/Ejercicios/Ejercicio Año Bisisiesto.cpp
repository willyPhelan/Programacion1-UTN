/* 15
Un a�o es bisiesto si es m�ltiplo de 4, exceptuando a los a�os que son m�ltiplos de 100 pero que no sean m�ltiplos de 400.
Esto �ltimo significa que el a�o 1900 no es bisiesto, pero el a�o 2000 s� lo es.
Hacer un programa para  ingresar un a�o y listar por pantalla si es bisiesto o no lo es.

Ejemplo A. Si se ingresa el a�o 2020 se indicar� como bisiesto.
Ejemplo B. Si se ingresa el a�o 2019 se indicar� como no bisiesto.
Ejemplo C. Si se ingresa el a�o 1800 o 1900 se indicar� como no bisiesto.
Ejemplo D. Si se ingresa el a�o 1600 o 2000 se indicar� como bisiesto.
*/




#include <iostream>


using namespace std ;



int main() {

    int anio ;
    cout << "Ingrese un ano" << endl  ;        ;
	cin >> anio ;

	if (anio % 4 == 0  && anio % 100 == 0 && anio % 400 != 0  ) {
        cout << "No es bisiesto" << endl ;
	} else if (anio % 4 == 0  && anio % 100 == 0 && anio % 400 == 0) {
	    cout << "Es bisiesto" << endl ;
	} else if (anio % 4 == 0) {
        cout << "Es bisiesto" ; } else {
        cout << "No es bisiesto" ; }

	return 0 ;
 }
