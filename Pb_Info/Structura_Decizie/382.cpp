#include <iostream>

using namespace std;

int main(){

    int n,k,rest;
    cin>>n>>k;
    rest = n%k;
    if (rest <= k/2)
    {
        cout<<n-rest;
    }
    else
    {
        cout<<n+(k-rest);
    }
    

    return 0;
}