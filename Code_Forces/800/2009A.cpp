#include <iostream>

int main(){

    int t;
    std::cin>>t;
    for (int i = 0; i < t; i++)
    {
        int a,b,c,result = 0;
        std::cin>>a>>b;
        c = b;
        result = (c-a)+(b-c);
        std::cout<<result<<std::endl;
    }
    

    return 0;
}