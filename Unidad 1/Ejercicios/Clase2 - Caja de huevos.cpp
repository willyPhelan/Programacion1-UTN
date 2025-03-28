#include <iostream>


using namespace std ;



int main() {

    int huevos ;

	cout << "ingrese cantidad de huevos" << endl ;

	cin >> huevos ;

    int resto = huevos % 6 ;
    int cajas = (huevos - resto) / 6 ;

    cout << "la cantidad de cajas que se necesitan son " << cajas ;

    cout << endl ;
    cout << endl ;

    cout << "sobran " << resto << " huevos" ;

	return 0 ;
 }
