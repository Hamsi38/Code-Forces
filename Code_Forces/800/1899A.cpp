#include <iostream>

int main(){

    int t;
    std::cin>>t;
    while (t--)
    {
        int a;
        std::cin>>a;
        if ((a+1)%3==0 || (a-1)%3==0)
        {
            std::cout<<"First"<<std::endl;
        }
        else std::cout<<"Second"<<std::endl;
    }
    

    return 0;
}