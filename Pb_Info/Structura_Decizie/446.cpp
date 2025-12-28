#include <iostream>

using namespace std;

int main(){

    int n,a,b,c;
    cin>>n;
    a = n%10;
    n /= 10;
    b = n%10;
    n /= 10;
    c = n;

    if (a>b && a>c) cout<<a;
    else if(b>a && b>c) cout<<b;
    else cout<<c;
    

    return 0;
}