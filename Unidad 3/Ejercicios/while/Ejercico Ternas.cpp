/*

22 Hacer un programa que permita ingresar una lista de números positivos, negativos o cero hasta que se ingrese el 5º número par.
Calcular e informar:
-	La cantidad de ternas de números negativos ingresados de manera consecutiva.

Ejemplo A: 4, -1, -4, -5, 10, -3, -5, 7, -5, -3, -6, 10 → Cantidad de ternas: 2

*/

#include <iostream>


using namespace std ;



int main() {

    int num, cont=0, primer_negativo, cont_ternas=0,consecutivos_negativos=0 ;


	while(cont < 5) {

        cout << "Ingrese un numero: " << endl ; // 1 4
        cin >> num ;

        if(num % 2 == 0){
        cont++ ; }

        if(num < 0){ consecutivos_negativos++; } else { consecutivos_negativos = 0 ;} // reinicio cont}

        if(consecutivos_negativos == 3){
            cont_ternas++ ;
            consecutivos_negativos = 0; // reinicio
        }


        }


	cout << "Cantidad de ternas de numeros negativos consecutivos: " << cont_ternas << endl ;
	return 0 ;
 }
