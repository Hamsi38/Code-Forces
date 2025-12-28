#include <iostream>

using namespace std;

int main(){

    int N,r;
    cin>>N>>r;

    if (r==1)
    {
        int a =N%10;
        if (a< 5)
        {
            N -= a;
            cout<<N;
        }
        else
        {
            cout<<N + (10-a);
        }
    }
    else
    {
        int b = N%100;
        if (b<50)
        {
            N -= b;
            cout<<N;
        }
        else
        {
            cout<< N + (100-b);
        }
        
    }
    

    return 0;
}