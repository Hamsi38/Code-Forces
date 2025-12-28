#include <iostream>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b;
    cin>>a>>b;
    if ((a>0 && b>a) || (a<0 && b<0))
    {
        cout<<"da";
    }
    else cout<<"nu";

    return 0;
}