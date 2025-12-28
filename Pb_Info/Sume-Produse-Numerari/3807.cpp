#include <iostream>
// VERY GOOD QUESTIONS AND HARD TO IMPLEMENT 
using namespace std;

int main(){


    int n;
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        unsigned long long x,y=0;// omfg because of this fucking unsigned i tried to solve this problem over 2 days 
        cin>>x;
        long long A = x;
        long long B = x+1;
        long long C = x+2;
        bool div_2 = false;
        bool div_3 = false;

        if(A%2==0 && !div_2) A /=2 ,div_2=true;
        else if (B%2==0 && !div_2) B/=2, div_2=true;
        else if (C%2==0 && !div_2) C /=2, div_2=true;

        if(A%3==0 && !div_3) A/=3 ,div_3=true;
        else if(B%3==0 && !div_3) B/=3, div_3=true;
        else if(C%3==0 && !div_3) C /=3,div_3=true;

        y = A*B*C;
        cout<<y<< " ";
    }
    
    return 0;
}

