#include <iostream>
#include <cmath>

using namespace std;


int main(){

    int n;
    cin>>n;
    double result = 1;
    double m,k;
    k = n;
    while (n--)
    {
        cin>>m;
        result *= m;
    }
    
    cout<<pow(result,1.0/k);

    return 0;
}