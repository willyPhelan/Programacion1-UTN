/*
20
Dada una lista de n�meros que finaliza cuando se ingresa un cero, informar el primer n�mero par ingresado y su ubicaci�n en la lista y el �ltimo de los n�meros primos y su ubicaci�n en la lista.

Ejemplo A: 7, 4, 5, 6, 9, 13, 10 se informa Primer n�mero par: 4 ubicaci�n 2.  �ltimo primo: 13 ubicaci�n 6.
Ejemplo B: 9, 5, 21, 9, 13, 15, 6 se informa Primer n�mero par: 6 ubicaci�n 7. �ltimo primo: 13 ubicaci�n 5.


*/#include <iostream>


using namespace std ;



int main() {

    int num, posicion=0, primer_par=0, ultimo_primo=0, cont=1, divisores=0, ubi_primo=0, ubi_par=0 ;
    bool hay_primo=false, hay_par=false ;

    cout << "Ingrese un numero: " ;
    cin >> num ;

    while(num != 0){

         posicion++ ;


    if(!hay_par && num % 2 == 0){
                            primer_par = num ;
                            hay_par = true ;
                            ubi_par = posicion ; }




    divisores = 0 ;
    cont = 1 ;

    while(cont <= num){
            if(num % cont == 0){
            divisores++ ;
            }

            cont++; }


    if(divisores == 2){
            ultimo_primo = num ;
            hay_primo = true ;
            ubi_primo = posicion ;}

    cout << "Ingrese otro numero (0 para terminar): ";
    cin >> num;


     }


        if (hay_par)
        cout << "Primer numero par: " << primer_par << " Posicion: " << ubi_par << endl;
    else
        cout << "No se ingreso ningun numero par." << endl;

    if (hay_primo)
        cout << "Ultimo numero primo: " << ultimo_primo << " Posicion: " << ubi_primo << endl;
    else
        cout << "No se ingreso ningun numero primo." << endl;
	return 0 ;
 }
