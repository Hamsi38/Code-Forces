#include <iostream>
#include <cmath>
#include <iomanip>

int main(){

    double n,a,R,x;
    std::cin>>n>>a;
    R = a/(2*sin(M_PI/n));
    x = (int)(R*100)/100.;
    std::cout<<std::fixed<<std::setprecision(2)<<x;

    return 0;
}