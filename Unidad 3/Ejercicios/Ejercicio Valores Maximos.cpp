/*

31	Hacer un programa para ingresar 10 números, luego informar los 2 mayores valores ingresados, aclarando cual es el máximo y cuál es el segundo máximo descartando los números repetidos.

Ejemplo A: 10, 8,12, 78 ,55, 20, 12, 40, 31, 28 el resultado será 78 y 55.
Ejemplo B: -20, - 25, -3, -8, -50, -45, -20, -22, -15, -11 el resultado será -3 y -8.
Ejemplo C: 20, 20, 12, 9, 14, 14, 8, 8, 10, 3 el resultado será 20 y 14.

En el ejemplo C el valor 20 aparece dos veces, pero sólo se considera una vez.

*/#include <iostream>


using namespace std ;



int main() {

    int i, num, mayor_num=0, segundo_mayor=0  ;

    for(i = 1 ; i <= 10 ; i++){

        cout << "Ingresar un numero" << endl ;
        cin >> num ;

        if(i == 1){
            mayor_num = num ;} else if (num > mayor_num){
                segundo_mayor = mayor_num ;
                mayor_num = num ; }

                if(mayor_num == segundo_mayor){
                    segundo_mayor=num ;
                }

                if(num > segundo_mayor){
                    segundo_mayor=num ;
                }

    }

	 cout << endl << "Mayor: " << mayor_num << " segundo mayor: " << segundo_mayor << endl ;

	return 0 ;
 }
