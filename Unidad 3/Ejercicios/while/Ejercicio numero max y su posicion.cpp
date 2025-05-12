/*
8 Hacer un programa para ingresar una lista de números que finaliza cuando se ingresa un cero, luego informar el máximo y la posición del máximo en la lista. En caso de “empates” considerar la primera aparición.
Ejemplo A: 5, -10, 20, 8, 25, 13, 35, -8, -5, 20, 0. Se listará Máximo 35 Posición 7. Ejemplo B: 5, -10, 20, 8, 25, 13, 55, -8, 55, 20, 0. Se listará Máximo 55 Posición 7.
Ejemplo C: -9, -10, -20, -3, -9, -13, -55, -18, -55, 0. Se listará Máximo -3 Posición 4.


*/#include <iostream>


using namespace std ;


int main() {

    int num, mayor=0, pos=0, posMayor  ;

    cout << "Ingrese un numero" << endl ;
	cin >> num ;

	mayor = num ;
	pos = 1 ;

	while (num != 0){

    cout << "Ingrese otro numero y 0 para finalizar" << endl ;
	cin >> num ;
	pos++ ;

	if(num > mayor){
        mayor = num ;
        posMayor = pos ;

	}


	}

	 cout << "Mayor numero de la Lista: " << mayor << " Posicion: " << posMayor <<  endl ;


	return 0 ;
 }
