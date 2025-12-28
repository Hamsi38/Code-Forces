#include <iostream>

using namespace std;

int main(){

    int n;
    cin>>n;
    if (n%3==0)
    {
        int x;
        x = (n-3)/3;
        cout<<x<<" "<<x+1<<" "<<x+2;
    }
    else cout<<"NU EXISTA";
    



    return 0;
}