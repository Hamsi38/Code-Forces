#include <iostream>
#include <string>
#include <algorithm>

int main(){

    int n;
    std::cin>>n;
    for (int i = 0; i < n; i++)
    {
        std::string a,b;
        std::cin>>a>>b;
        std::swap(a[0],b[0]);
        std::cout<<a<<" "<<b<<std::endl;
    }
    

    return 0;
}