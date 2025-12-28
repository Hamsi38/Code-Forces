#include <iostream>

int main(){
    
    int S,d,r,m,x;
    std::cin>>S>>d>>r>>m;
    if(S<d && S<r && S<m) std::cout<<"nimic";
    else
    {
        if (S>=d)
        {
            std::cout<<"drona";
        }
        else if (S>=r && S<d)
        {
            std::cout<<"robot";
        }
        else if(S>=m && S<r && S<d)
        {
            std::cout<<"masina";
        }
        
        
    }
    



    return 0;
}