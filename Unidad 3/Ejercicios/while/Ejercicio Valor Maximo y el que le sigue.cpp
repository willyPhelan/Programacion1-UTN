/*
Hacer un programa para ingresar una lista de n�meros que finaliza cuando se ingresa un cero, informar los 2 mayores valores ingresados, aclarando cual es el m�ximo y cu�l el que le sigue.
Ejemplo: 10, 8, 12, 14, 3, 0 el resultado ser� 14 y 12.
Ejemplo: 14, 8, 12, 14, 3, 0 el resultado ser� 14 y 14.
Ejemplo: -4, -8, -12, -20, -2, 0 el resultado ser� -2 y -4

*/#include <iostream>


using namespace std ;



int main() {

    int num, mayor, siguiente  ;

	cout << "Ingrese un numero" << endl ;
	cin >> num ;

	mayor = num ;
	siguiente = num ;

	while(num != 0){

    cout << "Ingrese otro numero" << endl ;
	cin >> num ;

    if (num > mayor && num != 0){
        siguiente =  mayor ;
        mayor = num ;}
	}

	cout << "Numero mayor: " << mayor << endl ;
	cout << "Numero siguiente: " << siguiente << endl ;

	return 0 ;
 }
