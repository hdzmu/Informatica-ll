#include <iostream>

using namespace std;

int main()
{
    short fil,col,k=1;
    for(fil=0;fil>=0;fil=fil+k){
        for(col=0;col<=12;col=col+1){
            if (fil==6){
                k=-1;
            }
            if(col<=fil){
                cout << char(col+65);
            }
            else if((12-col)<=fil){
                cout << char(12-col+65);
            }
            else{
                cout << ' ';
            }
        }
        cout<<endl;
    }
    return 0;
}
