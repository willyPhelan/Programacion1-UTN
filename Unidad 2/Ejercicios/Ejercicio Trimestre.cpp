/*
24	Hacer un programa para ingresar un n�mero de mes y listar por pantalla a qu� trimestre corresponde ese mes. Tener en cuenta esta lista:
Mes 1, 2 y 3. Trimestre 1. Mes 4, 5 y 6. Trimestre 2.
Mes 7, 8 y 9. Trimestre 3. Mes 10, 11 y 12. Trimestre 4.

Resolver este ejercicio utilizando la menor cantidad de salidas de IF posibles, de forma tal que si en un hipot�tico caso, hubiera a�os de 200 meses su diagrama no deba ser modificado en tal situaci�n.

Recordar tambi�n que la divisi�n directa con el operador / genera un resultado con fracci�n. Por ejemplo si mes=7 y usted calcula trimestre=7/3 el resultado que obtendr� es trimestre= 2.33, lo cual es incorrecto.


*/

#include <iostream>


using namespace std ;



int main() {

	int numero_de_mes, trimestres=0 ;


	cout << "Ingrese el numero de mes" << endl ;
	cin >> numero_de_mes ;

	trimestres =  (numero_de_mes + 2) / 3  ;

	cout << "Trimestre " << trimestres << endl ;

	return 0 ;
 }
