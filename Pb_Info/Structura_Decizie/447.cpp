#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    int n,a,b,c,big,small;
    cin>>n;
    a = n%10;
    n /= 10;
    b = n%10;
    n /= 10;
    c =n;
    big = max({a,b,c});
    small = min({a,b,c});
    if (a<big && a>small) cout<<a;
    else if(b<big && b>small ) cout<<b;
    else cout<<c; 
    

    return 0;
}