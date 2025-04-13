/*
14
Hacer un programa para ingresar por teclado la fecha de nacimiento de una persona, ingresando día, mes y año como 3 datos individuales.
Luego ingresar la fecha actual ingresando día, mes y año como 3 datos individuales. Calcular luego la edad en años de esa persona y listar por pantalla.

Ejemplo 1. Si se ingresa como fecha de nacimiento: 3/12/2000 y la fecha actual es 26/2/2019 la edad de esa persona es 18 ya que los 19 recién los cumple en diciembre.
Ejemplo 2. Si se ingresa como fecha de nacimiento: 3/1/2000 y la fecha actual es 26/2/2019 la edad de esa persona es 19.
Ejemplo 3. Si se ingresa como fecha de nacimiento: 28/2/2000 y la fecha actual es 26/2/2019 la edad de esa persona es 18 ya que le faltan 2 días para cumplir los 19 años.

*/


#include <iostream>


using namespace std ;

    int main(){


    int dia, mes, ano, dActual, mActual, aActual, edad_en_anos, edad_en_meses, edad_en_dias  ;


	cout << "Ingrese el dia en que nacio" << endl ;
	cin >> dia ;


	cout << "Ingrese el mes en que nacio" << endl ;
	cin >> mes ;

	cout << "Ingrese el anio en que nacio - 4 Digitos " << endl ;
	cin >> ano ;

	cout << endl ;


    cout << "Ingrese que dia es hoy:" << endl ;
	cin >> dActual ;

	cout << "Ingrese el mes en estamos actualmente" << endl ;
	cin >> mActual ;

	cout << "Ingrese el ano (4 digitos)" << endl ;
	cin >> aActual;

    edad_en_anos = aActual - ano ;


    if (mActual < mes || (mActual == mes && dActual < dia)) {
        edad_en_anos--;}






    cout << "Usted tiene: "<< edad_en_anos << " anos" <<endl ;



	return 0 ;
 }
