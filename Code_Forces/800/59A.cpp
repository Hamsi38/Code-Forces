#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>

int main(){

    std::string str;
    std::cin>>str;

    int upper = 0, lower = 0;

    for (int i = 0; i < str.size(); i++)
    {
        if (isupper(str[i])) upper++;
        else lower++;
    }

    if (lower >= upper)
    {
        std::transform(str.begin(), str.end(), str.begin(),[] (unsigned char c){return ::tolower(c);});
        std::cout<<str;
    }
    else
    {
        std::transform(str.begin(), str.end(), str.begin(), [](unsigned char c){return :: toupper(c);});
        std::cout<<str;
    }

    return 0;
}

/*
#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::string str;
    std::cin >> str;

    int upper = 0, lower = 0;

    for (char ch : str) {
        if (std::isupper(static_cast<unsigned char>(ch))) 
            ++upper;
        else 
            ++lower;
    }

    if (lower >= upper) {
        std::transform(str.begin(), str.end(), str.begin(),
                       [](unsigned char c) { return std::tolower(c); });
    } else {
        std::transform(str.begin(), str.end(), str.begin(),
                       [](unsigned char c) { return std::toupper(c); });
    }

    std::cout << str;
    return 0;
}
*/