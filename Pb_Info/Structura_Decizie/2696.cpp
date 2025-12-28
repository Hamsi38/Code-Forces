#include <iostream>

using namespace std;

int main(){

    int a,b,a1,a2,b1,b2,cnt=0;
    cin>>a>>b;
    a1 = a%10;
    a2 = a/10;
    b1 = b%10;
    b2 = b/10;
    if ((a%2==0 && b%2==0) || (a%2==1 && b%2==1) )
    {
        if(a1%2==0) cnt++;
        if(a2%2==0) cnt++;
        if(b1%2==0) cnt++;
        if(b2%2==0) cnt++;
    }
    else
    {
        if(a1%2==1) cnt++;
        if(a2%2==1) cnt++;
        if(b1%2==1) cnt++;
        if(b2%2==1) cnt++;
    }
    cout<<cnt;
    return 0;
}