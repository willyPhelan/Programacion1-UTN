/*
Una Universidad dispone de diez aulas para acomodar a una cantidad de asistentes a una charla. Cada aula tiene una capacidad total de 60 personas.
Se necesita un programa que solicite la cantidad de asistentes a la charla y  determine la cantidad total de aulas necesarias para acomodarlos a todos.

Por ejemplo:
Si los asistentes son 120 se necesitar�n 2 aulas.
Si los asistentes son 123 se necesitar�n 3 aulas.
Si los asistentes son 40 se necesitar� 1 aula.

DESAF�O: No utilizar el operador de divisi�n ni el de resto en el algoritmo.


*/

#include <iostream>


using namespace std ;



int main() {

    int num, aula=1 ;

	cout << "Ingrese el numero de asistentes a la charla" << endl ;
	cin >> num ;

	if(num > 60){
        aula++ ;
	}

	if (num > 120){
            aula++ ;}

	cout << "Se necesitan: " << aula << " aula/s" << endl ;

	return 0 ;
 }
