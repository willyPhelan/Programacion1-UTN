/*
16
Hacer un programa para ingresar por teclado las cuatro notas de los ex�menes obtenidas por un alumno y luego emitir uno solo de los cartel de acuerdo a las siguientes condiciones:
- �Promociona�, s� obtuvo en los cuatro ex�menes nota 7 o m�s.
- �Rinde examen final�, si obtuvo nota 4 o m�s en por lo menos tres ex�menes.
- �Recupera Parciales�, si obtuvo nota 4 o m�s en por lo menos uno de los ex�menes.
- �Recursa la materia�, si no aprob� ning�n examen parcial.



*/

#include <iostream>


using namespace std ;



int main() {

    int n1, n2, n3, n4 ;

	cout << "Ingrese la primer nota" << endl ;
	cin >> n1 ;
	cout << "Ingrese la segunda nota" << endl ;
	cin >> n2 ;
	cout << "Ingrese la tercer nota" << endl ;
    cin >> n3 ;
    cout << "Ingrese la cuarta nota" << endl ;
    cin >> n4 ;

    cout << endl ;
    cout << endl ;

    if (n1 >= 7 && n2 >= 7 && n3 >= 7 && n4 >= 7) {
        cout << "Promociona" << endl ;
    } else if (n1 >= 4 && n2 >= 4 && n3 >= 4 || n2 >= 4 && n3 >= 4 && n4 >= 4
                || n3 >= 4 && n4 >= 4 && n1 >= 4 || n1 >= 4 && n2 >= 4 && n4 >= 4) {
                cout << "Rinde Examen" ; } else if ( n1 >=4 || n2 >=4 || n4 >= 4 || n3 >=4) {
                cout << "Recupera Parciales" << endl ; } else { cout << "Recursa" << endl ;
                                                    }



	return 0 ;
 }
