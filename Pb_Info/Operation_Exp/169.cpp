#include <iostream>


int main(){

    int n,sum = 0,t;
    std::cin>>n;
    sum += n%10;
    sum += (n/10)%10;
    sum += (n/100)%10;
    std::cout<<sum;

    return 0;
}