#include <iostream>

int main(){

    int n,a,b,eq,x;
    std::cin>>n;

    for (int i = 0; i < n; i++)
    {
        std::cin>>a>>b;
        if (a%b==0)
        {
            eq = 0;
        }
        else
        {
        x = a%b;
        eq = b-x;
        }
        std::cout<<eq<<std::endl;
    }

    return 0;
}