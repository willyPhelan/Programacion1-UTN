/*10
Hacer un programa para ingresar cinco números y listar el máximo y el mínimo de ellos.
*/

#include <iostream>


using namespace std ;



int main() {

    int num1, num2, num3, num4, num5 ;

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


	if(num1 > num2 && num1 > num3 && num1 > num4 && num1 > num5){
        cout << num1 << " Es el mayor" << endl ;
	}

	if(num2 > num1 && num2 > num3 && num2 > num4 && num2 > num5){
        cout << num2 << " Es el mayor" << endl ;
	}

	if(num3 > num1 && num3 > num2 && num3 > num4 && num3 > num5){
        cout << num3 << " Es el mayor" << endl ;
	}

	if(num4 > num1 && num4 > num2 && num4 > num3 && num4 > num5){
        cout << num4 << " Es el mayor" << endl ;
	}

	if(num5 > num1 && num5 > num2 && num5 > num3 && num5 > num4){
        cout << num5 << " Es el mayor" << endl ;
	}




	if(num1 < num2 && num1 < num3 && num1 < num4 && num1 < num5){
        cout << num1 << " Es el menor" << endl ;
	}

	if(num2 < num1 && num2 < num3 && num2 < num4 && num2 < num5){
        cout << num2 << " Es el menor" << endl ;
	}

	if(num3 < num1 && num3 < num2 && num3 < num4 && num3 < num5){
        cout << num3 << " Es el menor" << endl ;
	}

	if(num4 < num1 && num4 < num2 && num4 < num3 && num4 < num5){
        cout << num4 << " Es el manor" << endl ;
	}

	if(num5 < num1 && num5 < num2 && num5 < num3 && num5 < num4){
        cout << num5 << " Es el menor" << endl ;
	}




	return 0 ;
 }
