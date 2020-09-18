#include <iostream>

using namespace std;

int main()
{
    int A, B;
        cout << "Calcular numero mayor entre A y B:" << endl;
        cout << "Ingrese A:" << endl;
        cin>>A;
        cout << "Ingrese B:" << endl;
        cin>>B;
        if(A>B){
            cout << A << " Es mayor que " << B << endl;
        }
        else{
            cout << B << " Es mayor que " << A << endl;
        }

    return 0;
}
