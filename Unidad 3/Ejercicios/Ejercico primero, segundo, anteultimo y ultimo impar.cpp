/*
14	Dada una lista de 7 números enteros informar cual es el primer, el segundo, el anteúltimo y el último número impar ingresado.
Ejemplo 8, 4, -5, 7, 9, 18, 5 se informa: Primer impar: -5, Segundo impar: 7, Anteúltimo impar: 9 y Último impar: 5.
*/

#include <iostream>


using namespace std ;



int main() {

    int i, num, primer=0, segundo=0, anteultimo=0, ultimo=0, inicio=0, impares=0 ;



    for(i = 0 ; i < 7 ; i++) {

            cout << "Ingrese un numero" << endl ;
            cin >> num ;

            if(num % 2 != 0) {
                impares++ ;

            if(impares == 1) {
                primer = num ;
            }

            if(impares == 2) {
                segundo = num ;
            }

            anteultimo = ultimo ;
            ultimo = num ;} }

            if(impares >= 1) { cout << "Primer impar: " << primer << endl; }
            if(impares >= 2) {cout << "Segundo impar: " << segundo << endl;}
            if(impares >= 2){cout << "Anteultimo impar: " << anteultimo << endl;}
            if(impares >= 1){ cout << "Ultimo impar: " << ultimo << endl;}
















	return 0 ;
 }
