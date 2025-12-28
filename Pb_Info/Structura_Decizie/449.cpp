#include <iostream>

using namespace std;

int main(){

    int a,cnt=0;
    cin>>a;
    if (a<10)
    {
        cout<<1;
    }
    else if (a>9 && a<100)
    {
        cout<<2;
    }
    else
    {
        cout<<3;
    }
    

    return 0;
}