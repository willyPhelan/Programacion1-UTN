/*Hacer un programa que muestre los números primos entre el 1 y el 10000. El usuario no debe ingresar nada en este programa
*/

#include <iostream>


using namespace std ;



int main() {

    int i,a, cont_divisores=0;

    for(i = 2 ; i <= 10000 ; i++){ // con este for listo los numeros

            cont_divisores = 0 ; // por cada vuelta (cada numero) reinicio el contador

    for(a = 1 ; a <= i ; a++){ // por cada num del primer for lo voy dividiendo por todos sus anteriores hasta llegar a i

            if(i % a == 0){
                cont_divisores++ ;
            }}
            if(cont_divisores == 2) {
                cout << i << endl ;
            }

            }



	return 0 ;
 }
