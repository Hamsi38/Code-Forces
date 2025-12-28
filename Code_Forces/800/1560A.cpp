#include <iostream>


int main(){

    int t;
    std::cin>>t;

    while (t--)
    {
        int n;
        std::cin>>n;
        int i=0,j=1,ans=0;
        while (i!=n)
        {
            if (j%3!=0 && j%10!=3)
            {
                ans = j;
                i++;
            }
            j++;
        }
        std::cout<<ans<<std::endl;
    }
    
    
    return 0;
}