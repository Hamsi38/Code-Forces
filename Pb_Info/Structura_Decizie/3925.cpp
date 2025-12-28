#include <iostream>

using namespace std;

int main(){

    long long n,c,r,m;
    cin>>n>>c>>r;
    m = r+c*((n-r)/c+1);
    cout<<m;

    return 0;
}