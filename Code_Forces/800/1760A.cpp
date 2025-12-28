#include <iostream>

int main(){

    int t;
    std::cin>>t;
    while (t--)
    {
        int a,b,c;
        std::cin>>a>>b>>c;
        if ((b<a || c<a) && (a<b || a<c)) std::cout<<a<<std::endl;
        else if((a<b || c<b) && (b<a || b<c)) std::cout<<b<<std::endl;
        else  std::cout<<c<<std::endl;
        
    }
    

    return 0;
}