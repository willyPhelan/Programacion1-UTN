/*20	Se define a un número entero como primo cuando tiene solamente dos divisores.
Ejemplo A: 2, 7, 11, 13 son números primos, ya que todos tienen solamente dos divisores.
Ejemplo B: 6 no es primo, pues tiene 4 divisores (1, 2, 3 y 6)
Ejemplo C: 9 no es primo, pues tiene 3 divisores (1, 3 y 9)

Hacer un programa para ingresar un número y luego informar con un cartel aclaratorio si el mismo es un número primo o es número no primo.

*/#include <iostream>


using namespace std ;



int main() {

    int num, i, cont=0 ;

	cout << "Ingrese un numero" << endl ;
	cin >> num ;

	for (i=1 ; i <= num ; i++){
        if(num % i == 0) {
            cont++ ;

        }

	}

	if(cont == 2) { cout << num <<" Es primo" << endl ;} else { cout << "No es primo" ;

	}


	return 0 ;
 }
