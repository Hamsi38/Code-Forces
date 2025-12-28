#include <iostream>

using namespace std;


int main(){

    int a,r,n;
    cin>>a>>r>>n;
    
    while (n--)
    {
        cout<<a<<" ";
        a +=r;
    }
    
    

    return 0;
}