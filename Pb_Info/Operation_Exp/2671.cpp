#include <iostream>

int main(){

    int N,B,n,e,m,b;
    std::cin>>n>>m>>e>>b;
    B = (-1)*((b*m+e)/(n-m));
    N = B*n+e;
    std::cout<<N<<std::endl<<B;

    return 0;
}