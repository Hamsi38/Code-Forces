#include <iostream>
#include <string>

using namespace std;

int main(){
    
    int n;
    cin>>n;
    string word;
    char first,last;

for (int i = 0; i < n; i++)
{
    cin>>word;
    int len = word.length();
    if (len>10){
        first = word[0];
        last  = word[len-1];
        string int_nr = to_string(len-2);
        string new_word = first + int_nr + last;
        cout<<new_word<<endl;
    } 
    else{
        cout<<word<<endl;
    }
}
    return 0;
}