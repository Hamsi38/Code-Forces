#include <iostream>

int main(){

    int cnt = 0,n;
    std::cin>>n;
    std::string input;
    std::cin>>input;
    char curr,next;

    for (int i = 0; i < n - 1; i++)
    {
        curr = input[i];
        next = input[i+1];
        if (curr == next) cnt++;
    }
    std::cout<<cnt;

    return 0;
}