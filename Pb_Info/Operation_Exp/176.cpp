#include <iostream>

int main(){

    int head,legs,sheeps=0,ducks=0;
    std::cin>>head>>legs;
    sheeps = (legs-2*head)/2;
    ducks = head - ((legs-2*head)/2);
    std::cout<<ducks<<" "<<sheeps;
    
    return 0;
}