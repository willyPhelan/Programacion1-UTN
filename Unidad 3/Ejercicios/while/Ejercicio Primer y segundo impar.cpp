/*
Dada una lista de números que finaliza cuando se ingresa un cero, informar cual es el primer y segundo número impar ingresado.
Ejemplo 8, 4, 5, 6, -9, 5, 7, 0 se informa 5 y -9
*/

#include <iostream>


using namespace std ;



int main() {

    int num, primer_impar=0, segundo_impar=0;
    bool hay_impar=false, hay_segundo_impar=false;

	cout << "Ingresar un numero" << endl ;
	cin >> num ;

	if(num % 2 != 0){
       primer_impar = num ;
       hay_impar = true ;
	}

	while(num != 0){

    cout << "Ingresar otro numero o [0] para finalizar" << endl ;
	cin >> num ;

	if(!hay_impar && num % 2 != 0){
        primer_impar = num ;
        hay_impar = true ;
	} else if(hay_impar && !hay_segundo_impar && num % 2 != 0){
        segundo_impar = num ;
        hay_segundo_impar = true ;}

	}

	cout << "Primer numero impar: "<< primer_impar << endl ;
	cout << "Segundo numero impar: " << segundo_impar << endl ;

	return 0 ;
 }
