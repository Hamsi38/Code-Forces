#include <iostream>
#include <string>
#include <algorithm>


int main(){

    std::string str;
    std::cin>>str;
    int flag = 1;
    for (int i = 0; i < str.size(); i++)
    {
        if(str[i]=='W' && str[i+1]=='U' && str[i+2]=='B'){
            i+=2;
            if(!flag){
                std::cout<<" ";
            }
        }
        else
        {
            flag = 0;
            std::cout<<str[i];
        }
        
    }
    

    return 0;
}

