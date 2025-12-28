#include <iostream>


int main(){

    long long n,even=0,odd=0,result = 0;
    std::cin>>n;

    even = (n/2)*((n/2)+1);
    odd = ((n+1)/2)*((n+1)/2);
    result = even - odd;

    std::cout<<result;
    return 0;
}