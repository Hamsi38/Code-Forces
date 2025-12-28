#include <iostream>

using namespace std;

int main(){

    int x,sum=0;
    cin>>x;
    if(x%10==(x/10)%10) sum += x;
    while (x!=0)
    {
        cin>>x;
        if(x%10==(x/10)%10 && x<100 && x > 9) sum += x;
    }
    cout<<sum;

    return 0;
}