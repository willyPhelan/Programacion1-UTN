/*
8 Hacer un programa para ingresar una lista de n�meros que finaliza cuando se ingresa un cero, luego informar el m�ximo y la posici�n del m�ximo en la lista. En caso de �empates� considerar la primera aparici�n.
Ejemplo A: 5, -10, 20, 8, 25, 13, 35, -8, -5, 20, 0. Se listar� M�ximo 35 Posici�n 7. Ejemplo B: 5, -10, 20, 8, 25, 13, 55, -8, 55, 20, 0. Se listar� M�ximo 55 Posici�n 7.
Ejemplo C: -9, -10, -20, -3, -9, -13, -55, -18, -55, 0. Se listar� M�ximo -3 Posici�n 4.


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
