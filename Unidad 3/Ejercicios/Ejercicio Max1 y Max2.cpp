/*
16	Hacer un programa para ingresar 5 números, luego informar los 2 mayores valores ingresados, aclarando cual es el máximo y cuál el que le sigue.
Ejemplo A: 10, 8, 12, 14, 3 el resultado será 14 y 12.
Ejemplo B: 14, 8, 12, 14 ,3 el resultado será 14 y 14.
Ejemplo C: -4, -8, -12, -20, -10 el resultado será -4 y -8
Ejemplo D: 100, 20, 5, -15, 70, el resultado será 100 y 70.
Ejemplo E: -100, -20, -5, 15, -70, el resultado será 15 y -5.

Se recomienda probar el diagrama que vaya a desarrollar con todos los ejemplos, en particular el Ejemplo D, en el cual el máximo de la lista aparece en el primer lugar y que si no se tiene precaución puede llevar a resultados como 100 como máximo y 100 como segundo máximo. ¡ESO ES INCORRECTO! El resultado debe ser 100 y 70.


*/#include <iostream>


using namespace std ;



int main() {

    int i, num, maximo, maximo2;



        cout << "Ingresar un numero" << endl ;
        cin >> num ;
        maximo = num ;
        maximo2 = num ;

    for (i = 1 ; i <=4 ; i++){

        cout << "Ingresar otro numero" << endl ;
        cin >> num ;

        if(num > maximo){
            maximo2  = maximo ;// maximo2 es el antiguo valor maximo que ahora es el segundo valor max
            maximo = num ;
        } else if(num > maximo2 || maximo2 == maximo){
            maximo2 = num ;
        }

      }


        cout << "Numero maximo: " << maximo << endl ;
        cout << "Segundo numero maximo: " << maximo2 << endl ;


	return 0 ;
 }
