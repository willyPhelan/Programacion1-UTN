/*
16
Hacer un programa para ingresar por teclado las cuatro notas de los exámenes obtenidas por un alumno y luego emitir uno solo de los cartel de acuerdo a las siguientes condiciones:
- “Promociona”, sí obtuvo en los cuatro exámenes nota 7 o más.
- “Rinde examen final”, si obtuvo nota 4 o más en por lo menos tres exámenes.
- “Recupera Parciales”, si obtuvo nota 4 o más en por lo menos uno de los exámenes.
- “Recursa la materia”, si no aprobó ningún examen parcial.



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
