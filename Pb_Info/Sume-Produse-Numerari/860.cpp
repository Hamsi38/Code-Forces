#include <iostream>

int main(){

    int n,C,M=0,x,volum =0,a=0;
    std::cin>>n>>C;

    for (int i = 0; i < n; i++)
    {
        std::cin>>x;
        if (x<=C)
        {
            volum += x;
            if (volum > C )
            {
                M++;
                volum = x;
            }
            else if(volum == C)
            {
                M++;
                volum = 0;
            }
        }
    }
    std::cout<<M+1;//! even if not full last truck i gonna go anyway

    return 0;
}