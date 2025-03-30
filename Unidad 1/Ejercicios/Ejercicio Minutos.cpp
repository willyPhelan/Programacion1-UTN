/* 11 Hacer un programa para ingresar por teclado una cantidad de minutos y mostrar por pantalla a cuántos días, horas y minutos equivalen.
Ejemplo A: si se ingresan 1520 minutos el programa mostrará por pantalla que equivalen a 1 día, 1 hora y 20 minutos.
Ejemplo B: si se ingresan 480 minutos el programa mostrará por pantalla que equivalen a 0 día, 8 horas y 0 minutos. */


#include <iostream>


using namespace std ;



int main() {

    int mins, dias, horas, minutos ;

	cout << "Ingrese la cantidad de minutos" << endl ;
	cin >> mins ;

	dias = mins / 1440 ;
	horas = (mins % 1440)/ 60 ;
	minutos = mins % 60 ;

	cout << mins <<" corresponde a: " << dias << " dias, " << horas << " horas y " << minutos << " minutos" << endl ;

	return 0 ;
 }
