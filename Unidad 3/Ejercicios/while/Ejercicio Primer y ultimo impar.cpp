/*
Dada una lista de números que finaliza cuando se ingresa un cero, informar cual es el primer y último número impar ingresado.
 Ejemplo 8, 4, -5, 6, 9, 5, 18, 0 se informa -5 y 5 */

 #include <iostream>


using namespace std ;



int main() {

        int num, primer_impar=0, ultimo_impar=0 ;
        bool hay_impar=false ;

        cout << "Ingresar un numero" << endl ;
        cin >> num ;

        if(num % 2 != 0){
        primer_impar = num ;
        hay_impar = true ; }

        while (num != 0){

        cout << "Ingresar otro numero o [0] para finalizar" << endl ;
        cin >> num ;

        if(!hay_impar && num % 2 != 0){
        primer_impar = num ;
        hay_impar = true ;  } else if(num % 2 != 0){ ultimo_impar = num ;
        }}


    cout << "Primer numero impar: " << primer_impar << endl ;
    cout << "Ultimo numero impar: " << ultimo_impar << endl ;

	return 0 ;
 }
