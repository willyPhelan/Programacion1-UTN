/*
12	Hacer un programa para ingresar una lista de 10 números e informar el máximo de los negativos y el mínimo de los positivos.
Ejemplo: 5, 8, 12, 2, -10, 15, -20, 8, -3, 24. Máximo Negativo -3. Mínimo Positivo 2.

*/
#include <iostream>


using namespace std ;



int main() {

    int num, num2, i, num_n=0, num_p=0;
    bool hay_negativo=false, hay_positivo=false  ;


        cout << "Ingrese un numero" << endl ;
        cin >> num ;


        if (num < 0) {  num_n = num;
                        hay_negativo = true ; } else if (num > 0) { num_p = num ;
                                                                    hay_positivo = true ;}

        for (i = 1 ; i <= 9 ; i++) {

             cout << "Ingrese otro numero" << endl ;
             cin >> num2 ;

             if(num2 < 0) {
             if (!hay_negativo || num2 > num_n) { // si no hay negativo o el numero ingresado (num2) es un numero negativo mayor...
                num_n = num2 ;
                hay_negativo = true ;
             } }

             if(num2 > 0) {
                if(!hay_positivo || num2 < num_p) {
                num_p = num2 ;
                hay_positivo = true ;
                }
             }



     }
            cout << "Minimo positivo: "<< num_p << endl ;
            cout << "Maximo negativo: "<< num_n << endl ;


	return 0 ;
 }
