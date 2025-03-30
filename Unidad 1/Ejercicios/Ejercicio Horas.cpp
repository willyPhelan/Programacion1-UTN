/* Hacer un programa para ingresar por teclado una cantidad de minutos y mostrar por pantalla a cuantas horas y minutos equivalen.
Ejemplo A: si se ingresan 380 minutos el programa mostrará por pantalla que equivalen a 6 horas y 20 minutos.
Ejemplo B: si se ingresan 720 minutos el programa mostrará por pantalla que equivalen a 12 horas y 0 minutos.
Ejemplo C: si se ingresan 50 minutos el programa mostrará por pantalla que equivalen a 0 horas y 50 minutos
*/
#include <iostream>


using namespace std ;



int main() {

    int horas, minutos, total_h , total_m ;

	cout << "Ingrese una cantidad de minutos" << endl ;
	cin >> minutos ;

	total_h = minutos / 60;
	total_m = minutos % 60 ;


	cout << "Equivale a " << total_h << " horas con " << total_m << " minutos" << endl ;




	return 0 ;
 }
