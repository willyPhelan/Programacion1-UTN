/*
Dada una lista de n�meros que finaliza cuando se ingresa un n�mero divisible por 7, informar cual es el ante�ltimo y �ltimo n�mero impar ingresado.
Ejemplo 8, 4, -5, 6, 10, 5, 18, 14 se informa -5 y 5.

Nota: Contemplar la posibilidad que podr�a no haber n�meros impares en la lista.


*/

#include <iostream>


using namespace std ;



int main() {

        int num, impares=0, primer, segundo, anteultimo, ultimo ;

        cout << "Ingrese un numero: " << endl ; // 1 4
        cin >> num ;


         if(num % 2 != 0) {
                impares++ ;}

        while (num % 7 != 0){


        cout << "Ingrese un numero: " << endl ; // 1 4
        cin >> num ;

         if(num % 2 != 0) {
                impares++ ;

        if(impares == 1) {
                primer = num ; }


         if(impares == 2) {
                segundo = num ; }

            anteultimo = ultimo ;
            ultimo = num ;}
        }

        if(impares){
         if(impares >= 2){cout << "Anteultimo impar: " << anteultimo << endl;}
         if(impares >= 1){ cout << "Ultimo impar: " << ultimo << endl;} } else {cout << "No hay impares " << endl ;}


        return 0 ;
 }
