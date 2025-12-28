#include <iostream>


int main(){

    int a;
    std::cin>>a;

    if (a/10000 == a%10000) std::cout<<"DA";
    else std::cout<<"NU";
    

    return 0;
}