/*
El festival Larapalooza, el mejor festival musical del mundo, brindará una serie de conciertos distribuidos en tres jornadas distintas.
Se desea un programa que registre los artistas que participarán. Por cada artista se registró:
-	Número de artista (entero)
-	Integrantes (entero)
-	Jornada (1, 2 o 3)
-	Duración del show en minutos (entero)

La información no se encuentra ordenada bajo ningún criterio. La carga de datos se finaliza con un número de artista igual a cero.
Calcular e informar:
-	El número de artista que realice el show más largo de la jornada 1.
-	La cantidad de solistas (artistas de 1 integrante) que participaron en cada una de las jornadas. (se muestran tres resultados).
-	La jornada más extensa (en minutos totales).
-	Duración promedio de show por artista (se muestra un resultado).

*/#include <iostream>


using namespace std ;



int main() {

    int nro_ar, integrantes, duracion, jornada, duracion_larga=0, artista_largo, jornada_larga, acudura1=0 ;
    int solistas1=0, solistas2=0, solistas3=0, max_duracion, acudura2=0, acudura3=0, cont_ar=0  ;
    float promedio=0, total=0 ;
    bool hay_show=false, hay_max=false ;

    nro_ar = -1 ;

    while(nro_ar != 0){


     cout << endl << "Ingrese el numero de artista o ingrese [0] para finalizar" << endl ;
     cin >> nro_ar ;

     if(nro_ar != 0){

     cout << "Ingrese la cantidad de integrantes" << endl ;
     cin >> integrantes ;

     cout << "Ingrese la jornada(1, 2 o 3)" << endl ;
     cin >> jornada ;

     cout << "Ingrese la duracion del show (expresada en minutos) " << endl ;
     cin >> duracion ;

     cont_ar++ ;
     total += duracion ;

     if(jornada == 1){ // 1000 0
            if(hay_show == false){
                    duracion_larga = duracion ;
                    artista_largo = nro_ar ;
                    hay_show = true ; } else if (duracion > duracion_larga){
                                                                duracion_larga = duracion ;
                                                                artista_largo = nro_ar ;}}



    if (jornada == 1 && integrantes == 1) { solistas1++ ; }
    if (jornada == 2 && integrantes == 1) { solistas2++ ; }
    if (jornada == 3 && integrantes == 1) { solistas3++ ; }



    if(jornada == 1){
        acudura1 += duracion ;
    }

    if(jornada == 2){
        acudura2 += duracion ;
    }

     if(jornada == 3){
        acudura3 += duracion ;
    }




}}

    if(acudura1 >= acudura2 && acudura1 >= acudura3) {
        max_duracion = acudura1;
        jornada_larga = 1;
    }
    else if(acudura2 >= acudura3) {
        max_duracion = acudura2;
        jornada_larga = 2;
    }
    else {
        max_duracion = acudura3;
        jornada_larga = 3;
    }

        promedio = total / cont_ar ;

    cout << endl << "El numero de artista en la jornada 1 con el show de mayor duracion fue el numero: " << artista_largo << endl ;

    cout << endl << "Cantidad de solistas en la jornada 1: " << solistas1 << endl ;
    cout << endl << "Cantidad de solistas en la jornada 2: " << solistas2 << endl ;
    cout << endl << "Cantidad de solistas en la jornada 3: " << solistas3 << endl ;

    cout << endl << "Jornada mas extensa: " << jornada_larga << " con una duracion de: " << max_duracion << " minutos" << endl ;

    cout << endl << "Duracion promedio (en minutos) de show por artista: " << promedio << endl ;



	return 0 ;
 }
