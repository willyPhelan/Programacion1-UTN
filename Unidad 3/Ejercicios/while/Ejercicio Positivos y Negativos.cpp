/*
Hacer un programa para ingresar una lista de n�meros que finaliza cuando se ingresa un cero, luego informar cu�ntos son positivos y cu�ntos son negativos.
Ejemplo: 4, -3, 8, -5, 18, 20, 0. Se listar� Positivos: 4 Negativos: 2.
Para resolver este ejercicio sugerimos resolver antes el TP3 EJ 7.

*/#include <iostream>


using namespace std ;



int main() {

    int num, num2, positivos=0, negativos=0 ;

	cout << "Ingrese un numero" << endl ;
	cin >> num ;

	if(num > 0){
        positivos++ ;
	}

	if(num < 0){
        negativos++ ;
	}

	while(num != 0){
	    cout << "Ingrese otro numero o ingrese 0 para terminar la ejecucion" << endl ;
        cin >> num ;

        if(num > 0){
            positivos++ ;

        }

        if(num < 0){
            negativos++ ;


        }}

        cout << "Cantidad de Positivos: " << positivos << endl ;
        cout << "Cantidad de Negativos: " << negativos << endl ;

	return 0 ;
 }
