/*
Hacer un programa que permita ingresar el sueldo de 10 empleados y determine:
-	El sueldo máximo.
-	El sueldo mínimo.
-	El sueldo promedio.
-	Cantidad de sueldos mayores a $50000

*/#include <iostream>


using namespace std ;



int main() {

    int i, num, mas_cincuenta=0, sueldo_maximo=0, sueldo_minimo=0, suma_sueldos=0, total_sueldos=0, promedio=0 ;

    for(i=1 ; i <= 10 ; i++){

        	cout << "Ingresar un numero" << endl ;
        	cin >> num ;

        	// para calcular el promedio, por cada vuelta del for acumulo el valor de num y lo divido por la cantidad de sueldos
        	suma_sueldos += num ;
        	total_sueldos ++ ;

        	if(num > 50000) {
                mas_cincuenta++ ;
        	}

        	if(i == 1){
              sueldo_maximo = num ;
        	} else if (num > sueldo_maximo) {
        	sueldo_maximo = num ;}

            if(i == 1) {
               sueldo_minimo = num ;
            } else if (num < sueldo_minimo) {
            sueldo_minimo = num ; }
    }

          promedio = suma_sueldos / total_sueldos ;


    cout << "Sueldo maximo: $" << sueldo_maximo << endl ;
    cout << "Sueldo minimo: $" << sueldo_minimo << endl ;
    cout << "Cantidad de sueldos mayores a $50000: " << mas_cincuenta << endl ;
    cout << "Sueldo promedio: $" << promedio << endl ;

	return 0 ;
 }
