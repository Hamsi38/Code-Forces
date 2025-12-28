#include <iostream>

using namespace std;

int main(){

    int t;
    char c;
    cin>>t>>c;

    for (int i = 1; i <= t; i++)
    {
        for (int k = t; k > i ; k--)
        {
            cout<<" ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout<<c;
        }
        cout<<endl;
    }
    for (int i = t; i > 0; i--)
    {
        for (int k = 1; k <= i; k++)
        {
            cout<<c;
        }
        cout<<endl;
    }
    

    return 0;
}