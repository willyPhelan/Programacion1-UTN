/* Hacer un programa para que un comercio ingrese por teclado la recaudación en pesos para cada una de las cuatro semanas del mes.
El programa debe listar la recaudación promedio por semana y el porcentaje de recaudación por semana.
Ejemplo. Si se ingresa $1600, $1200, $4800 y $400 se listará como recaudación promedio $2000 y como porcentajes por semana: 20%, 15%, 60% y 5%. */


#include <iostream>


using namespace std ;



int main() {

    float recaudacion_semana_1, recaudacion_semana_2, recaudacion_semana_3, recaudacion_semana_4,
    promedio, total,
    porcentaje_recaudacion_1, porcentaje_recaudacion_2, porcentaje_recaudacion_3, porcentaje_recaudacion_4  ;

	cout << "Ingresar la recaudacion de la semana 1" << endl ;
	cin >> recaudacion_semana_1 ;

	cout << "Ingresar la recaudacion de la semana 2" << endl ;
	cin >> recaudacion_semana_2 ;

	cout << "Ingresar la recaudacion de la semana 3" << endl ;
	cin >> recaudacion_semana_3 ;

	cout << "Ingresar la recaudacion de la semana 4" << endl ;
	cin >> recaudacion_semana_4 ;

	total = recaudacion_semana_1 + recaudacion_semana_2 + recaudacion_semana_3 + recaudacion_semana_4 ;

	promedio =  total / 4 ;

	porcentaje_recaudacion_1 =  (recaudacion_semana_1 / total) * 100 ;
	porcentaje_recaudacion_2 =  (recaudacion_semana_2 / total) * 100 ;
	porcentaje_recaudacion_3 =  (recaudacion_semana_3 / total) * 100 ;
	porcentaje_recaudacion_4 =  (recaudacion_semana_4 / total) * 100 ;

    cout << "El total recaudado es: $" << total << endl ;
    cout << "El promedio de lo recaudado es: $" << promedio << endl ;

    cout << "El porcentaje de lo recaudado de la semana 1 es: %" << porcentaje_recaudacion_1 << endl ;
    cout << "El porcentaje de lo recaudado de la semana 2 es: %" << porcentaje_recaudacion_2 << endl ;
    cout << "El porcentaje de lo recaudado de la semana 3 es: %" << porcentaje_recaudacion_3 << endl ;
    cout << "El porcentaje de lo recaudado de la semana 4 es: %" << porcentaje_recaudacion_4 << endl ;



	return 0 ;
 }
