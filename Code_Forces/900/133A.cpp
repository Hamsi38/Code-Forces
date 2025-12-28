#include <iostream>
#include <string>

int main(){

    std::string str;
    std::cin>>str;

    for (char c : str)
    {
        if (c == 'H' || c == 'Q' || c == '9' )
        {
            std::cout<<"YES";
            return 0;
        }
        
    }
    std::cout<<"NO";
    

    return 0;
}