/*
27	Una estaci�n meteorol�gica registr� una muestra clim�tica de los �ltimos 15 d�as. Por cada d�a registr�:
-	N�mero de d�a (entero)
-	Temperatura (float)
-	Mil�metros de lluvia (float)
-	Visibilidad en km (float)

Hay un registro por cada d�a. La informaci�n se encuentra ordenada por d�a. Se pide calcular e informar:
-	El n�mero del d�a que se haya registrado la temperatura m�xima.
-	La amplitud t�rmica de todo el per�odo.
-	La cantidad de d�as con neblina.
-	Mostrar "Quincena lluviosa" si hubo m�s d�as de lluvia que d�as sin lluvia. Mostrar "Quincena h�meda" si llovi� en al menos un tercio de los d�as. De lo contrario mostrar "Quincena seca".

NOTA: La amplitud t�rmica es la diferencia entre la temperatura m�xima y la temperatura m�nima.
NOTA: Se considera neblina a una visibilidad menor a 2 km.
*/

#include <iostream>


using namespace std ;



int main() {

    int i, dia=0, dia_alto=0, dia_bajo=0, neblina=0, dia_de_lluvia=0, dia_lindo=0 ;
    float temperatura, milimetros_de_lluvia, visibilidad, temp_mas_alta, temp_minima, amplitud ;

    for (i = 1 ; i <= 15 ; i++){

    dia++ ;

    cout << "Ingrese la temperatura" << endl ;
    cin >> temperatura ;

    cout << "Ingrese los milimetros llovidos" << endl ;
    cin >> milimetros_de_lluvia ;

    cout << "Ingrese la visiblilidad en Kms" << endl ;
    cin >> visibilidad ;

    if(dia == 1){
        temp_mas_alta = temperatura ;
        dia_alto = i ;
    } else if (temperatura > temp_mas_alta){
        temp_mas_alta = temperatura ;
        dia_alto = i ;}

    if(dia == 1) {
        temp_minima = temperatura ;
        dia_bajo = i ;
    } else if (temperatura < temp_minima) {
        temp_minima = temperatura ;
        dia_bajo = i ; }


    amplitud = temp_mas_alta - temp_minima ;

    if (visibilidad < 2) {
        neblina++ ;
    }

    if(milimetros_de_lluvia == 0){
        dia_lindo++ ;
    } else {
        dia_de_lluvia++ ; }

    }

    if(dia_de_lluvia > dia_lindo){
        cout << "Quincena lluviosa" << endl ;
    } else if (dia_de_lluvia >= 5){
        cout << "Quincena humeda" << endl ;}
        else { cout << "Quincena seca" << endl ;}

    cout << "La temperatura mas alta fue: " << temp_mas_alta << " del dia: " << dia_alto << endl ;
    cout << "La temperatura mas baja fue: " << temp_minima << " del dia: " << dia_bajo << endl ;
    cout << "Amplitud termica: " << amplitud << " grados" << endl ;
    cout << "Cantidad de dias con neblina: " << neblina << endl ;


	return 0 ;
 }
