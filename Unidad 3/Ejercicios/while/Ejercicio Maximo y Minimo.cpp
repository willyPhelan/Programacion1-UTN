/*
10	Hacer un programa para ingresar una lista de n�meros que finaliza cuando se ingresa un cero, luego informar el m�ximo y el m�nimo.

Ejemplo A: 10, 20, -5, 30,-15, 5, 42, 2, 22, -13, 0.
Se listar� M�ximo 42 M�nimo -15.

Ejemplo B: 10, 20, 5, 30, 15, 5, 42, 8, 22, 13, 0.
Se listar� M�ximo 42 M�nimo 5.

Ejemplo C: -10, -20, -5, -30, -15, -12, -42, -8, -22, -13, 0.
Se listar� M�ximo -5 M�nimo -42.

Observe que los ejemplos B y C dejan en claro que la suposici�n de que el m�ximo �seguramente� es un positivo y el m�nimo �seguramente� es un negativo, es incorrecta.


*/
#include <iostream>


using namespace std ;



int main() {

    int num, maximo=0, minimo=0 ;

    cout << "Ingrese un numero" << endl ;
	cin >> num ;

	maximo = num ;
	minimo = num ;

	while (num != 0){

    cout << "Ingrese otro numero" << endl ;
	cin >> num ;

	if(num > maximo){
        maximo = num ;
	}

	if(num < minimo && num != 0){
        minimo = num ;
	}


	}

	cout << "Numero maximo de la lista: " << maximo << endl ;
	cout << "Numero minimo de la lista: " << minimo << endl ;

	return 0 ;
 }
