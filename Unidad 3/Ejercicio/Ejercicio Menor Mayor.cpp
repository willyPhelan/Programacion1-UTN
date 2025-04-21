/*5	Hacer un programa para que el usuario ingrese dos números y luego el programa muestre por pantalla los números entre el menor y el mayor de ambos.
Ejemplo, si el usuario ingresa 3 y 15, se mostrarán los números entre el 3 y el 15 y si el usuario ingresa 25 y 8, se mostrarán los números entre el 8 y el 25.



*/#include <iostream>


using namespace std ;



int main() {

    int i, num, num2 ;

	cout << "Ingrese un numero" << endl ;
	cin >> num ;

	cout << "Ingrese otro numero" << endl ;
	cin >> num2 ;

    if(num < num2){

        for ( i = num + 1  ; i < num2 ; i++ ) {
        cout << endl ;
        cout << i << endl ; }} else {
	    for ( i = num2 + 1  ; i < num ; i++ ) {
        cout << endl ;
        cout << i << endl ;
	}}




	return 0 ;
 }
