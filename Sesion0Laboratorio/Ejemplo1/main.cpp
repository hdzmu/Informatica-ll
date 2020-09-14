#include <iostream>

using namespace std;

int main()
{
    short fil, col;
    for(fil=0;fil<=6;fil=fil+1){
        for(col=0;col<=12;col=col+1){
            if(col<=fil){
                cout<<char (col+65);
            }
            else if((12-col)<=fil){
                cout<<char (12-col+65);
            }
            else{
                cout<<' ';
            }
        }
        cout<<endl;
    }
    return 0;
}
