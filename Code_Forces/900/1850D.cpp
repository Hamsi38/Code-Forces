#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    int t;
    cin>>t;
    while (t--)
    {
        int a,b;
        cin>>a>>b;
        int arr[a];
        for (int i = 0; i < a ; i++)
        {
            cin>>arr[i];
        }   
        sort(arr,arr+a);
        int curr = 1;
        int total = 0;
        for (int i = 0; i < a-1; i++)
        {
            if (abs(arr[i]-arr[i+1])<=b)
            {
                curr++;
            }
            else
            {
                total = max(total,curr);
                curr = 1;
            }
            
        }
        total = max(total,curr);
        cout<<a-total<<endl;
    }
    

    return 0;
}