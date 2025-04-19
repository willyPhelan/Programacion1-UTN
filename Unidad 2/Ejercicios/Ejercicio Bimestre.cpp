/*
23
Hacer un programa para ingresar un número de mes y listar por pantalla a qué bimestre corresponde ese mes. Tener en cuenta esta lista:
Mes 1 y 2. Bimestre 1. Mes 3 y 4. Bimestre 2. Mes 5 y 6. Bimestre 3.
Mes 7 y 8. Bimestre 4. Mes 9 y 10. Bimestre 5. Mes 11 y 12. Bimestre 6.

Resolver este ejercicio utilizando la menor cantidad de salidas de IF posibles, de forma tal que si en un hipotético caso, hubiera años de 200 meses su diagrama no deba ser modificado en tal situación.

Recordar también que la división directa con el operador /  genera un resultado con fracción. Por ejemplo si mes=7 y usted calcula bimestre=7/2 el resultado que obtendrá es bimestre= 3.5, lo cual es incorrecto.


*/#include <iostream>


using namespace std ;



int main() {

    int numero_de_mes, bimestres=0, cantidad_de_meses=0  ;


    cout << "Ingrese la cantidad de meses del anio" << endl ;
	cin >> cantidad_de_meses ;

	cout << "Ingrese el numero de mes" << endl ;
	cin >> numero_de_mes ;

	bimestres =  (numero_de_mes + 1) / 2  ; // (cantidad_de_meses / 2) + (cantidad_de_meses % 2)



	cout << "El mes ingresado corresponde al bimestre " << bimestres << endl ;

	/*if(numero_de_mes < 3) {
       cout << "El mes ingresado corresponde al primer bimestre" << endl ;
	}

	if(numero_de_mes > 2 && numero_de_mes < 5 ) {
       cout << "El mes ingresado corresponde al segundo bimestre" << endl ;
	}

	if(numero_de_mes > 4 && numero_de_mes < 7 ) {
       cout << "El mes ingresado corresponde al tercer bimestre" << endl ;
	}

	if(numero_de_mes > 6 && numero_de_mes < 9 ) {
       cout << "El mes ingresado corresponde al cuarto bimestre" << endl ;
	}

	if(numero_de_mes > 8 && numero_de_mes < 11 ) {
       cout << "El mes ingresado corresponde al quinto bimestre" << endl ;
	}

	if(numero_de_mes > 10 && numero_de_mes < 13 ) {
       cout << "El mes ingresado corresponde al sexto bimestre" << endl ;
	}

*/

	return 0 ;
 }
