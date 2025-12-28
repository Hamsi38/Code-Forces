#include <iostream>
#include <string>
#include <unordered_set>
#include <cctype>
#include <algorithm>


int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::unordered_set <char> chars;

    std::string str;
    std::getline(std::cin,str);

    int n = str.size();
    for (int i = 0; i < n; i++)
    {
        if (isalpha(str[i]))
        {
            chars.insert(str[i]);
        }
    }
    std::cout<<chars.size();
    return 0;
}