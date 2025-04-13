/*Hacer un programa para ingresar cinco números y listar cuantos de esos cinco números son positivos, cuantos son negativos y cuantos son iguales a 0.
*/

#include <iostream>


using namespace std ;



int main() {

    int num1, num2, num3, num4, num5, positivos=0, negativos=0, cero=0 ;

	cout << "Ingrese un numero" << endl ;
	cin >> num1 ;

	cout << "Ingrese otro numero" << endl ;
	cin >> num2 ;

	cout << "Ingrese otro numero" << endl ;
	cin >> num3 ;

	cout << "Ingrese otro numero" << endl ;
	cin >> num4 ;

	cout << "Ingrese otro numero" << endl ;
	cin >> num5 ;

	if(num1 == 0) {
        cero = 1 ;
	} else if (num1 > 0) {
        positivos = 1 ; } else {
        negativos = 1 ;}

        if(num2 == 0) {
        cero++ ;
	} else if (num1 > 0) {
        positivos++ ; } else {
        negativos++ ;}

        if(num3 == 0) {
        cero++ ;
	} else if (num1 > 0) {
        positivos++ ; } else {
        negativos++ ;}

        if(num4 == 0) {
        cero++ ;
	} else if (num1 > 0) {
        positivos++ ; } else {
        negativos++ ;}

        if(num5 == 0) {
        cero++ ;
	} else if (num1 > 0) {
        positivos++ ; } else {
        negativos++  ;}

        cout << "La cantidad de positivos es: " << positivos << endl ;
        cout << "La cantidad de negativos es: " << negativos << endl ;
        cout << "La cantidad de ceros es: " << cero << endl ;



	return 0 ;
 }
