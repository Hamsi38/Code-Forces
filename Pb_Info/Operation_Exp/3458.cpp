#include <iostream>
#include <cmath>
#include <iomanip>

int main(){

    double x;
    std::cin>>x;
    double a;
    a = x*M_PI/180.0;
    double nr1,nr2;
    nr1 = (long long int)(sin(a)*1000)/1000.;
    nr2 = (long long int)(cos(a)*1000)/1000.;
    std::cout<<std::fixed<<std::setprecision(3)<<nr1<<" "<<nr2;

    return 0;
}