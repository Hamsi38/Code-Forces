#include <iostream>

using namespace std;

int main(){

    int n;
    cin>>n;
    int a = n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout<<"*";
        }
        for (int l = 4*a-1; l > 1; l-=2)
        {
            cout<<" ";
        }
        a--;
        for (int p = 0; p < n; p++)
        {
            cout<<" ";
        }
        for (int k = 0; k <= i; k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<" ";
        }
        for (int k = 0; k < n; k++)
        {
            cout<<"*";
        }
        
        cout<<endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = n; j > i ; j--)
        {
            cout<<"*";
        }
        for (int k = n + i*2; k > 0 ; k--)
        {
            cout<<" ";
        }
        for (int l = n; l > i; l--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    

    return 0;
}