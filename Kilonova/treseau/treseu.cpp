#include <iostream>
#include <fstream>
#include <vector>
#include <set>

using namespace std;

int main(){

    ifstream input("treseu.in");
    ofstream output("treseu.out");

    int a,b,t;
    cin>>a>>b;
    t = a;
    int arr[a];
    int array[a];
    int y = 0;
    int l = 0;

    while (a--)
    {
        int x;
        cin>>x;
        array[l] = x;
        l++;
        int cnt = 0;
        if (x%2==0) // factor 2
        {
            cnt++;
            while (x%2==0) x /= 2;
        }
        for (long long i = 3; i*i <= x; i+=2)
        {
            if (x%i==0)
            {
                cnt++;
                while (x%i==0) x /= i;
            }
        }
        if(x > 1) cnt++;
        
        arr[y] = cnt;
        y++;
    }
    int index_max = -1;
    for (int i = 0; i < t-1; i++)
    {
        if (arr[i] >  arr[i+1])
        {
            index_max = i;
        }
    }
    
    if (b==1)
    {
        for (int i = 0; i < t; i++)
        {
            if(arr[index_max]==arr[i]) cout<<array[i]<<" ";
        }
    }
    else
    {
        int cnt=0;

        
    }
    
    


    return 0;
}