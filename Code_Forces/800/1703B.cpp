#include <iostream>
#include <set>
#include <string>



using namespace std;

int main(){

    int t;
    cin>>t;
    set <char> st;
    while (t--)
    {
        int cnt = 0,x;
        string str;
        cin>>x>>str;
        for (int i = 0; i < x; i++)
        {
            if(st.find(str[i]) != st.end())
            {
                cnt++;
            }
            else
            {
                cnt +=2;
                st.insert(str[i]);
            }
            
        }
        cout<<cnt<<endl;
        str.clear();
        st.clear();
    }
    

    return 0;
}