/* Hacer un programa para ingresar por teclado una cantidad de horas y mostrar por pantalla a cuantos días y horas equivalen.
Ejemplo A: si se ingresan 26 horas el programa mostrará por pantalla que equivalen a 1 día y 2 horas.
Ejemplo B: si se ingresan 72 horas el programa mostrará por pantalla que equivalen a 3 días y 0 horas.
Ejemplo C: si se ingresan 20 horas el programa mostrará por pantalla que equivalen a 0 días y 20 horas.
*/

#include <iostream>


using namespace std ;



int main() {

    int horas, dias, hs ;

	cout << "Ingrese un numero de horas" << endl ;
	cin >> horas ;

	dias = horas / 24 ;
	hs = horas % 24  ;

	cout << horas <<" Horas son " << dias << " dias " << "con " << hs << " horas" << endl ;



	return 0 ;
 }
