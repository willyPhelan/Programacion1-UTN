/*
9
Hacer un programa para ingresar tres números y listar el máximo de ellos.
*/



#include <iostream>


using namespace std ;



int main() {

    int num1, num2, num3 ;

	cout << "Ingrese un num" << endl ;
	cin >> num1 ;

	cout << "Ingrese otro num" << endl ;
	cin >> num2 ;

	cout << "Ingrese otro num" << endl ;
	cin >> num3 ;


	if (num1 > num2 && num1 > num3) {
       cout << num1 <<" Es el max" << endl ;
	} else if (num2 > num1 && num2 > num3) {
       cout << num2 <<" Es el max" << endl ;}
       else {
       cout << num3 <<" Es el max" << endl ;
       }




	return 0 ;
 }
