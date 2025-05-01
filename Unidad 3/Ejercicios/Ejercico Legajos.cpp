/*
25	Hacer un programa que permita ingresar el legajo y sueldo de 10 empleados y determine:
-	El legajo del empleado con mayor sueldo

*/#include <iostream>


using namespace std ;



int main() {

    int i, legajo, sueldo, sueldo_maximo, legajo_del_max ;

     for(i=1 ; i <= 10 ; i++){

        	cout << "Ingresar el numero de legajo" << endl ;
        	cin >>  legajo ;

        	cout << "Ingresar el sueldo" << endl ;
        	cin >>  sueldo ;

        	if(i == 1) {
                sueldo_maximo = sueldo ;
                legajo_del_max = legajo ;
        	} else if(sueldo > sueldo_maximo){
                sueldo_maximo = sueldo ;
                legajo_del_max = legajo ;}
        	}


    cout << "Numero de legajo del maximo sueldo: " << legajo_del_max << endl ;

	return 0 ;
 }
