#include <iostream>

using namespace std;

int main()
{
    int A=0, B=0, C=0, ori=0, select=0, res=0, delay=0, con=0, hh=0, mm=0, cond=0;
    bool next;
    double rec=0.0, pot=1, pi=3.1416, resd=0.0, condd=0.0;

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
                else if (A==B)cout << "son iguales"<< endl;
                else cout << B << " es mayor que " << A << endl;
            break;
            case 4:
                cout << "EJERCICIO 4" << endl;
                cout << "Ingrese dos numeros A y B" << endl;
                cin >> A >> B;
                if (A<B) cout << A << " es menor que " << B << endl;
                else if (A==B)cout << "son iguales"<< endl;
                else cout << B << " es menor que " << A << endl;
            break;
            case 5:
                cout << "EJERCICIO 5" << endl;
                cout << "Ingrese dos numeros A y B" << endl;
                cin >> A >> B;
                if (B!=0) cout << A << " / " << B << " es: " << A/B << endl;
                else cout << "La operacion no esta definida" << endl;
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
            case 7:
                cout << "EJERCICIO 7" << endl;
                cout << "Ingrese un numero" << endl;
                cin >> A;
                res=0;
                for(;A>0; A--) res+=A;
                cout << "El suma de A hasta n es: "<< res << endl;
            break;
            case 8:
                cout << "EJERCICIO 8" << endl;
                cout << "Ingrese un numero" << endl;
                cin >> A;
                if (A!=0) {
                    res=1;
                    for(;A>0; A--) res*=A;
                }
                else res=1;
                cout << "El factorial de A es: "<< res << endl;
            break;
            case 9:
                cout << "EJERCICIO 9" << endl;
                cout << "Ingrese el radio de un circulo" << endl;
                cin >> A;
                resd=pi*(A*A);
                cout << "El area del circulo es: " << resd << endl;
                resd=2*pi*A;
                cout << "El perimetro del circulo es: " << resd << endl;
            break;
            case 10:
                cout << "EJERCICIO 10" << endl;
                cout << "Ingrese un numero A" << endl;
                cin >> A;
                for(con=100; con>0 ; con--){
                    if (con%A==0) cout << con << endl;
                }
            break;
            case 11:
                cout << "EJERCICIO 11" << endl;
                cout << "Ingrese un numero A" << endl;
                cin >> A;
                for (con=0; con<11 ; con++) cout << A << " * " << con << " = " << A*con << endl;
            break;
            case 12:
                cout << "EJERCICIO 12" << endl;
                cout << "Ingrese un numero A" << endl;
                cin >> A;
                res=1;
                for (con=0; con<6 ; con++){
                    if (con==0) res=1;
                    else if (con==1) res=A;
                    else{
                        res=A;
                        for (cond=1;con>cond;cond++){
                            res*=A;
                        }
                    }
                    cout << A << " ^ " << con << " = " << res << endl;
                }
            break;
            case 13:
                cout << "EJERCICIO 13" << endl;
                cout << "Ingrese un numero A" << endl;
                cin >> A;
                for (con=1;con<=A;con++){
                    res=A%con;
                    if (res==0) {
                        cout << con << endl;
                    }
                }
            break;
            case 14:
                cout << "EJERCICIO 14" << endl;
                for (con=1, cond=50; con<51 && cond>=0; con++,cond--) cout << con << " || " << cond << endl;
            break;
            case 15:
                cout << "EJERCICIO 15" << endl;
                res=0;
                while(true){
                cout << "Ingrese un numero A" << endl;
                cin >> A;
                if (A!=0) res+=A;
                else break;
                }
                cout << "La suma de los numeros ingresados es: " << res << endl;
            break;
            case 16:
                cout << "EJERCICIO 16" << endl;
                con=0;
                resd=0;
                while(true){
                    cout << "Ingrese un numero A" << endl;
                    cin >> A;
                    if (A!=0) {
                        resd+=A;
                        con+=1;
                    }
                    else break;
                }
                cout << "El promedio de la suma de los numeros ingresados es: " << resd/con << endl;
            break;
            case 17:
                cout << "EJERCICIO 17" << endl;
                res=0;
                cout << "Ingrese un numero A" << endl;
                cin>> A;
                res=A;
                while(A!=0){
                    cout << "Ingrese un numero A" << endl;
                    cin >> A;
                    if (A>res) res=A;
                }
                cout << "El mayor de los numeros ingresados es: " << res << endl;
            break;
            case 18:
                cout << "EJERCICIO 18" << endl;
                cout << "Ingrese un numero A" << endl;
                cin >> A;
                for(con=0;con<A;con++){
                    if ((con*con)==A) {
                        cout << A <<" es un cuadrado perfecto" << endl;
                        break;
                    }
                    else if ((con*con)>A) {
                        cout << A <<" no es un cuadrado perfecto" << endl;
                        break;
                    }
                }
            break;
            case 19:
                cout << "EJERCICIO 19" << endl;
                cout << "Ingrese un numero A" << endl;
                cin >> A;
                cond=0;
                for(con=1;con<=A;con++){
                    if((A%con)==0) cond+=1;
                    else if (cond>2) {
                        break;
                    }
                }
                if (cond==2 || A==1) cout << A <<" es un numero primo" << endl;
                else if (cond>2) {
                    cout << A <<" no es un numero primo" << endl;
                }
            break;
            case 20:
                cout << "EJERCICIO 20" << endl;
                cout << "Ingrese un numero A" << endl;
                cin >> A;
                res=A/10;
                resd=(A%10)/10.0;
                cond=1;
                for(condd=100.0;res>=1;condd*=10.0){
                    resd=resd+((res%10)/condd);
                    res=res/10;
                    cond+=1;
                }

                for(;cond>0;cond--) resd*=10;
                if (int(resd)==A) cout << "Es palindromo" << endl;
                else cout << "No es palindromo" << endl;
            break;
            case 34:
                cout << "PROBLEMA 4" << endl;
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

            default:
                cout << "Ese ejercicio no esta definido\n";
            break;


        }
    }
    return 0;
}
