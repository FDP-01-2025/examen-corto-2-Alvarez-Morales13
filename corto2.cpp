#include <iostream>
using namespace std;

int main(){
    //Declaracion de las variables
    int edad,cliente;
    double precio;
    float saldo;

    precio = 8 - (8*0.25);
    precio = 7 - (7*0.25);
    precio = 10 - (10*0.25);
    precio = 6- (6*0.3);
    precio = 9 - (9*0.3);
    precio = 5 - (5*0.3);

    cout << "¿Cual es tu edad?" << endl;
    cin >> edad;

    if (edad >= 12){
        cout << "Puede proceder" << endl;
    }else{
        cout << "No puede continuar con la compra" << endl;
    }

    cout << "Tipo de cliente: " << endl;
    cout << "1. Estudiante. " << endl;
    cout << "2. Adulto mayor. " << endl;
    cout << "3. Ver todo. " << endl;
    cin >> cliente;

    //Inicio de switch
    switch (cliente)
    {
    case 1:
        //Lista de platos para estudiante
        cout << "Estudiante (25%): " << endl;
        cout << "Combo hamburguesa: $8 " << "Descuento: " << 8 - (8*0.25) << endl;
        cout << "Combo pizza personal: $7 " << "Decuento: " << 7- (7*0.25) << endl;
        cout << "Almuerzo ejecutivo: $10 " << "Decuento: " << 10 - (10*0.25) << endl;
        break;

    case 2:
        //Lista de platos para adulto mayor
        cout << "Adulto Mayor (30%): " << endl;
        cout << "Sopa nutritiva: $6 " << "Descuento: " << 6- (6*0.3) << endl;
        cout << "Plato casero: $9 " << "Descuento: " << 9 - (9*0.3) << endl;
        cout << "Postre + Cafe: $5 " << "Descuento: " << 5 - (5*0.3) << endl;
        break;

    case 3:
        //Lista de platos de ambos clientes
        cout << "Estudiante (25%): " << endl;
        cout << "Combo hamburguesa: $8 " << "Descuento: " << 8 - (8*0.25) << endl;
        cout << "Combo pizza personal: $7 " << "Descuento: " << 7 - (7*0.25) << endl;
        cout << "Almuerzo ejecutivo: $10 " << "Descuento: " << 10 - (10*0.25) << endl;
        cout << "Adulto Mayor (30%): " << endl;
        cout << "Sopa nutritiva: $6 " << "Descuento: " << 6 - (6*0.3) << endl;
        cout << "Plato casero: $9 " << "Descuento: " << 9 - (9*0.3) << endl;
        cout << "Postre + Cafe: $5 " << "Descuento: " << 5 - (5*0.3) << endl;
        break;

    default:
        cout << "Elija una opcion de las disponibles.";
        return 0;
    }

    cout << "Cantidad de dinero: " << endl;
    cin >> saldo;


    if (saldo > precio){
        cout << "Saldo suficiente." << endl;
        cout << "Compra exitosa" << endl;

    }else{
        cout << "Es mayor al saldo disponible." << endl;
        cout << "No es posible realizar la compra";
    }

    return 0;
}