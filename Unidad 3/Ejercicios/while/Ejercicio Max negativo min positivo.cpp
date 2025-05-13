/*
Hacer un programa para ingresar una lista de números que finaliza cuando se ingresa un cero, informar el máximo de los negativos y el mínimo de los positivos.
Ejemplo: 5, 8, 12, 2, -10, 15, -20, 8, -3, 24, 0.
Máximo Negativo: -3.
Mínimo Positivo: 2.

*/#include <iostream>


using namespace std ;



int main() {

    int num, negativo, positivo, max_negativo=0, min_positivo=0 ;

	cout << "Ingresar un numero" << endl ;
	cin >> num ;

	if(num > 0){
        min_positivo = num ;
	}

	if (num < 0){
        max_negativo = num ;
	}

	while(num != 0){

    cout << "Ingresar otro numero" << endl ;
	cin >> num ;

    if(min_positivo == 0 && num > 0){
        min_positivo = num ; }
        else if(num > 0 && num < min_positivo){
            min_positivo = num ; }


    if(max_negativo == 0 && num < 0){
            max_negativo = num ;}
    else if(num < 0 && num > max_negativo ){
            max_negativo = num ; }}




     cout << "Minimo numero positivo: " << min_positivo<< endl ;
	 cout << "Maximo numero negativo: " << max_negativo << endl ;


	return 0 ;
 }
