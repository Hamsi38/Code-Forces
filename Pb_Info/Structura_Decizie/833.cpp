#include <iostream>

int main(){

    int a,b;
    std::cin>>a>>b;
    if(a>b)
    {
        std::cout<<"Primul copil este mai mare cu "<<a-b<<" ani";
    }
    else if (a==b)
    {
        std::cout<<"Copiii au varste egale";
    }
    
    else
    {
        std::cout<<"Al doilea copil este mai mare cu "<< b-a<<" ani";
    }
    

    return 0;
}