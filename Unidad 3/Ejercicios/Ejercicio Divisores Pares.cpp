/*
18	Hacer un programa para ingresar un n�mero entero y luego informar todos los divisores pares de ese n�mero.
Ejemplo A. Si se ingresa 6 se listar�: 2 y 6. Ejemplo B. Si se ingresa 8 se listar�: 2, 4 y 8. Ejemplo C. Si se ingresa 11 no se listar� nada.


*/

#include <iostream>


using namespace std ;



int main() {

	int num, i ;
	bool par=false;

        cout << "Ingrese un numero" << endl ;
        cin >> num ;

        cout << "Divisores Pares de "<< num << ":"<<endl ;
        if(num % 2 != 0) { cout <<  "No hay" ;}
        for (i = 1 ; i <= num ; i++){
            if (num % i == 0 && i % 2 == 0 && i != 0){
                cout << i << " " ;
                 } }


	return 0 ;
 }
