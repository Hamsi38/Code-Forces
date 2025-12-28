#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    int arr[5];
    int suma = 0;
    for (int i = 0; i < 5; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+5);

    suma += arr[4];
    suma += arr[3];
    suma += arr[2];

    cout<<suma;

    return 0;
}