#include <iostream>

using namespace std;

int main() {
    float plazomeses;
    float  valorprestamo;
    float interesplazoenmeses;
    float valortotalprestamo;
    float valorcuotamensual;

    //entradas

cout << "ingrese el valor del prestamo" << endl;
    cin >> valorprestamo;

cout << "ingrese la cantidad de interes" << endl;
cin >> interesplazoenmeses;

    cout << "ingrese la cantidad de plazo en meses" << endl;
    cin >> plazomeses;

    valortotalprestamo = valorprestamo + ( valorprestamo * interesplazoenmeses) / 100;
    valorcuotamensual = valortotalprestamo / plazomeses;

cout << "señor usuario usted debe pagar :  " << plazomeses <<  " por un valor de : " << valorcuotamensual << endl;


    return 0;
}
