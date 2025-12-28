#include <iostream>

using namespace std;

int main(){

    int a,b,result=0,n,diff;
    cin>>a>>b;
    diff = abs(a-b);
    if (diff%2==0)
    {
        n = diff/2;
        result = 2 *(n*(n+1)/2);
    }
    else
    {
        n = (diff-1)/2;
        result = (n*(n+1)/2) + ((n+1)*(n+2)/2);
    }
    cout<<result;


    return 0;
}