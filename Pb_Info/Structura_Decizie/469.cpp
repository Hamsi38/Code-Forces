#include <iostream>

int main(){

    int a,b,x;
    std::cin>>a>>b>>x;
    if (a<=x && x<=b)
    {
        std::cout<<"DA";
    }
    else{
        std::cout<<"NU";
    }
    

    return 0;
}