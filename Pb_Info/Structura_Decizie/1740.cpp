#include <iostream>

using namespace std;

int main(){

    long long a,b,x=0;
    cin>>a>>b;
    x = (a-((b*(b-1))/2))/b;
    if (x>=0 && (a-((b*(b-1))/2))%b==0)
    {
        cout<<"DA";
    }
    else cout<<"NU";


    return 0;
}