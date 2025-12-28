#include <iostream>

int main(){

    int t;
    std::cin>>t;
    int a,b,c;
    while (t--)
    {
        std::cin>>a>>b>>c;
        if(a<b && b>c) std::cout<<"PEAK"<<std::endl;
        else if(a<b && b<c)std::cout<<"STAIR"<<std::endl;
        else std::cout<<"NONE"<<std::endl;
    }
    

    return 0;
}