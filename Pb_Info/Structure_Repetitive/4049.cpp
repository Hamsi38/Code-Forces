#include <iostream>
#include <cmath>

using namespace std;

int main(){

    long long n,con = 1;
    cin>>n;
    con *= pow(10,n-1);

    while (con++)
    {
        if (con%n==0)
        {
            cout<<con;
            break;
        }
        
    }
    

    return 0;
}