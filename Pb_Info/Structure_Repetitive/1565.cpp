#include <iostream>

using namespace std;

int main(){

    long long n,a,result,x=1;
    cin>>n>>a;

    while (a--)
    {
        x *= 10;
    }
    

    result = n*x;
    cout<<result;

    return 0;
}