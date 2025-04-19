/*
20
Hacer un programa en el que se ingrese la edad y altura de 5 personas. Luego, calcular e informar:
La cantidad de personas mayores a 30 años que midan más de 1.8 metros.
El promedio de altura de las personas mayores a 30 años.
La cantidad de personas con altura entre 1.7 y 1.8 (ambos inclusive)
La cantidad de personas cuya edad sea de 20, 30 o 40 años.



*/

#include <iostream>


using namespace std ;



int main() {

    int edad1, edad2, edad3, edad4, edad5, mas30=0, alturaMedia=0, veinteTreintaCuarenta=0 ;
    float altura1, altura2, altura3, altura4, altura5, sumaAlturas, promedioMas30=0 ;

	cout << "Ingrese la edad de la persona 1" << endl ;
	cin >> edad1 ;

	cout << "Ingrese la altura de la persona 1" << endl ;
	cin >> altura1 ;

	cout << "Ingrese la edad de la persona 2" << endl ;
	cin >> edad2 ;

	cout << "Ingrese la altura de la persona 2" << endl ;
	cin >> altura2 ;

	cout << "Ingrese la edad de la persona 3" << endl ;
	cin >> edad3 ;

	cout << "Ingrese la altura de la persona 3" << endl ;
	cin >> altura3 ;

	cout << "Ingrese la edad de la persona 4" << endl ;
	cin >> edad4 ;

	cout << "Ingrese la altura de la persona 4" << endl ;
	cin >> altura4 ;

	cout << "Ingrese la edad de la persona 5" << endl ;
	cin >> edad5 ;

	cout << "Ingrese la altura de la persona 5" << endl ;
	cin >> altura5 ;

	if (edad1 > 30 && altura1 > 1.84) {
        mas30++ ;
        sumaAlturas = altura1 ;}

    if (edad2 > 30 && altura2 > 1.84) {
        mas30++ ;
        sumaAlturas = sumaAlturas + altura2 ;}

    if(edad3 > 30 && altura3 > 1.84) {
        mas30++ ;
        sumaAlturas = sumaAlturas + altura3 ;}

    if(edad4 > 30 && altura4 > 1.84) {
        mas30++ ;
        sumaAlturas = sumaAlturas + altura4 ; }

    if(edad5 > 30 && altura5 > 1.84){
            mas30++ ;
            sumaAlturas = sumaAlturas + altura5 ;}

    promedioMas30 = sumaAlturas / mas30 ;

    if(altura1 >= 1.70 && altura1 <= 1.80 ) {
       alturaMedia++ ;
    }

    if(altura2 >= 1.70 && altura2 <= 1.80 ) {
       alturaMedia++ ;
    }

    if(altura3 >= 1.70 && altura3 <= 1.80 ) {
       alturaMedia++ ;
    }

    if(altura4 >= 1.70 && altura4 <= 1.80 ) {
       alturaMedia++ ;
    }

    if(altura5 >= 1.70 && altura5 <= 1.80 ) {
       alturaMedia++ ;
    }

    if(edad1 = 20 || edad1 == 30 || edad1 == 40) {
        veinteTreintaCuarenta++ ;
    }

    if(edad2 = 20 || edad2 == 30 || edad2 == 40) {
        veinteTreintaCuarenta++ ;
    }
    if(edad3 = 20 || edad3 == 30 || edad3 == 40) {
        veinteTreintaCuarenta++ ;
    }

    if(edad4 = 20 || edad4 == 30 || edad4 == 40) {
        veinteTreintaCuarenta++ ;
    }

    if(edad5 = 20 || edad5 == 30 || edad5 == 40) {
        veinteTreintaCuarenta++ ;
    }




    cout << "La cantidad de personas mayores de 30 que superan los 1,8 cm son: " << mas30 << endl ;
    cout << endl ;
    cout << "El promedio de altura de las personas mayores de 30 que superan los 1,8 cm es de: " << promedioMas30 << " cms" << endl ;
    cout << endl ;
    cout << "Cantidad de personas mayores que miden entre 1.7 y 1,8 cms: " << alturaMedia << endl ;
    cout << endl ;
    cout << "Cantidad de personas mayores que tienen 20, 30 y 40 anios: " << veinteTreintaCuarenta << endl ;




	return 0 ;
 }
