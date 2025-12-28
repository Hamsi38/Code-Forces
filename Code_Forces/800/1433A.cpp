#include <iostream>

using namespace std;

int main(){

    int t;
    cin>>t;
    int arr[9] = {1,2,3,4,5,6,7,8,9};
    while (t--)
    {
        int a;
        cin>>a;
        int b,result = 0;
        for (int i = 0; i < 9; i++)
        {
            if (a%10 == arr[i])
            {
                b = arr[i];
                break;
            }
        }
        if (a<10)
        {
            result = 10*(b-1)+1;
        }
        else if (9<a && a<100)
        {
            result = 10*(b-1)+3;
        }
        else if (99<a && a<1000)
        {
            result = 10*(b-1)+6;
        }
        else result = 10*b;
        cout<<result<<endl;
    }
    

    return 0;
}