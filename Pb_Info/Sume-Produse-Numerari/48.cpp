#include <iostream>

using namespace std;

int main(){

    int n;
    cin>>n;
    int sum =0;
    for (int i = 1; i <= n; i++)
    {
        int x = i*i;
        if(x<=n){
            sum += x;
        }
    }
    cout<<"Rezultatul este "<<sum;
    return 0;
}