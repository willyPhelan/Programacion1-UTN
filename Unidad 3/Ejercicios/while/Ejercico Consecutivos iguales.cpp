/*16	Hacer un programa para ingresar una lista de n�meros que finaliza cuando se ingresan dos n�meros consecutivos iguales, y luego informar el m�ximo.
Cuando se ingresa el n�mero repetido el mismo debe ser descartado.
Ejemplo A: 5, 10, 20, 8, 25, 13, 35, -8, -5, 22, 22. Se listar� M�ximo 35.
En este caso, el segundo n�mero 22 no se analiza, solo sirve para finalizar el ingreso.
Ejemplo B: 5, 10, 20, 8, 55, 13, 55, -8, -5, 33, 33. Se listar� M�ximo 55.
En este caso, el segundo n�mero 33 no se analiza, solo sirve para finalizar el ingreso.
Ejemplo C: 5, 10, 20, 8, 55, 13, 55, -8, -5,  88, 88. Se listar� M�ximo 88.
En este caso, el segundo n�mero 88 no se analiza, solo sirve para finalizar el ingreso.

*/#include <iostream>


using namespace std ;


int main() {

    int num, num2, maximo=0 ;

	cout << "Ingrese un numero" << endl ; // 1 5 5
	cin >> num ;

	maximo = num ;

	cout << "Ingrese otro numero o ingrese el mismo numero que el anterior para salir" << endl ;
	cin >> num2 ;

	if (num == num2) {
       cout << "Numeros iguales, no hay maximo." << endl ;
	}

	if (num != num2 && num2 > maximo) {

    maximo = num2 ; }

	while(num != num2){

	num = num2 ;

    cout << "Ingrese otro numero o ingrese el mismo numero que el anterior para salir" << endl ;
	cin >> num2 ;

	if (num != num2 && num2 > maximo) {

    maximo = num2 ; }


	}

	cout << "Numero maximo: " << maximo << endl ;

	return 0 ;
 }
