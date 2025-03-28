/* Hacer un programa para ingresar por teclado la cantidad de asientos totales en un avión
y la cantidad de pasajes ocupados y luego calcular e informar el porcentaje de ocupación y el porcentaje de no ocupación del mismo. */


#include <iostream>


using namespace std ;



int main() {

    float no_ocupados, ocupados, cantidad_asientos, cantidad_ocupados, libres ;

	cout << "Ingrese la cantidad de asientos que hay en el avion" << endl ;

	cin >> cantidad_asientos ;

	cout << "Ingrese la cantidad de asientos ocupados" << endl ;

	cin >> cantidad_ocupados ;

	libres = cantidad_asientos - cantidad_ocupados ;

	ocupados = ( cantidad_ocupados / cantidad_asientos ) * 100 ;

	no_ocupados = ( libres / cantidad_asientos ) * 100 ;

	cout << "El porcentaje de asientos ocupados es: %" << ocupados << endl ;
	cout << "El porcentaje de asientos desocupados es: %" << no_ocupados << endl ;


	return 0 ;
 }
