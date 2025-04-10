/* Hacer un programa para ingresar cinco números y listar el máximo y el mínimo de ellos. */

#include <iostream>


using namespace std ;



int main() {


    int num1, num2, num3, num4, num5 ;

    cout << "Ingrese un num" << endl ;
	cin >> num1 ;

	cout << "Ingrese otro num" << endl ;
	cin >> num2 ;

	cout << "Ingrese otro num" << endl ;
	cin >> num3 ;

	cout << "Ingrese un num" << endl ;
	cin >> num4 ;

	cout << "Ingrese un ultimo num" << endl ;
	cin >> num5 ;

    if(num1 > num2 && num1 > num3 && num1 > num4 && num1 > num5) {
        cout << "EL mayor es: " << num1 << endl ;
    }

    if(num2 > num1 && num2 > num3 && num2 > num4 && num2 > num5) {
        cout << "EL mayor es: " << num2 << endl ;
    }

    if(num3 > num1 && num3 > num2 && num3 > num4 && num3 > num5) {
        cout << "EL mayor es: " << num3 << endl ;
    }

    if(num4 > num1 && num4 < num2 && num4 > num3 && num4 > num5) {
        cout << "EL mayor es: " << num4 << endl ;
    }

    if(num5 > num1 && num5 > num2 && num5 > num3 && num5 > num4) {
        cout << "EL mayor es: " << num5 << endl ;
    }

    // MENOR

    if(num1 < num2 && num1 < num3 && num1 < num4 && num1 < num5) {
        cout << "EL menor es: " << num1 << endl ;
    }

    if(num2 < num1 && num2 < num3 && num2 < num4 && num2 < num5) {
        cout << "EL menor es: " << num2 << endl ;
    }

    if(num3 < num1 && num3 < num2 && num3 < num4 && num3 < num5) {
        cout << "EL menor es: " << num3 << endl ;
    }

    if(num4 < num1 && num4 < num2 && num4 < num3 && num4 < num5) {
        cout << "El menor es: " << num4 << endl ;
    }

    if(num5 < num1 && num5 < num2 && num5 < num3 && num5 < num4) {
        cout << "El menor es: " << num5 << endl ;
    }




	return 0 ;
 }
