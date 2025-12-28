#include <iostream>

// bool power(long long n);

// int main(){
//     int t;
//     long long n;
//     std::cin>>t;

//     for (int i = 0; i < t; i++)
//     {
//         std::cin>>n;
//         if (power(n))
//         {
//             std::cout<<"NO"<<std::endl;
//         }
//         else
//         {
//             std::cout<<"YES"<<std::endl;
//         }
//     }
//     return 0;
// }

// bool power(long long n){
//     while (n%2==0)
//     {
//         n /=2;
//     }
//     return n==1;
// }

// Bitwise operators

int main(){
    int t;
    long long n;
    std::cin>>t;

    int flag = 0;
    for (int i = 0; i < t; i++)
    {
        std::cin>>n;
        if (n & (n-1))
        {
            std::cout<<"YES"<<std::endl;
        }
        else
        {
            std::cout<<"NO"<<std::endl;
        }
    }

    return 0;
}
