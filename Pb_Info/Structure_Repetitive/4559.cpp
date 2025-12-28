#include <iostream>

using namespace std;


int main(){

    int t;
    cin>>t;
    for (int i = 1; i <= t; i++)
    {
        for (int j = 1; j < i; j++)
        {
            cout<<" ";
        }
        for (int n = 0; n < i; n++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for (int i = t; i > 1; i--)
    {
        for (int j = 2; j < i; j++)
        {
            cout<<" ";
        }
        for (int k = 1; k < i; k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    

    return 0;
}