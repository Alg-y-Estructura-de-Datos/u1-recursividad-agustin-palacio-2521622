#include <iostream>
using namespace std;

int potenciarecursividad(int base, int exponente)
{

    int resultado;

    if (exponente == 0)
    {
        return 1;
    }
    else
    {

        resultado = base * potenciarecursividad(base, exponente - 1);

        return resultado;
    }
}

int main()
{

    cout << "Ejercicio 1" << endl;
    int ba;
    int ex;
    int resultado;
    cout << "Ingrese un numero " << endl;
    cin >> ba;
    cout << "ingrese hasta que expoenente quiere la recursividad " << endl;
    cin >> ex;

    resultado = potenciarecursividad(ba, ex);

    cout << "Resultado " << resultado << endl;

    return 0;
}
