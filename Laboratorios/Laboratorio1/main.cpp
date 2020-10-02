#include <iostream>

using namespace std;

int main()
{
    int A=0, B=0, C=0, ori=0, select=0, res=0, delay=0, con=0, hh=0, mm=0, cond=0, ss=0;
    bool next;
    double rec=0.0, pot=1, pi=3.1416, resd=0.0, condd=0.0, conn=0.0;
    char l, ll;

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
            case 21:
            cout << "EJERCICIO 21" << endl;
            cout << "Ingrese una letra" << endl;
            cin >> l;
            if (l=='A' || l=='B' || l=='C' || l=='D' || l=='E' || l=='F' || l=='G' || l=='H' || l=='I' || l=='J' || l=='K' || l=='L' || l=='M' || l=='N' || l=='O' || l=='P' || l=='Q' || l=='R' || l=='S' || l=='T' || l=='U' || l=='V' || l=='W' || l=='X' || l=='Y' || l=='Z'){
                ll=l+32;
            }
            else if (l=='a' || l=='b' || l=='c' || l=='d' || l=='e' || l=='f' || l=='g' || l=='h' || l=='i' || l=='j' || l=='k' || l=='l' || l=='m' || l=='n' || l=='o' || l=='p' || l=='q' || l=='r' || l=='s' || l=='t' || l=='u' || l=='v' || l=='w' || l=='x' || l=='y' || l=='z'){
                    ll=l-32;
            }
            cout << ll << endl;
            break;
            case 22:
                cout << "EJERCICIO 22" << endl;
                cout << "Ingrese segundos" << endl;
                cin >> A;
                hh=0;
                mm=0;
                ss=0;
                for(;3600<A;A-=3600) hh+=1;
                for(;60<A;A-=60){
                    mm+=1;
                    if (mm==60) {
                        mm=0;
                        hh+=1;
                    }
                }
                ss=ss+A;
                if (ss==60) {
                    mm+=1;
                    ss=0;
                }

                cout << hh << " : " << mm << " : " << ss << endl;
            break;
            case 23:
                cout << "EJERCICIO 23" << endl;
                cout << "Ingrese dos numeros A y B" << endl;
                cin >> A >> B;
                res=1;
                for(con=2;A>1 || B>1;con++){
                    if(A%con==0 && B%con==0){
                        res*=con;
                        A=A/con;
                        B=B/con;
                        con=1;
                    }
                    else if (A%con==0){
                        res*=con;
                        A=A/con;
                        con=1;
                    }
                    else if (B%con==0){
                        res*=con;
                        B=B/con;
                        con=1;
                    }
                }
                cout << "El MCM es: " << res << endl;
            break;
            case 24:
                cout << "EJERCICIO 24" << endl;
                cout << "Ingrese un numero A" << endl;
                cin >> A;
                B=A;
                l=43;
                for (con=0;con<=A;con++){
                    if (con==0){
                        for(;B>0;B--)cout << l;
                        cout << endl;
                        B=A;
                    }
                    else if (con==A){
                        for(;B>0;B--)cout << l;
                        cout << endl;
                        B=A;
                    }
                    else if (con!=(B-2) && A!=2){
                        ll=l-11;
                        cout << l;
                        B=B-2;
                        for (;B>0;B--) cout << ll;
                        cout << l;
                        cout << endl;
                        B=A;
                    }
                }
            break;
            case 25:
                cout << "EJERCICIO 25" << endl;
                cout << "Ingrese un numero A" << endl;
                cin >> A;
                B=A;
                for(con=0;A>=1;con++) A=A/10;
                cout << "El numero " << B << " tiene " << con << " digitos" << endl;
            break;
            case 26:
                cout << "EJERCICIO 26" << endl;
                cout << "Ingrese tres numeros A, B y C" << endl;
                cin >> A >> B >> C;
                if (A>B+C || B>A+C || C>A+B) cout << "Las longitudes ingresadas no forman un triangulo" << endl;
                else if (A<B-C || B<A-C || C<A-B) cout << "Las longitudes ingresadas no forman un triangulo" << endl;
                else if (A==B && A==C && B==C) cout << "Equilatero" << endl;
                else if (A==B || A==C || B==C) cout << "Isosceles" << endl;
                else if (A!=B || A!=C || B!=C) cout << "Escaleno" << endl;
            break;
            case 27:
                cout << "EJERCICIO 27" << endl;
                cout << "Ingrese un numero A, un operador y un numero C" << endl;
                cin >> A >> l >> C;
                res=0;
                if (l=='+') cout << "el resultado es: " << A+C << endl;
                else if (l=='-') cout << "el resultado es: " << A-C << endl;
                else if (l=='*') cout << "el resultado es: " << A*C << endl;
                else if (l=='/' && C!=0) cout << "el resultado es: " << A/C << endl;
                else cout << "Error" << endl;
            break;
            case 28:
                cout << "EJERCICIO 28" << endl;
                cout << "Ingrese un numero A" << endl;
                cin >> A;
                A-=1;
                resd=0.0;
                conn=-3.0;
                condd=0.0;
                for (con=0;con<A;con++){
                    condd=1.0/conn;
                    resd=resd+(condd);
                    if (conn>0)conn=(conn+2)*(-1);
                    else conn=(conn-2)*(-1);
                }
                cout << 4*(1+resd) << endl;
            break;
            case 29:

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
