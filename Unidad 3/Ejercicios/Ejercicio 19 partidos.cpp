/*
29	Se dispone de la información de los últimos 19 partidos del futbolista Diego Armando Laradona. Por cada partido se registró:
-	Número de partido
-	Minutos jugados
-	Tarjetas amarillas
-	Tarjetas rojas
-	Goles

Existe un registro para cada partido. Los mismos se encuentran ordenados por número de partido. Se pide calcular e informar:
A)	La cantidad de partidos que no jugó (partidos con minutos igual a cero)
B)	La cantidad de partidos que jugó por completo (minutos >= 90)
C)	El promedio de tarjetas recibidas por partido.
D)	El número de partido en el que haya convertido mayor cantidad de goles. Indicar también los goles convertidos.
E)	La mejor racha de partidos convirtiendo goles. Se debe mostrar la mayor cantidad de partidos consecutivos en los que haya convertido.


*/#include <iostream>


using namespace std ;



int main() {

    int i, partidos, minutos_jugados, tarjetas_amarillas, tarjetas_rojas, goles, no_jugo=0, partido_completo=0, mejor_partido=0, tarjetas=0, total_partidos=0, mas_goles=0 ;
    int mejor_racha=0, racha_actual=0 ;
    float promedio=0 ;
    bool hay_gol=false ;

	for(i = 1 ; i <= 19 ; i++){

        cout << "Ingrese el numero de partido:" << endl ;
        cin >> partidos ;

        cout << "Ingrese el numero de minutos jugados:" << endl ;
        cin >> minutos_jugados ;

        cout << "Ingrese el numero de tarjetas amarillas:" << endl ;
        cin >> tarjetas_amarillas ;

        cout << "Ingrese el numero de tarjetas rojas:" << endl ;
        cin >> tarjetas_rojas ;

        cout << "Ingrese el numero de goles:" << endl ;
        cin >> goles ;

        total_partidos++ ;

        tarjetas += tarjetas_amarillas + tarjetas_rojas ;

        if(minutos_jugados == 0) {
            no_jugo++ ;
        }

        if(minutos_jugados >= 90){
            partido_completo++ ;
        }


        if(hay_gol == false) {
            if(goles != 0){
                    mas_goles = goles ;
                    mejor_partido = partidos ;
                    hay_gol= true ;
                    }}

        if(goles > mas_goles){
            mas_goles = goles ;
            mejor_partido = partidos ; }

        if(goles > 0){
            racha_actual++ ;
            if(racha_actual > mejor_racha){
                mejor_racha = racha_actual ;
            } }else { racha_actual = 0 ;} // se corta la racha


            }

        promedio = tarjetas / total_partidos ;

        if(no_jugo > 0){
        cout << endl << "No jugo " << no_jugo << " partido/s" << endl ;}

     cout << "Jugo " << partido_completo << " partido/s completo/s" << endl ;
     cout << "Tarjetas totales: " << tarjetas << endl ;
     cout << "Promedio de tarjetas por partido: " << promedio << endl ;
     cout << "Numero de partido donde mas convirtio: " << mejor_partido << " Goles: " << mas_goles << endl ;
     cout << "Mejor racha de partidos convirtiendo goles: " << mejor_racha << " partidos consecutivos" << endl ;



	return 0 ;
 }
