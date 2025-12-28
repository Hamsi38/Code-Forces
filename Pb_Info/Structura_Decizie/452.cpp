#include <iostream>

int main(){

    int n,a,cnt=0;
    std::cin>>n;
    a =n%10;
    n /= 10;
    if(a%2==1) cnt++;
    a = n%10;
    n /= 10;
    if(a%2==1) cnt++;
    if(n%2==1) cnt++;
    std::cout<<cnt;

    return 0;
}