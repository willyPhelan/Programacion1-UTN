/*
Un número Simonírico es un número positivo divisible por 15 y a la vez divisible por 3 pero no divisible por 6.
Hacer un programa que muestre los primeros 1000 números Simoníricos. El usuario no debe ingresar nada.

*/
#include <iostream>


using namespace std ;



int main() {

    int numero_simonirico=0, num=1, cont=1 ;

	while (cont <= 1000){

            if(num % 15 == 0 && num % 3 == 0 && num % 6 != 0){
                numero_simonirico = num ;
                cout << numero_simonirico << " " << endl ;
                cont++ ;
            }

        num ++ ;

	}



	return 0 ;
 }
