#include <iostream>

int main(){

    int a,b, cnt =0;
    std::cin>>a>>b;

    while (a<=b)
    {
        a *= 3;
        b *= 2;
        cnt++;
    }

    std::cout<<cnt;

    return 0;
}