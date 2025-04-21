/*
6	Hacer un programa para ingresar un N valor que indica la cantidad de números que componen una lista y luego solicitar se ingresen esos N números. Se pide informar cuantos son positivos
Ejemplo A: Se ingresa como N el valor 5, y luego se ingresa: 10, -3, 2, 5, 4. Se listará:  Cantidad de Positivos: 4
Ejemplo B: Se ingresa como N el valor 6, y luego se ingresa: -10, -3, -2, 0, -5, -4. Se listará: Cantidad de Positivos: 0


*/#include <iostream>


using namespace std ;



int main() {

    int lista, i, numero, positivos=0  ;

	cout << "Ingresar la cantidad de numeros que componen la lista" << endl ;
	cin >> lista ;

	for (i = 0 ; i < lista ; i++){

        cout << "Ingrese un numero" << endl ;
        cin >> numero ;

        if (numero > 0) {
            positivos++ ;}

            }

        cout << "Cantidad de positivos: " << positivos << endl ;

	return 0 ;
 }
