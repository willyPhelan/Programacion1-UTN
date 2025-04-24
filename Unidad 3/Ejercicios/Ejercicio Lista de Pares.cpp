/*
13	Dada una lista de 10 números enteros informar cual es el máximo de los pares.
Ejemplo A: 2, 10, 20, 8, 25, 13, 36, - 8, -5, 20 se informa máximo: 36
Ejemplo B 5, -13, 23, 81, -55, -13, 55, 4, 15 ,-20 Se informa máximo: 4
Ejemplo C: -5, -13, -20, -8, -55, -13, -55, -14, -15, -20 se informa máximo: -8


*/

#include <iostream>


using namespace std ;



int main() {

    int i, par=0, num ;
    bool hay_par=false ;

    cout << "Ingrese un numero" << endl ;
      cin >> num ;

      if (num % 2 == 0) {
        hay_par = true ; // Bandera
        par = num ;

      }

    for (i = 1 ; i <= 9 ; i++ ) {

      cout << "Ingrese otro numero" << endl ;
      cin >> num ;

      if (num % 2 == 0){
            if(!hay_par || num > par ) {
                par = num ;
                hay_par = true ;
            } }}

   cout << "Par: " << par << endl ;







	return 0 ;
 }
