/*
Dada una lista de 10 n�meros enteros informar la cantidad de duplas de n�meros impares que se hayan ingresado consecutivamente.
Ejemplo A: 12, 3, 5, 7, 6, 9, 13, 10, 7, -5.

En esta lista las duplas son: 3:5, 5:7, 9:13, 7:-5 por lo tanto se informar� que hay 4 duplas de n�meros impares ingresados consecutivamente.

Ejemplo B: 3, 5, 7, 10, 3, 5, 7, 10, 3, 5.
En esta lista las duplas son: 3:5, 5:7, 3:5, 5:7, 3:5 por lo tanto se informar� que hay 5 duplas de n�meros impares ingresados consecutivamente.

Aclaraci�n: S�lo hay que listar la cantidad de duplas de impares. No hay que mostrar c�mo est�n compuestas las duplas de n�meros.

*/

#include <iostream>


using namespace std ;




int main() {

    int i, num, primernum, dupla=0 ;

    for (i = 1 ; i <= 10 ; i++){

        cout << "Ingresar un numero" << endl ;
        cin >> num ;

        if(i > 1) { // si no es la primer vuelta del for, compara
         if(num % 2 != 0 && primernum % 2 != 0){
            dupla++ ;
        }
         }
            primernum = num ; // en la primer vuelta del for se guarda el primer num.

    }
        cout << "Cantidad de duplas: " << dupla << endl ;

	return 0 ;
 }
