#include <iostream>

int main(){

    int n,m,flag = 0;
    std::cin>>n;

    for (int i = 0; i < n; i++)
    {
        std::cin>>m;
        if (m ==1)
        {
            flag =1;
            break;
        }
    }  
    if (flag==0)
    {
        std::cout<<"EASY";
    }
    else{
        std::cout<<"HARD";
    }
    return 0;
}