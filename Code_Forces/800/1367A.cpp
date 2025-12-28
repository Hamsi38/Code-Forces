#include <iostream>
#include <string>

int main(){

    int n;
    std::cin>>n;
    std::string str,new_str;
    while (n--)
    {
        std::cin>>str;
        for (int i = 0; i < str.size()-2; i+=2)
        {
            new_str += str[i];
        }
        new_str += str[str.size()-2];
        new_str += str[str.size()-1];
        std::cout<<new_str<<std::endl;
        new_str.clear();
    }
    

    return 0;
}