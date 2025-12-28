#include <iostream>

using namespace std;

int main(){

    int n,cnt=0,x,i=1;
    cin>>n;
    while (n>0)
    {
        x = (i*(i+1)/2);
        if (n<x)
        {
            break;
        }
        n -= x;
        i++;
        cnt++;
    }
    cout<<cnt;

    return 0;
}