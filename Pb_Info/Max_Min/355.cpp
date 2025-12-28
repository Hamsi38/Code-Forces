#include <iostream>
#include <limits>
#include <algorithm>


using namespace std;

int main(){

    int t;
    cin>>t;
    int x,nr_min = 999999999;
    while (t--)
    {
        cin>>x;
        if(nr_min > x) nr_min = x;
    }
    cout<<nr_min;
    return 0;
}