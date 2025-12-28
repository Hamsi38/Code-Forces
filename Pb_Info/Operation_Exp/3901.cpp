#include <iostream>
#include <cmath>

int main(){

    double a,b,u,result=0;
    std::cin>>a>>b>>u;
    u = (M_PI/180.0)*u;
    result = sqrt(a*a+b*b-2*a*b*cos(u));
    result = (long long int)(result*100)/100.;
    std::cout<<result;
    return 0;
}