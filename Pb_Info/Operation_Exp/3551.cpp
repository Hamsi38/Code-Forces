#include <iostream>
#include <iomanip>

int main(){

    double c1,c2,i;
    std::cin>>c1>>c2>>i;
    double a=0;
    a = (int)((c1*c2)/i*100)/100.;
    std::cout<<std::fixed<<std::setprecision(2)<<a;

    return 0;
}