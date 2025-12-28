#include <iostream>

using namespace std;

int main(){

    int n,k,advance=0;
    cin>>n>>k;

    if(n>=k && n>=1 && k>=1){
        int arr[n];
        for (int i = 0; i < n; i++)
        {   
            cin>>arr[i];
        }
        for (int j = 0; j < n; j++)
        {
            if(arr[j]>=arr[k-1] && arr[j]!=0) advance++;
        }
        cout<<advance;
    }

    return 0;
}