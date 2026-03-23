#include <iostream>
using namespace std;

int sumaRecursiva(int n){
if (n ==0 ){
    return 0;
}else{

return n+sumaRecursiva(n-1);

}        //Rehacer Importante

}

int main() {
    int n = 5;
    cout << "Suma de los primeros " << n << " numeros naturales: ";
    int suma = sumaRecursiva(n);
    cout << " = " << suma << endl;
    return 0;
}
