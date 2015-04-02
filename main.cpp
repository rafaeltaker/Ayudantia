#include <iostream>

using namespace std;

int main()
{
    int N, i = 0;
    cout << "Ingresa numero " << endl;
    cin >> N;
    int a = 2+i;
    while(N >= 1)
    {
        if(N%a==0)
        {
            cout << a << endl;
            N = N / a;
        }
    }
}
