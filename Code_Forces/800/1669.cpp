#include <iostream>

int main(){

    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int a,b;
    std::cin>>a;
    for (int i = 0; i < a; i++)
    {
        std::cin>>b;
        if(1900 <=b) std::cout<<"Division 1"<<std::endl;
        else if(1600<=b && b <1900) std::cout<<"Division 2"<<std::endl;
        else if(1400<=b && b<1600) std::cout<<"Division 3"<<std::endl;
        else std::cout<<"Division 4"<<std::endl;
    }
    
    return 0;
}