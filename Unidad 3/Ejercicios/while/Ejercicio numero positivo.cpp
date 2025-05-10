/*
4	Hacer un programa para que el usuario ingrese un número positivo y que luego se muestre por pantalla los números entre el 1 y el número ingresado por el usuario. Ejemplo.
Si el usuario ingresa 15, se mostrarán los números entre el 1 y el 15.


*/#include <iostream>


using namespace std ;



int main() {

    int num, cont=2 ;

	cout << "Ingrese un num" << endl ;
	cin >> num ;

	while(cont < num){

      cout << cont << " " ;
      cont++ ; }

	return 0 ;
 }
