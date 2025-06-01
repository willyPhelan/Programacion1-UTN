/*
Hacer un programa para ingresar los consumos de electricidad de los clientes de una empresa. Cada registro contiene los siguientes datos:
- Número de cliente
- Localidad del cliente (1, 2 o 3)
- Kilovatios consumidos

El lote finaliza con un registro con número de cliente igual a cero. El precio es escalonado según la siguiente escala:
$ 10 por kilovatio por los primeros 100 kilovatios de consumo.
$ 12 por kilovatio por el consumo de 101 a 200 kilovatios.
$ 15 por kilovatio por el consumo de 201 kilovatios en adelante.

Además hay un cargo fijo de $ 100.
Ejemplo A: Consumo de 55 kilovatios, se calculará: $ 10 x 55 + $ 100= $ 650 Ejemplo B: Consumo de 125 kilovatios, se calculará: $ 10 x 100 + $ 12 x 25 + $ 100=$ 1400
Ejemplo C: Consumo de 250 kilovatios, se calculará: $10 x 100+ $12 x 100 + $15 x 50 + $100= $ 3050
Ejemplo D: Consumo de 0 kilovatios, se calculará: $ 10 x 0 + $ 100= $ 100

Se pide determinar e informar:
a) El número de cliente que tuvo la mayor cantidad de Kilovatios consumidos para cada una de las 3 localidades. Se listan 3 resultados, uno para cada una de las 3 localidades
b) El total de recaudación para cada una de las 3 localidades. Se listan 3 resultados, uno para cada una de las 3 localidades
c) El número de cliente que tuvo la menor cantidad de Kilovatios consumidos excluyendo a los clientes que tuvieron Kilovatios consumidos con valor cero. Se lista 1 resultado.


*/

#include <iostream>


using namespace std ;



int main() {

    int nro_cliente=-1, localidad, kv, precio=0, resta_kv, cargo_fijo = 100 ;
    bool cliente1 = false, cliente2 = false, cliente3 = false ;
    int max_cliente1=0, max_cliente2=0, max_cliente3=0, monto_max1=0, monto_max2=0, monto_max3=0 ;
    int recaudado1 = 0, recaudado2 = 0, recaudado3 = 0 ;
    int menor_cantidad = -1, menor_cliente ;
    bool primer_menor = false ;

    cout << "Ingrese un numero de cliente" << endl ;
            cin >> nro_cliente ;

    while(nro_cliente != 0){

            cout << "Ingrese la localidad (1, 2 o 3)" << endl ;
            cin >> localidad ;

            cout << "Ingrese los Kilovatios consumidos" << endl ;
            cin >>  kv ;

        if(kv <= 100) {
                precio = kv * 10 + cargo_fijo ;} else if (kv > 100 && kv < 201){
                    resta_kv = kv - 100 ;
                    precio = (100 * 10) + (resta_kv * 12) + cargo_fijo ; } else if (kv > 200 ){
                                                                       resta_kv = kv - 200 ;
                                                                       precio = (100 * 10) + (100 * 12) + (resta_kv * 15) + cargo_fijo ; }




          if(localidad == 1 && cliente1 == false){
                max_cliente1 = nro_cliente ;
                monto_max1 = kv ;
                cliente1 = true ;
            } else if (localidad == 1 && kv > monto_max1) {
                monto_max1 = kv ;
                max_cliente1 = nro_cliente ; }

        if(localidad == 1){
            recaudado1 += precio ;
        }

          if(localidad == 2 && cliente2 == false){
                max_cliente2 = nro_cliente ;
                monto_max2 = kv ;
                cliente2 = true ;
            } else if (localidad == 2 && kv > monto_max2) {
                monto_max2 = kv ;
                max_cliente2 = nro_cliente ; }

        if(localidad == 2){
            recaudado2 += precio ;
        }

        if(localidad == 3 && cliente3 == false){
                max_cliente3 = nro_cliente ;
                monto_max3 = kv ;
                cliente3 = true ;
            } else if (localidad == 3 && kv > monto_max3) {
                monto_max3 = kv ;
                max_cliente3 = nro_cliente ; }

        if(localidad == 3){
            recaudado3 += precio ;
        }

        if(kv > 0 && primer_menor == false) {
            menor_cantidad = kv ;
            menor_cliente = nro_cliente ;
            primer_menor = true ;
        } else if (kv > 0 && kv < menor_cantidad){
            menor_cantidad = kv ;
            menor_cliente = nro_cliente ; }




            cout << endl << "El precio por los Kilovatios consumidos es de: $" << precio << endl ;

            cout << endl << "----------------------------------" << endl ;

            cout << "Ingrese otro numero de cliente" << endl ;
            cin >> nro_cliente ;


             }

             cout << endl << "----------------------------------" << endl ;
             cout << "El cliente que mas Kilovatios consumio en la localidad 1 es: " << max_cliente1 << endl ;
             cout << "El cliente que mas Kilovatios consumio en la localidad 2 es: " << max_cliente2 << endl ;
             cout << "El cliente que mas Kilovatios consumio en la localidad 3 es: " << max_cliente3 << endl ;

             cout << endl << "----------------------------------" << endl ;
             cout << endl << "----------------------------------" << endl ;

             cout << "Total recaudado en la localidad 1 $: " << recaudado1 << endl ;
             cout << "Total recaudado en la localidad 2 $: " << recaudado2 << endl ;
             cout << "Total recaudado en la localidad 3 $: " << recaudado3 << endl ;

             cout << endl << "----------------------------------" << endl ;
             cout << endl << "----------------------------------" << endl ;

             cout << endl << "Cliente con menos kv consumidos: " << menor_cliente <<endl ;







	return 0 ;
 }
