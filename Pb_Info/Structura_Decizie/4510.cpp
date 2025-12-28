#include <iostream>

using namespace std;

int main(){

    int a,b,result=0;
    cin>>a>>b;
    if ((a%2==0 && b%2==0) || (a%2==1 && b%2==1))
    {
        result = a%10 + a/10 + b%10 + b/10;
    }
    else
    {
        result = (a%10)*(a/10)*(b%10)*(b/10);
    }
    cout<<result;

    return 0;
}