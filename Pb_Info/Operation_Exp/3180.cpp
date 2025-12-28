#include <iostream>

int main(){

    int a,b,c;
    std::cin>>a>>b>>c;
    int n,m,p;
    std::cin>>n>>m>>p;
    int sum = (a*n)+(b*m)+(c*p);
    std::cout<<sum;

    return 0;
}