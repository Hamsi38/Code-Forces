#include <iostream>

using namespace std;

int main(){

    int a,b;
    cin>>a>>b;
    if (a>b)
    {
        cout<<(a+b)-1<<endl<<"para";

    }
    else if (a==b)
    {
        if (a%2==0 && b%2==0)
        {
            cout<<a+b-1<<endl<<"para";
        }
        else cout<<a+b-1<<endl<<"mar";
    }
    else
    {
        cout<<(a+b)-1<<endl<<"mar";
    }
    return 0;
}