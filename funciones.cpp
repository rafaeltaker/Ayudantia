#include <iostream>
#include <math.h>
using namespace std;

// Funcion de tipo entero, que cuenta la cantidad de digitos
int contar(int N)
{
    int c = 0;
    while(N>0)
    {
        c++;
        N = N / 10;
    }
    return c;
}

// Funcion de tipo entero, que transforma un numero a base 10

int base(int N)
{
    int b, a, resto;
    int k = 0;
    int s = 0;
    cout << "Ingrese numero" << endl;
    cin >> N;
    cout << "Ingrese base del numero" << endl;
    cin >> b;
    a = contar(N);
    while(N > 0)
    {
        while(k < a)
        {
            resto = N % 10;
            s = s + resto*pow(b,k);
            N = N / 10;
            k++;
        }
    }
    return s;
}

int multiplicador(int N)
{
    int s = 0;
    int M;
    cout << "Ingrese el multiplicador " << endl;
    cin >> N;
    cout << "Ingrese el multiplicando " << endl;
    cin >> M;

    while(N >= 1)
    {
        if(N%2 != 0)
            s = s + M;
            N = N / 2;
            M = M * 2;
    }
    return s;
}

int fprimos(int N)
{
    cout <<"Ingrese numero " << endl;
    cin >> N;

}
