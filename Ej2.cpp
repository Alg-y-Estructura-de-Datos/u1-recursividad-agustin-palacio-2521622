#include <iostream>
using namespace std;

int sumarecursiva(int a)
{
    int suma_anterior;

    if (a == 1)
    {
        cout<<"1";  //para imprimirlo por defecto
        return 1;
    }
    else
    {

        suma_anterior=sumarecursiva(a-1);   C

        cout<<" + "<<a;

        return suma_anterior + a;
        
    }
}

int main()
{
    int su;
    int resultado;
    cout << "Ejercicio 2 " << endl;

    cout << "Ingrese un numero " << endl;
    cin >> su;
    cout<<"El proceso de la suma es ";
    resultado = sumarecursiva(su);

    cout << "El resultado de la suma es " <<resultado<< endl;

    return 0;
}
