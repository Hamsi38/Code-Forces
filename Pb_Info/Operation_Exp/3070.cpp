#include <iostream>
#include <cmath>

int main(){

    int a,b,p,A,D;
    std::cin>>a>>b;
    p = 2*(a+b);
    A = a*b;
    D = a*a+b*b;
    std::cout<<p<<" "<<A<<" "<<D;

    return 0;
}