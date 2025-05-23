/*
Hacer un programa que permita ingresar una lista de números positivos, negativos o cero hasta que la diferencia entre el máximo y el mínimo sea mayor a 10.
Calcular e informar: La cantidad de números que componen la lista.

Ejemplo A: 1, 4, 6, -10 → Cantidad de números: 4
Ejemplo B: 100, 104, 106, 100, 100, 105, 200 → Cantidad de números: 7


*/#include <iostream>


using namespace std ;



int main() {

    int num, num2, maximo=0, minimo=0, resta, cont=1 ;

    cout << "Ronda: " << cont << endl ;

	cout << "Ingrese un numero: " << endl ; // 1 4
	cin >> num ;

	maximo = num ;
	minimo = num ;


    resta  = maximo - minimo ;

	while(resta < 10){

    cont++ ;

    cout << "Ronda: " << cont << endl ;

    cout << "Ingrese otro numero: " << endl ;
	cin >> num ;

	if(num > maximo){
        maximo = num ;
         }

    if(num < minimo){
        minimo = num ;
    }

    resta  = maximo - minimo ;


	}



	cout << "Numero minimo: " << minimo << endl ;
	cout << "Numero maximo: " << maximo << endl ;
	cout << "Cantidad total de numeros: " << cont << endl ;


	return 0 ;
 }
