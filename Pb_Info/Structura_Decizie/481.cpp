#include <iostream>
#include <cmath>

using namespace std;


int main(){

    int n;
    cin>>n;
    if (n%2==0)
    {
        int x;
        x = sqrt(n);
        cout<<x<<" "<<x+1;
    }
    else cout<<"NU EXISTA";

    return 0;
}