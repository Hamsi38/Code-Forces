#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    int n,x,y,val,V,i,j;
    cin>>n>>x>>y>>val;

    V = (x-1)*n+y;
    cout<<V<<" ";
    if (val%n==0)
    {
        i = ceil(val/n);
    }
    else
    {
        i = val/n + 1;
    }
        j = val - (i-1)*n;
    cout<<i<<" "<<j;

    return 0;
}