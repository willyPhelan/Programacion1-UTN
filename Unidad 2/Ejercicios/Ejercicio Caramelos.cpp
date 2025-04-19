/*
22
Una fábrica de caramelos dispone de un presupuesto inicial para inaugurar su sucursal en Villa Brian Lara.
Se sabe que para producir caramelos tienen los siguientes costos:

Costo de alquiler de $10000
Costo por caramelo producido de $2.50
Costo por mantenimiento cada 100 caramelos de $5000

Dados el presupuesto inicial y la cantidad de caramelos a producir el primer mes, informar:
"El presupuesto es suficiente para cubrir los costos de $XXXX"
"El presupuesto no es suficiente, necesita un crédito de $XXXX"


*/#include <iostream>


using namespace std ;



int main() {

    int alquiler=10000, mantenimiento, cantidad_caramelos ;
    float presupuesto_inicial, costo_por_caramelo=2.50, credito, centena, subtotal, total, resto;

	cout << "Ingrese la cantidad de caramelos a producir" << endl ;
	cin >> cantidad_caramelos ;

	cout << "Ingrese el presupuesto inicial" << endl ;
	cin >> presupuesto_inicial ;

	if(cantidad_caramelos < 100) {
        total = (cantidad_caramelos * costo_por_caramelo) + alquiler ;
        if (presupuesto_inicial > total) {
            cout << "El presupuesto es suficiente para cubrir los costos de: $" << total << endl ;
        } else {
            credito = total - presupuesto_inicial ;
            cout << "El presupuesto no es suficiente, necesita un credito de: $" << credito << endl ;
            }
	}

	if(cantidad_caramelos >= 100) {

        subtotal = (cantidad_caramelos * costo_por_caramelo) + alquiler ;
        centena = (cantidad_caramelos / 100) ;
        resto = cantidad_caramelos % 100 ;
        mantenimiento = centena * 5000 ;

        total = subtotal + mantenimiento ;
        if (presupuesto_inicial > total) {
            cout << "El presupuesto es suficiente para cubrir los costos de: $" << total << endl ;
        } else {
            credito = total - presupuesto_inicial ;
            cout << "El presupuesto no es suficiente, necesita un credito de: $" << credito << endl ;
            }
	}

	return 0 ;
 }
