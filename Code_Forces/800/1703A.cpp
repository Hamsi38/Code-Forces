#include <iostream>
#include <string>
#include <algorithm>

int main(){

    int n;
    std::cin>>n;

    std::string str, a = "YES";
    for (int i = 0; i < n; i++)
    {
        std::cin>>str;
        std::transform(str.begin(), str.end(),str.begin(), ::toupper);
        if(str == a){
            std::cout<<a<<std::endl;
        }
        else std::cout<<"NO"<<std::endl;
    }
    
    return 0;
}