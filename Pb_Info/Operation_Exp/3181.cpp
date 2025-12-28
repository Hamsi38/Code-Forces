#include <iostream>

int main(){

    int n,m,k;
    std::cin>>n>>m>>k;
    int a,b,c;
    a = k/(n*m);
    b = k%(n*m)/m;
    c = k - a*n*m - b*m;
    std::cout<<a<<std::endl<<b<<std::endl<<c;

    return 0;
}