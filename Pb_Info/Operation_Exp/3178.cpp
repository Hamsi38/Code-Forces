#include <iostream>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int f,b,n;
    std::cin>>f>>b>>n;
    std::cout<<(f*3*n)+(b*2*n);

    return 0;
}