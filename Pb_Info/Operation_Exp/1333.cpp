#include <iostream>
#include <cmath>

int main(){

    // double B,b,l;
    // std::cin>>B>>b>>l;

    // double result =0;
    // result = sqrt(l*l+B*b);
    // std::cout<<result;

    double d1,d2,are,per;
    std::cin>>d1>>d2;
    are = (d1*d2)/2;
    per = sqrt(d1*d1+d2*d2)*2;
    std::cout<<per<<" "<<are;
    return 0;
}