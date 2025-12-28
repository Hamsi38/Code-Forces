#include <iostream>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t1,t2,n,m,k;
    std::cin>>t1>>t2>>n>>m>>k;
    std::cout<<(t1*n*k)+(t2*m*k);

    return 0;
}