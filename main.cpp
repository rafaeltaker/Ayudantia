#include <iostream>
#include "funciones.h"
using namespace std;

int main()
{
    int N, y;
    do
    {
        cout << "Ayudantia 2" << endl;
        cout << "1.- Cambio de base" << endl;
        cout << "2.- Multiplicacion rusa" << endl;
        cout << "3.- Factores primos" << endl;
        cout << "4.- Salir" << endl;
        cin >> N;

        switch(N)
        {
        case 1: cout << "Cambio de base" << endl;
        y = base(N);
        cout << "El numero en base 10 es : " << y << endl;
            break;

        case 2: cout << "Multiplicacion rusa" << endl;
        y = multiplicador(N);
        cout << "La multiplicacion rusa es : " << y << endl;
            break;

        case 3: cout << "Factores primos" << endl;
            break;

        case 4: cout << "Has salido con exito" << endl;
            break;

        default: cout << "Ingrese opcion correcta " << endl;
        }
    }
    while(N != 4);
}
