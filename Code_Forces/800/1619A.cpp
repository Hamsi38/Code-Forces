#include <iostream>
#include <string>

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    string str,sub1,sub2;
    while (t--)
    {
        cin>>str;
        int a = str.size();
        if (a%2==0)
        {
            sub1 = str.substr(0,a/2);
            sub2 = str.substr(a/2,a/2);
            if (sub1==sub2)
            {
                cout<<"YES"<<endl;
            }
            else cout<<"NO"<<endl;

        }
        else cout<<"NO"<<endl;
        str.clear();
        sub1.clear();
        sub2.clear();
    }
    


    return 0;
}