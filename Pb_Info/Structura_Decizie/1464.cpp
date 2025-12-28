#include <iostream>

using namespace std;

int main(){

    long long int P,K,result;
    cin>>P>>K;
    long long int a = K;
    a -=1;
    if (a%2==0)
    {
        result = (a/2)*20 + (a/2)*10 + P;
    }
    else
    {
        long long int b = a/2;
        result = b*20 + (b+1)*10 + P;
    }
    
    cout<<result;
    return 0;
}