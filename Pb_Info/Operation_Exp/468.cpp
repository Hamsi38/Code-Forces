#include <iostream>

int main(){

    int n,sum = 0;
    std::cin>>n;
    sum += (n/100)*10;
    sum+= n%10;
    std::cout<<sum*sum;
    return 0;
}