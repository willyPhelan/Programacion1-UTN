/*
17
Hacer un programa para ingresar una lista de números que finaliza cuando se ingresan dos números positivos consecutivos, y luego informar el máximo.
Cuando se ingresa el segundo número positivo consecutivo el mismo debe ser descartado.

Ejemplo A: 5, -10, 20, -8, 0, 13, -35, -8, 15, 10. Se listará Máximo 20.
En este caso, el segundo número positivo consecutivo, el 10, no se analiza, sólo sirve para finalizar el ingreso.
Ejemplo B: 5, -10, 20, -20, 0, 55, -13, 45, -8, -5, 12, 120. Se listará Máximo 55.
En este caso, el segundo número positivo consecutivo, el 120, no se analiza, sólo sirve para finalizar el ingreso.

*/

#include <iostream>


using namespace std ;


int main() {

	int num, num2, anterior, actual, maximo;

	cout << "Ingrese un numero" << endl ; //  5 -10
	cin >> num ;

	anterior = num ;
	maximo = num ;

	cout << "Ingrese un numero del singo opuesto, o uno del mismo signo para finalizar. " << endl ;
	cin >> num2 ;

	actual = num2 ;

	if (!(anterior > 0 && actual > 0) && actual > maximo) {
        maximo = actual ;
    }

	while (!(anterior > 0 && actual > 0)){

    anterior = actual ;

    cout << "Ingrese un numero negativo o ingrese uno positivo para salir" << endl ;
	cin >> actual ;

	if(!(anterior > 0 && actual > 0) && actual > maximo) {
        maximo = actual ;
	} }

	cout << "Numero maximo: " << maximo << endl;

	return 0 ;
 }
