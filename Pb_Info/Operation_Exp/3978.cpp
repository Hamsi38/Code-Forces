#include <iostream>

int main(){

    int a,b,c;
    std::cin>>a>>b>>c;

    int sum1 =  (a*(a+1)/2);
    int sum2 = (b*(b+1)/2);
    int sum3 = (c*(c+1)/2);
    std::cout<<sum2-sum1+a<<" "<<sum3-sum2+b<<" "<<sum3-sum1+a;

    return 0;
}