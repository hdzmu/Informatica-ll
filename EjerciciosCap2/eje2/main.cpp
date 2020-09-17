#include <iostream>

using namespace std;

int main()
{
    int unsigned a;
    cout << "Numero par o impar:" << endl;
    cout << "Ingrese el numero:" << endl;
    cin>>a;
    if(a%2==0){
        cout<<"El numero es par"<< endl;
    }
    else{
        cout<<"El numero es impar"<< endl;
    }
    return 0;
}
