#include <iostream>
#include <string>
#include <set>
#include <algorithm>

int main(){

    int n;
    std::string str;
    std::cin>>n>>str;
    std::transform(str.begin(), str.end(), str.begin(), [](unsigned char c){ return std::tolower(c);});
    std::set<char> elements;

    for(char c:str){
        elements.insert(c);
    }
    if (elements.size()==26)
    {
        std::cout<<"YES";
    }
    else
    {
        std::cout<<"NO";
    }
    
    return 0;
}