#include <iostream>

int main(){

    int t;
    std::cin>>t;
    for (int i = 0; i < t; i++)
    {
        int a,max=0,cnt=0;
        std::cin>>a;
        for (int j = 0; j < a; j++)
        {
            int b;
            std::cin>>b;
            if(b==0){
                max++;
            }
            else max = 0;
            if(max>cnt) cnt=max;
        }
        std::cout<<cnt<<std::endl;
    }
    

    return 0;
}