#include <iostream>

using namespace std;

int main(){

    long long n,p,x = 1;
    cin>>n>>p;


    while ( x <= p)
    {
        cout<<x<<" ";
        x *= n;
    }
    

    return 0;
}