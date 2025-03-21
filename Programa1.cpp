///Ejercicio:suma de dos números
///Autor:DEK
///Fecha:21-03-2025
///Comentario:primer programa del curso 2025 C1 viernes

# include<iostream>


using namespace std;

///= operador es el operador de ASIGNACION
/// int es un tipo de dato. Permite almacenar números enteros
///float para número reales (con coma)
///char permite almacenar 1 caracter
///bool permite almacenar uno de dos valores: verdadero o falso

int main(){
    int n1, n2, suma;
    cout<<"INGRESE UN NUMERO ";
    cin>>n1;
    cout<<"INGRESE UN NUMERO ";
    cin>>n2;
    cout<<"LA SUMA ES ";
    suma=n1+n2;
    ///n1+n2=suma; no es como en la matemática
    cout<<suma<<endl;
	cout<<endl;
	system("pause");
	return 0;
}
