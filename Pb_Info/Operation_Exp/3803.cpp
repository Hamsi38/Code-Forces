#include <iostream>
#include <iomanip>
#include <cmath>

int main(){

    long double n,l;
    std::cin>>n>>l;
    long double result = 0;
    result  = (n*l*l)/(4*tan(M_PI/n));
    result  = (int)(result *100)/100.;
    std::cout<<std::fixed<<std::setprecision(2)<<result;

    return 0;
}