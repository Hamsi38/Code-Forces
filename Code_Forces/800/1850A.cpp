#include <iostream>

int main(){

    int t;
    std::cin>>t;
    while (t--)
    {
        int a,b,c;
        std::cin>>a>>b>>c;
        if(a+b >= 10){
            std::cout<<"YES"<<std::endl;
        }
        else if (a+c>=10)
        {
            std::cout<<"YES"<<std::endl;
        }
        else if (c+b >= 10)
        {
            std::cout<<"YES"<<std::endl;
        }
        else
        {
            std::cout<<"NO"<<std::endl;
        }        
    }
    

    return 0;
}