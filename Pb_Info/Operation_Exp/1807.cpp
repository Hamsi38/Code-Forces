#include <iostream>

int main(){

    long long int n;
    std::cin>>n;
    long long int D,S;
    D = (n*(n-3))/2;
    S = (n-2)*180;
    std::cout<<D<<std::endl<<S;

    return 0;
}