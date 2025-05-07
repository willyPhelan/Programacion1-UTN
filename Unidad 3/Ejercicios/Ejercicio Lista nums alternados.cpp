/*
32	Se ingresa una lista de 10 números enteros y se pide determinar si la lista está formada por todos números alternados entre pares e impares o impares y pares.
Ejemplo A: 8, 7, 10, -5, 20, 3, -10, 5, -10, -7 se lista el cartel “Alternados”.
Ejemplo B: 5, 12, -5, 10, 13, 40, -11, 6, -7, -6 se lista el cartel “Alternados”.
Ejemplo C: 5, 5, -5, 10, 10, 40, -11, 6, -7, -6 se lista el cartel “No Alternados”.

*/

#include <iostream>


using namespace std ;



int main() {

    int i, num, anterior ;
    bool alternado= true ;

    for (i = 1 ; i <= 10 ; i++){

	cout << "Ingresar un numero" << endl ;
	cin >> num ;

    if(i > 1){ // a partir del segundo valor, ya que no hay un numero anterio ingresado prara comprarar

    //Si anterior y num son ambos pares o ambos impares, la lista no esta alternada
       if((anterior % 2 == 0 && num % 2 == 0) || (anterior % 2 != 0 && num % 2 != 0)) {
          alternado = false ;}}

    anterior = num ; // guardo el primer valor para compararlo con el segundo y asi saber si esta ordenado
    }


    if(alternado) { cout << "Conjunto de numeros alternados" << endl ;} else {
        cout << "Conjunto de numeros no alternados" ;
    }







	return 0 ;
 }
