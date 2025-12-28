#include <iostream>

using namespace std;

int main(){

    int n;
    cin>>n;
    if (16<= n && n <= 30)
    {
        cout<<(n%10)+(n/10);
    }
    else if (n <= 15)
    {
        cout<<n*n;
    }
    else
    {
        cout<<(n%10)*(n/10);
    }
    

    return 0;
}