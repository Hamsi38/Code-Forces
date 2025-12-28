#include <iostream>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n,k,l,c,d,p,nl,np;
    std::cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int a,b,x;
    a = (k*l)/nl;
    b = c*d;
    x = p/np;
    int x1=0,x2=0,x3=0;
    x1 = a/n; x2 = b/n; x3 =x/n;
    int toast = 0;
    if (x1<x2 && x1<x3 ) toast = x1;
    else if(x2<x3 && x2<x1) toast =x2;
    else toast = x3;
    std::cout<<toast;


    return 0;
}