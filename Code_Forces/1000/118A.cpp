#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_set>

int main(){

    std::string str,new_str;
    std:: unordered_set<char> vowels = {'a','o','y','u','i','e'};
    std::cin>>str;


    std::transform(str.begin(),str.end(),str.begin(),::tolower);

    for(char c: str){
        if (vowels.find(c) == vowels.end())//“If c is not in the set of vowels”
        {
            new_str +='.';
            new_str += c;
        }
        
    }

    std::cout<<new_str;

    return 0;
}
//! this is mine 
/*
    std::transform(str.begin(),str.end(),str.begin(),[](unsigned char c){ return std::tolower(c);});

    for (unsigned int i = 0; i < strlen(vowels)-1; i++)
    {
        str.erase(std::remove(str.begin(),str.end(),vowels[i]),str.end());
    }

    for(char c: str){

        new_str +='.';
        new_str += c;
    }

    std::cout<<new_str;
*/