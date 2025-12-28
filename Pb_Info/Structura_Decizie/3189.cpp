#include <iostream>

using namespace std;

int main(){
    
    long long n,p,x,y;
    cin>>n>>p;

    if (n>p) cout<<n-p;
    else
    {
        x = p/n;
        y = p%n;
        if(y!=0) x++;
        int pasare=0;
        if(x==0) pasare = n;
        else pasare = y;
        cout<<x<<" "<<y;
    }
    
    
    
    //? anlamadim bu problemi
    return 0;
}