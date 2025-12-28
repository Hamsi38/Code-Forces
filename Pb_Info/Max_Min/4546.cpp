#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    int a;
    cin>>a;
    vector <int> vec;


    if (a!=0)
    {
        long long nrmax;
        vec.push_back(a);
        while (a>0)
        {
            cin>>a;
            if(a==0) break;
            vec.push_back(a);
        }
        sort(vec.begin(),vec.end());
        int cnt = vec.size();
        int con = 0;
        for (int i = cnt-1; i > -1; i--)
        {
            if(vec[cnt-1]!=vec[i])
            {
                nrmax = (long long)(vec[cnt-1]*vec[i]);
                cout<<nrmax;
                break;
            }
        }
        
    }
    else
    {
        cout<<"NU EXISTA";
    }
    
    

    return 0;
}