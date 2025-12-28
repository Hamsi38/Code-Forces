#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    int a,b,result=0,cnt=0;
    cin>>a>>b;
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+a);
    for (int i = 0; i < b; i++)
    {
        if (arr[i]<0)
        {
            result += arr[i];
        }
        
    }
    if(result<0) result *= -1;
    else result = 0;
    cout<<result;

    return 0;
}