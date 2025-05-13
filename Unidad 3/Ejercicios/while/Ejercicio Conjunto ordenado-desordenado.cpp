/*14
Hacer un programa para ingresar una lista de números que finaliza cuando se ingresa un cero, informar si todos están ordenados en forma creciente.
En caso de haber dos números “empatados” considerarlos como crecientes.
Por ejemplo si la lista fuera:
Ejemplo 1: -10, 1, 5, 7, 15, 18, 20, 23, 0 se emitirá un cartel: “Conjunto Ordenado”
Ejemplo 2: 10, 10, 15, 20, 25, 25, 28, 33, 0 se emitirá un cartel: “Conjunto Ordenado”
Ejemplo 3: 10, 1, 15, 7, -15, 18, 20, 23, 0 se emitirá un cartel: “Conjunto No Ordenado”

*/#include <iostream>


using namespace std ;



int main() {

    int num, primer_num ;
    bool ordenado = true ;

    cout << "Ingresar un numero" << endl ; //  -10, 1, 5, 7, 15, 18, 20, 23, 0
	cin >> num ;

	primer_num = num ;

	while( num != 0){

    cout << "Ingresar otro numero o [0] para finalizar" << endl ;
	cin >> num ;

	if(num < primer_num && num != 0) {
        ordenado = false ; }

    primer_num = num ;

	}

	 if(ordenado) {cout << endl << "Conjunto ordenado" << endl ;
    } else { cout << endl << "Conjunto no ordenado" << endl ; }


	return 0 ;
 }
