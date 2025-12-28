#include <iostream>

int main(){

    int t;
    std::cin>>t;
    while (t--)
    {
        int a;
        std::cin>>a;
        int arr[a];
        int odd = 0;
        int even = -1;
        if (a%4==0)
        {
            std::cout<<"YES"<<std::endl;
            for (int i = 0; i < a/2; i++)
            {
                odd += 2;
                arr[i] = odd;
            }
            for (int i = a/2; i < a-1; i++)
            {
                even += 2;
                arr[i] = even;
            }
            arr[a-1] = ((a/2)*((a/2)+1)) - ((a/2-1)*(a/2-1));
            for (int i = 0; i < a; i++)
            {
                std::cout<<arr[i]<<" ";
            }
            std::cout<<std::endl;
        }
        else
        {
            std::cout<<"NO"<<std::endl;
        }
        
    }
    

    return 0;
}