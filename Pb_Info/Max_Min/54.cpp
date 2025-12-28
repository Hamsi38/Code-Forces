#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    int nr_max = -1000001;
    int a;
    cin>>a;
    if (a!=0)
    { 
        if(a > nr_max) nr_max = a;
        while (a!=0)
        {
            cin>>a;
            if(a==0) break;
            nr_max = max(nr_max,a);
        }
        cout<<nr_max;
    }
    else
    {
        cout<<"NU EXISTA";
    }
    
    

    return 0;
}