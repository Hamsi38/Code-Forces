#include <iostream>

using namespace std;

int main(void){

    int n,x;
    cin>>n;
    long long sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin>>x;
        if (x>9 && x<100)
        {
            sum += (long long)x;
        }
    }
    cout<<sum;
    return 0;
}