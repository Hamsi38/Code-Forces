#include <iostream>
#include <string>

int main(){

    int n;
    std::cin>>n;
    std::string love = "I love ";
    std::string hate = "I hate ";
    std::string str;

    for (int i = 1; i < n; i++)
    {
        if(i%2==0)
        {
            str += love;
            str += "that ";
        }
        else
        {
            str += hate;
            str += "that ";
        }
    }
    if (n%2==0)
    {
        str += "I love it";
    }
    else
    {
        str+="I hate it ";
    }
    
    
    std::cout<<str;
    
    return 0;
}