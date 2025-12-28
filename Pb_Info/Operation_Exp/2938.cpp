#include <iostream>

int main(){

    long long n;
    std::cin>>n;
    long long sum = 3*n*(n-1);
    std::cout<<sum+1;

    return 0;
}