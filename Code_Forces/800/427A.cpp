#include <iostream>
#include <vector>

int main(){

    int n,a,result=0,police=0;
    std::cin>>n;
    for (int i = 0; i < n; i++)
    {
        std::cin>>a;
        if(police>0 && a<0){
            police--;
        }
        else
        {
            if(a<0) result++;
            else if(a>0) police+=a;
        }
    }
    std::cout<<result;
    return 0;
}