#include <iostream>

int main(){

    long long int n,a,b,result=0;
    std::cin>>n;
    b = n*n;
    a = (b*(b+1))/2;
    result = a/n;
    std::cout<<result;

    return 0;
}