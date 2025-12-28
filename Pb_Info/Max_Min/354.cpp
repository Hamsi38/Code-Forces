#include <iostream>
#include <algorithm>
#include <limits>


using namespace std;

int main(){

    int t;
    cin>>t;
    long long x,y = -999999999;
    while (t--)
    {
        cin>>x;
        if(x > y ) y = x;
    }
    cout<<y;
    return 0;
}