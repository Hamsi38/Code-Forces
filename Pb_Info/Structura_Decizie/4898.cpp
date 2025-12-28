#include <iostream>

using namespace std;

int main(){

    int n,m;
    cin>>n>>m;
    if (m<n) cout<<"Sunt prea multi ciobani";
    else if (m%n==0)
    {
        cout<<m/n;
    }
    else
    {
        int minim,maxim;
        minim = m/n;
        maxim = m/n + 1;
        cout<<maxim<<" "<<minim;
    }
    

    return 0;
}