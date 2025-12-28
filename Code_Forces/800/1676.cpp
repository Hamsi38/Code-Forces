#include <iostream>
#include <string>

int main(){

    int n;
    std::cin>>n;
    std::string str;
    for (int i = 0; i < n; i++)
    {
        std::cin>>str;
        if((str[0]+str[1]+str[2])==(str[3]+str[4]+str[5]))
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