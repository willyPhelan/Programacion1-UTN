/*
21	Se define como divisores propios de un n�mero entero a aquellos que son sus divisores excluyendo al n�mero en s� mismo.
Ejemplo A. Los divisores propios del 4 son: 1 y 2.
Ejemplo B. Los divisores propios del 12 son: 1, 2, 3, 4 y 6.

Se define a un n�mero como perfecto cuando la suma de todos sus divisores propios coincide con el n�mero en s� mismo.
Ejemplo A: 6 es n�mero perfecto pues 1+2+3=6
Ejemplo B: 28 es n�mero perfecto pues 1+2+4+7+14=28
Ejemplo C: 12 no es n�mero perfecto pues 1+2+3+4+6=16

Hacer un programa para ingresar un n�mero y luego informar con un cartel aclaratorio si el mismo es un n�mero perfecto o no es n�mero perfecto


*/

#include <iostream>


using namespace std ;



int main() {

    int num, i, a, acu=0;

	cout << "Ingresar un numero" << endl ;
	cin >> num ;

	cout << "Divisores de num: " << endl ;

	for(i=1 ; i <= num -1 ; i++) {
        if(num % i == 0){
            cout << i << endl ;
            acu += i ;} }

            if(acu == num) {
                cout << "Numero Perfecto" << endl ;
            } else { cout << "No es perfecto" ;}











	return 0 ;
 }
