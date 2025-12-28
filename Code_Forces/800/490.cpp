#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    int n;
    std::cin>>n;  
    std::vector <int> P,M,S;
    int p=0,m=0,s=0;
    if (n >= 3)
    {
        for (int i = 0; i < n; i++)
        {
            int a;
            std::cin>>a;
            if(a==1){
                P.push_back(i+1);
                p++;
            }
            else if(a==2)
            {
                M.push_back(i+1);
                m++;
            }
            else
            {
                S.push_back(i+1);
                s++;
            }
        }
        int x;
        x = std::min({p,s,m});
        std::cout<<x<<std::endl;
        for (int i = 0; i < x; i++)
        {
            std::cout<<P[i]<<" "<<M[i]<<" "<<S[i]<<std::endl;
        }
    }
    else
    {
        std::cout<<0;
    }

    return 0;
}