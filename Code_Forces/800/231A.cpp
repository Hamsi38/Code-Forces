#include <iostream>

using namespace std;

int main(void){

    int n,solution = 0;
    cin>>n;
    
    while (n--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        solution += (a+b+c) >= 2;
    }
    
    cout<<solution;

    return 0;
}

/*
    for (int i = 0; i < n; i++)
    {
        int cnt=0;
        for (int  j = 0; j < 3; j++)
        {
            cin>>x;
            if (x ==1)
            {
                cnt++;
            }
        }
        if (cnt>=2)
        {
            solution++;
        }
        
    }
*/