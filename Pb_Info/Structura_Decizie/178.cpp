#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int n;
    cin>>n;
    int a;
    a = sqrt(n);
    if (a*a == n)
    {
        cout<<"da";
    }
    else cout<<"nu";

    return 0;
}