#include <iostream>

using namespace std;

int main()
{
    int A, B, C, ori, select, res, delay, con, hh, mm;
    bool next;
    double rec, pot=1;

    while (true){
        cout << "\nIngrese el numero del ejercicio a ejecutar" << endl;
        cin>> select;
        switch (select) {
            //Inicio case
            case 1:
                cout << "EJERCICIO 1" << endl;
                cout << "Ingrese dos numeros A y B" << endl;
                cin >> A >> B;
                res=A%B;
                cout << A <<" % " << B <<" = " << res << endl;
            break;
            //Fin case
            case 2:
                cout << "EJERCICIO 2" << endl;
                cout << "Ingrese un numero" << endl;
                cin >> A;
                if (A%2==0) cout <<"es un numero par" << endl;
                else cout <<"es un numero impar" << endl;
            break;
            case 3:
                cout << "EJERCICIO 3" << endl;
                cout << "Ingrese dos numeros A y B" << endl;
                cin >> A >> B;
                if (A>B) cout << A << " es mayor que " << B << endl;
                else cout << B << " es mayor que " << A << endl;
            break;
            case 4:
                cout << "EJERCICIO 4" << endl;
                cout << "Ingrese dos tiempos A y B" << endl;
                cin >> A >> B;
                next=true;
                if(A >= 100 && A <= 2400){
                    for(con=24,delay=2400;con>=0;con--, delay-=100){
                        if(A>delay){
                            if((delay+60)<=A && (A!=delay+100)){
                                cout << "El tiempo " << A << " es invalido" << endl;
                                next=false;
                                break;
                            }
                            else break;
                        }
                    }
                }
                else {
                    cout << "El tiempo "<< A <<" no pertenece al formato\n" << endl;
                    next=false;
                }


                if(B >= 100 && B <= 2400){
                    for(con=24,delay=2400;con>=0;con--, delay-=100){
                        if(B>delay){
                            if((delay+60)<=B && (B!=delay+100)){
                                cout << "El tiempo " << B << " es invalido" << endl;
                                next=false;
                                break;
                            }
                            else break;
                        }
                    }
                }
                else {
                    cout << "El tiempo "<< B <<" no pertenece al formato\n" << endl;
                    next=false;
                }
                ori=A;
                hh=B;
                mm=B;
                C=0;
                if (next==true){
                    while (true) {
                        if ((mm%100)!=0){
                            mm-=1;
                            C+=1;
                        }

                        if ((mm%100)==0){
                            hh=((hh-C)/100)*60;
                            C=C+hh;
                            break;
                        }

                    }

                    for(;C>=0;--C){
                        A++;
                        if ((A-60)%100==0 && ori!=A){
                            A=(A-60)+100;
                        }
                    }
                }
                if (next==true){
                    A--;
                    cout <<"La hora es " << A;
                }

            break;
            case 5:
                cout << "EJERCICIO 5" << endl;
                cout << "Ingrese un numero" << endl;

            break;
            case 6:
                cout << "EJERCICIO 6" << endl;
                cout << "Ingrese dos numeros A y B" << endl;
                cin >> A >> B;
                rec=A;
                if (A==0 && B<=0) cout << A << " ^ " << B<< " No esta definida\n" << endl;
                else if (A==0 && B>0) cout << "El resultado es 0\n" << endl;
                else{
                    ori=B;
                    if(B<0) {
                        rec=1.0/A;
                        B*=-1;
                    }
                    for(;B>0;B--) pot*=rec;
                    cout << A << " ^ " << ori << " = "<< pot << endl;
                }
            break;
            default:
                cout << "Ese ejercicio no esta definido\n";
            break;


        }
    }
    return 0;
}
