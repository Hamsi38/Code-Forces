#include <iostream>

//! ceil(x / a) = (x + a - 1) / a

int main(){

    long long n,m,a;
    std::cin>>n>>m>>a;

    long long result =0;

    result = ((m+a-1)/a)*((n+a-1)/a);

    std::cout<<result;

    return 0;
}