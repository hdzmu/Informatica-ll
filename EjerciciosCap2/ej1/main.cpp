#include <iostream>

using namespace std;

int main()
{
    int A, B, res;
    cout << "Calculara Residuo de A entre B:" << endl;
    cout << "Ingrese A:" << endl;
    cin>>A;
    cout << "Ingrese B:" << endl;
    cin>>B;
    res=A%B;
    cout << "El residuo es:"<< res << endl;
    return 0;
}
