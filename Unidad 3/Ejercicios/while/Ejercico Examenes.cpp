/*

24	Se dispone de la información de los exámenes rendidos por algunos estudiantes de la UTN FRGP. Por cada registro de examen se conoce:
-	Legajo del estudiante (entero)
-	Código de materia (entero)
-	Nota (float)

La finalización de la carga de datos se indica con un legajo de estudiante mayor a 30000.  Calcular e informar:
-	La nota promedio entre todos los estudiantes.
-	El legajo del estudiante con menor nota.
-	La cantidad de exámenes rendidos para la materia 10.
-	El porcentaje de aprobados y no aprobados.

NOTA: Un examen se considera aprobado con nota >= 6
NOTA: Si hay varios estudiantes con la menor nota. Informar el primero de ellos.

*/

#include <iostream>


using namespace std ;



int main() {

    int legajo=0, codigo_materia, carga=0, promedio, sumanotas=0, menor_nota, materia_10=0, legajo_menor_nota ;
    int aprobado=0, no_aprobado=0, porcentaje_apro, porcentaje_des ;
    bool hay_menor=false ;
    float nota ;

    while (legajo < 30000){

    // REGISTRO DE EXAMEN -----------------------------------------

	cout << "Ingrese el numero de legajo del estudiante: " << endl ;
    cin >> legajo ;

    cout << "Ingrese el numero el codigo de la materia: " << endl ;
    cin >> codigo_materia ;

    cout << "Ingresar la nota del alumno: " << endl ;
    cin >> nota ;

    carga ++ ;

    sumanotas += nota ;
    promedio = sumanotas / carga ;

    if(!hay_menor){
        menor_nota = nota ;
        legajo_menor_nota = legajo ;
        hay_menor = true ;
    }

    if(nota < menor_nota){
        menor_nota = nota ;
        legajo_menor_nota = legajo ;
    }

    if(codigo_materia == 10){
        materia_10++ ;
    }

    if(nota < 6){
        no_aprobado++ ;
    } else { aprobado++ ;}


    cout << "Carga nro: " << carga << " finalizada" << endl << endl  ; // 3 100


    }

    porcentaje_apro = (aprobado * 100) / carga ;
    porcentaje_des = (no_aprobado * 100) / carga ;

    cout << endl <<"Promedio sobre las notas de los alumnos: " << promedio << endl << endl  ;
    cout << endl <<"Legajo del alumno con menor nota: " << legajo_menor_nota << endl << endl  ;
    cout << endl <<"Cantidad de examenes de la materia codigo 10: " << materia_10 << endl << endl  ;
    cout << endl <<"Pocentaje de alumnos aprobados: %" << porcentaje_apro << endl << endl  ;
    cout << endl <<"Pocentaje de alumnos desaprobados: %" << porcentaje_des<< endl << endl  ;


	return 0 ;
 }
