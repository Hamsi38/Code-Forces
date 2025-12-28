#include <iostream>

using namespace std;

int main(){

    int n,m;
    cin>>n>>m;
    if (min(n-1,m-1)%2==0)
    {
        cout<<"Akshat";
    }
    else cout<<"Malvika";
    
    return 0;
}
