#include <iostream>

int main(){

    int n,cnt=0,m,min = 0, max = 0;
    std::cin>>n;
        std::cin>>m;
        max = m;
        min = m;
        int a;
    for (int i = 0; i < n-1; i++)
    {
        std::cin>>a;
        if(a > max) {
            max = a;
            cnt++;
        }
        else if(a < min){
            min  = a;
            cnt++;
        }
    }
    std::cout<<cnt;
    return 0;
}