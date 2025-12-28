#include <iostream>
#include <string>

using namespace std;


int main(){
    int arr[30]= {'q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l',';','z','x','c','v','b','n','m',',','.','/'};
    char d;
    string str;
    cin>>d>>str;
    if (d=='L')
    {
        for (int i = 0; i < str.size(); i++)
        {
            for (int j = 0; j < 30; j++)
            {
                if (str[i]==arr[j])
                {
                    str[i]=arr[j+1];
                    break;
                }
            }
            
        }
    }
    else
    {
        for (int i = 0; i < str.size(); i++)
        {
            for (int j = 0; j < 30; j++)
            {
                if (str[i]==arr[j])
                {
                    str[i]= arr[j-1];
                    break;
                }
                
            }
            
        }
    }
    cout<<str;
    return 0;
}