#include <iostream>

using namespace std;

int main()
{
    cout<<"PROMEDIO ICA\n";
    int a;
    float inc=0, sum=0, pro=0;
    while (true) {
        cout<<"Ingrese Medida:";
        cin >> a;
        inc+=1;
        sum=sum+a;
        if (a!=-1){
            if (inc>=10){
                pro=sum/inc;
                if(pro>=151 && pro<=200){
                    cout<<"El promedio del ICA es:\n"<< pro << " Alerta: ROJO\n";
                }
                else if(pro>=101 && pro<=150){
                    cout<<"El promedio del ICA es:\n"<< pro << " Alerta: NARANJA\n";
                }
                else if(pro>=51 && pro<=100){
                    cout<<"El promedio del ICA es:\n"<< pro << " Alerta: AMARILLO\n";
                }
                else if(pro<51){
                    cout<<"El promedio del ICA es:\n"<< pro << " Alerta: VERDE\n";
                }
            }
        }
        else{
            break;
        }

    }
    return 0;
}
