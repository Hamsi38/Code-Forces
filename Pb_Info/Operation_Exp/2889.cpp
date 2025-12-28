#include <iostream>
#include <cmath>
#include <iomanip>

int main(){

    double r,P,A;
    std::cin>>r;
    A = M_PI*(r*r);
    P = 2*M_PI*r;

    std::cout<<std::fixed<<std::setprecision(6)<<A<<" "<<P;
    return 0;
}