#include <iostream>
#include <cmath>


using namespace std;


int main(){

    int a,b;
    cin>>a>>b;

    long long x = 0;
    int i = 0;

while (x <= b)
{
    x = pow(a,i);
    i++;
    if (x<=b) cout<<x<<" ";
}



    return 0;
}