/*
7	Hacer un programa para ingresar una lista de 10 números, luego informar cuántos son positivos, cuántos son negativos, y cuántos iguales a cero.
Para resolver este ejercicio sugerimos resolver antes el TP2 EJ 11.


*/#include <iostream>


using namespace std ;



int main() {

    int i, num, positivos=0, negativos=0, cero=0 ;

	for (i = 1 ; i <= 10 ; i++) {
	cout << "Ingrese un numero" << endl ;
    cin >> num ;

    if (num > 0) {
        positivos++ ;
    }

    if (num < 0) {
        negativos++ ;
    }

    if (num == 0) {
        cero++ ;
    }


     }



    cout << endl << "Cantidad de vueltas: " << i -1 << endl ;
    cout << endl << "Cantidad de positivos: " << positivos << endl ;
    cout << endl << "Cantidad de negativos: " << negativos << endl ;
    cout << endl << "Cantidad de cero/s: " << cero << endl ;


	return 0 ;
 }
