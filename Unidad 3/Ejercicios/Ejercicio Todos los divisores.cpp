/*17	Hacer un programa para ingresar un n�mero entero y luego informar todos los divisores de ese n�mero.
Ejemplo A. Si se ingresa 6 se listar�n: 1, 2, 3 y 6
Ejemplo B. Si se ingresa 9 se listar�n: 1, 3 y 9.
Ejemplo 3. Si se ingresa 11 se listar�n 1 y 11.



*/

#include <iostream>


using namespace std ;



int main() {

        int num, i;

        cout << "Ingrese un numero" << endl ;
        cin >> num ;

        cout << "Divisores de "<< num << endl ;
        for (i = 1 ; i <=num ; i++){
            if (num % i == 0){
                cout << i << " " ;
            }
        }
	return 0 ;
 }
