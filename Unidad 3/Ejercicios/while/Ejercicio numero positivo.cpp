/*
4	Hacer un programa para que el usuario ingrese un n�mero positivo y que luego se muestre por pantalla los n�meros entre el 1 y el n�mero ingresado por el usuario. Ejemplo.
Si el usuario ingresa 15, se mostrar�n los n�meros entre el 1 y el 15.


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
