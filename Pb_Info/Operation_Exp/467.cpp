#include <iostream>

int main(){

    int n,sum=0;
    std::cin>>n;
    sum = (n/100)*(n%10);
    std::cout<<sum;
    return 0;
}