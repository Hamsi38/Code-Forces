#include <iostream>
#include <cmath>

using namespace std;


int main(){

    int n;
    cin>>n;
    while (n--)
    {
        double a;
        cin>>a;
        int x = sqrt(a);
        if (x*x == a) cout<<"DA"<<endl;
        else cout<<"NU"<<endl;
        
    }
    

    return 0;
}