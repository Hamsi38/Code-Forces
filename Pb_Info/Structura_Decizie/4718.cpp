#include <iostream>

using namespace std;

int main(){

    int L,C;
    cin>>L>>C;

    if (L==1 && C==1)
    {
        cout<<1;
    }
    else 
    {
        int a;
        a = (((L-1)*L)/2)+C;
        if (a%9==0)
        {
            cout<<9;
        }
        else cout<<a%9;
    }
    


    return 0;
}