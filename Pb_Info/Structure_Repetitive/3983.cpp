#include <iostream>

using namespace std;


int main(){

    int n,m;
    cin>>n>>m;
    
    int a;
    a =n*m;
    while (a>0)
    {
        cout<<a<<" ";
        a -= m;
    }
    

    return 0;
}