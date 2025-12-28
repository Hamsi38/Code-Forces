#include <iostream>
#include <string>

int main(){

    std::string str;
    int arr[4];
    for (int i = 0; i < 4; i++)
    {
        std::cin>>arr[i];
    }
    std::cin>>str;
    int sum = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if(str[i]=='1') sum += arr[0];
        else if(str[i]=='2') sum += arr[1];
        else if(str[i]=='3') sum += arr[2];
        else if(str[i]=='4') sum += arr[3];
    }
    std::cout<<sum;

    return 0;
}