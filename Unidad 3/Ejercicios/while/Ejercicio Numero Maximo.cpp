/*
Hacer un programa para ingresar una lista de números que finaliza cuando se ingresa un cero, luego informar el máximo.
Ejemplo A: 5, 10, 20, 8, 25, 13, 35, -8, -5, 20, 0. Se listará Máximo 35.
Ejemplo B: 5, 10, 20, 8, 55, 13, 55, -8, -5, 20, 0. Se listará Máximo 55.
Ejemplo C: -15, -10, -20, -8, -55, -13, -55, -8, -5, -20, 0. Se listará Máximo -5.

*/#include <iostream>


using namespace std ;



int main() {

    int num, mayor ;

	cout << "Ingrese un numero" << endl ;
	cin >> num ;

    mayor = num ;

    while (num != 0){
    cout << "Ingrese otro numero y 0 para finalizar" << endl ;
	cin >> num ;

	if(num > mayor){
        mayor = num ;
	}

    }

    cout << "Mayor numero de la Lista: " << mayor << endl ;


	return 0 ;
 }
