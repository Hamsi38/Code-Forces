#include <iostream>

int main(){

    long long n,m;
    std::cin>>n;
    m = n;
    int cnt = 0;

    while (m != 0)
    {
        int a  = m%10;
        if(a == 4 || a == 7) cnt++;
        m /= 10;
    }

    if (cnt == 4 || cnt == 7)
    {
        std::cout<<"YES";
    }
    else
    {
        std::cout<<"NO";
    }
    
    

    return 0;
}