#include <iostream>

using namespace std;
int main(){

    int c,n,k;
    cin>>c>>n>>k;
    if (c==1)
    {
        cout<<n+n-1;
    }
    else
    {
        cout<<2*(n-k)+1;
    }
    
    

    return 0;
}