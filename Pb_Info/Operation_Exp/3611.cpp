#include <iostream>

int main(){

    int n,sum=0,u1,u2,u3;
    std::cin>>n;
    u1 = ((n/100)+((n/10)%10)+(n%10))*2;
    u2 = u1*10;
    u3 = u1*100;
    sum += u1+u2+u3;
    std::cout<<sum;

    return 0;
}