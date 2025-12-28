#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    int n,k=0,a,b,con=0;
    cin>>n;
    vector <int> vec;
    while (n>0)
    {
        a = n%10;
        n /= 10;
        b =n%10;
        n /= 10;
        vec.push_back(a);
        vec.push_back(b);
        if (a==b )
        {
            k++;
        }
        else
        {
            cout<<"nenorocos";
            con=1;
            break;
        }
        
    }
    if (con==0) cout<<k;
    

    return 0;
}