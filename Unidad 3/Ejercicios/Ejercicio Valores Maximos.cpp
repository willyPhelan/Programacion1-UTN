/*

31	Hacer un programa para ingresar 10 n�meros, luego informar los 2 mayores valores ingresados, aclarando cual es el m�ximo y cu�l es el segundo m�ximo descartando los n�meros repetidos.

Ejemplo A: 10, 8,12, 78 ,55, 20, 12, 40, 31, 28 el resultado ser� 78 y 55.
Ejemplo B: -20, - 25, -3, -8, -50, -45, -20, -22, -15, -11 el resultado ser� -3 y -8.
Ejemplo C: 20, 20, 12, 9, 14, 14, 8, 8, 10, 3 el resultado ser� 20 y 14.

En el ejemplo C el valor 20 aparece dos veces, pero s�lo se considera una vez.

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
