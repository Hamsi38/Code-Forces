#include <iostream>
#include <cmath>
#include <iomanip>

int main(){

    double r ,area = 0, volum =0;
    std::cin>>r;
    area = 4*M_PI*r*r;
    volum = (4.0/3.0)*M_PI*r*r*r;
    double a,b;
    std::cout<<std::fixed<<std::setprecision(2);
    std::cout<<a<<" "<<b;
    // cout<<fixed<<setprecision(2)<<a<<" "<<
    return 0;
}