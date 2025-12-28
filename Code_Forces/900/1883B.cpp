#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){

    int t;
    cin>>t;
    string str;
    while (t--)
    {
        int n,k,cnt=0;
        cin>>n>>k>>str;
        sort(str.begin(),str.end());
        int odd=0;
        for (int i = 0; i < n; i++)
        {
            if (str[i]==str[i+1]) odd++;
            else break;
        }
        if(odd%2==1) cnt++;
    }
    

    return 0;
}
