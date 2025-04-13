/*12
Hacer un programa para ingresar tres números diferentes y determinar e informar el número del medio.
Sugerimos probar CADA UNA de las siguientes 6 combinaciones.
N1=8, N2=6, N3=10. Valor del medio: 8. N1=8, N2=10, N3=6. Valor del medio: 8
N1=6, N2=8, N3=10. Valor del medio: 8. N1=10, N2=8, N3=6. Valor del medio: 8
N1=6, N2=10, N3=8. Valor del medio: 8. N1=10, N2=6, N3=8. Valor del medio: 8




*/#include <iostream>


using namespace std ;



int main() {

    int num1, num2, num3 ;

    cout << "Ingrese un numero" << endl ;
	cin >> num1 ;

	cout << "Ingrese otro numero" << endl ;
	cin >> num2 ;

	cout << "Ingrese otro numero" << endl ;
	cin >> num3 ;

	if(num1 > num2 && num1 < num3) {
        cout << "El numero del medio es: "<< num1 << endl ;
	}

	if(num2 > num1 && num2 < num3) {
        cout << "El numero del medio es: "<< num2 << endl ;
	}

	if(num3 > num1 && num3 < num2) {
        cout << "El numero del medio es: "<< num3 << endl ;
	}

	if(num1 < num2 && num1 > num3) {
        cout << "El numero del medio es: "<< num1 << endl ;
	}

	if(num2 < num1 && num2 > num3) {
        cout << "El numero del medio es: "<< num2 << endl ;
	}

	if(num3 < num1 && num3 > num2) {
        cout << "El numero del medio es: "<< num3 << endl ;
	}




	return 0 ;
 }
