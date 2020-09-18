#include <iostream>

using namespace std;

int main()
{
    unsigned int a;
    cout << "SUMA DE LOS DIGITOS AL CUADRADO\n" << endl;
    cout << "Ingrese el numero:\n" << endl;
    cin>>a;
    int cociente, modulo, resultado=0;
    while(true){
        cociente=a/10;
        if (cociente!=0){
            modulo=a%10;
            resultado=resultado+(modulo*modulo);
            a=cociente;
        }
        else{
            modulo=a%10;
            resultado=resultado+(modulo*modulo);
            break;
        }
    }
    cout<<"El resultado es: "<<resultado<<"\n";
    return 0;
}
