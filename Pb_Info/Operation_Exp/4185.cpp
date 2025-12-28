#include <iostream>
#include <iomanip>

int main(){

    long double a,b,c,d;
    int k;
    std::cin>>a>>b>>c>>d;
    long double result =0;
    result  = (b*c-d*a);
    result /= (d-c);
    k = result*100;
    result = k;
    result /= 100;
    std::cout<<std::fixed<<std::setprecision(2)<<result;

    

    return 0;
}