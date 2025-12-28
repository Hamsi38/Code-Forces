#include <iostream>

int main(){

    int n,sum=0;
    std::cin>>n;
    sum += (n%10)*(n%10);
    sum += ((n/10)%10)*((n/10)%10);
    sum += (n/100)*(n/100);
    std::cout<<sum;
    return 0;
}