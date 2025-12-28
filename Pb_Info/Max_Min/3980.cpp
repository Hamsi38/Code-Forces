#include <iostream>

using namespace std;


int main(){

    int t;
    cin>>t;
    int nr_max=999999,nr_min=-999999,x;
    while (t--)
    {
        cin>>x;
        if(x > nr_min) nr_min = x;
        if(x < nr_max) nr_max = x;
    }
    cout<<nr_max+nr_min;

    return 0;
}