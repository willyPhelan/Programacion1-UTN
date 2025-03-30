/* 15
La amplitud térmica es la diferencia entre la temperatura máxima y la temperatura mínima en una zona y tiempo determinado.
Dada la temperatura máxima y la temperatura mínima de San Fernando de ayer, calcular y mostrar la amplitud térmica.
NOTA: El usuario ingresará como temperatura máxima un valor mayor o igual al de la temperatura mínima.
*/

#include <iostream>


using namespace std ;



int main() {

    int temp_max, temp_min, amplitud ;

	cout << "Ingresar temperatura maxima" << endl ;
	cin >> temp_max ;

	cout << "Ingresar temperatura mainima" << endl ;
	cin >> temp_min ;

	amplitud = temp_max - temp_min ;

	cout << "La amplitud termica es de: " << amplitud << " grados" << endl ;



	return 0 ;
 }
