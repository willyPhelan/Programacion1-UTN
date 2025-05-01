/*
22	Dada una lista de 7 números enteros informar el primer número par ingresado y su ubicación en la lista y el último de los números primos y su ubicación en la lista.
Ejemplo A: 7, 4, 5, 6, 9, 13, 10 se informa:
Primer número par: 4 ubicación 2. Último primo: 13 ubicación 6.
Ejemplo B: 9, 5, 21, 9, 13, 15, 6 se informa:
Primer número par: 6 ubicación 7. Último primo: 13 ubicación 5.
*/

#include <iostream>


using namespace std ;



int main() {

    int i,a, num=0, primerpar=0, ubi,ubiprimo, primo=0, cont=0 ;
    bool haypar=false ;


    for (i=1 ; i <= 7 ; i++){

     cout << "Ingrese un numero: " << endl ;
     cin >> num ;

	if(num % 2 == 0 && haypar == false){
        primerpar = num ;
        haypar = true;
        ubi = i ;}

        cont = 0 ; // reiniciar cotador por cada vuelta del for(i)
        for (int a = 1; a <= num; a++) {
            if (num % a == 0) {
                cont++ ;  }}

        if (cont == 2) {
                primo = num;
                ubiprimo = i;
}}

    cout << "Primer par: " << primerpar <<" ubicacion: " << ubi << endl ;
    cout << "Ultimo Primo: " << primo <<" ubicacion: " << ubiprimo << endl ;
	return 0 ;
 }
