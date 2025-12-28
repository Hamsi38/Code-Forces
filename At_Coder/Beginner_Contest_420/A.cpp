#include <iostream>

int main(){

    int x,y,result=0;
    std::cin>>x>>y;
    result = (x+y)%12;
    if (result == 0)
    {
        result = 12;
    }
    
    std::cout<<result;

    return 0;
}