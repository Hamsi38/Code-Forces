#include <iostream>
#include <string>

int main(){

    int n;
    std::cin>>n;
    while (n--)
    {
        std::string str;
        std::cin>>str;
        if (str[0]=='a')
        {
            std::cout<<"YES"<<std::endl;
        }
        else if (str[1]=='b')
        {
            std::cout<<"YES"<<std::endl;
        }
        else if (str[2]=='c')
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