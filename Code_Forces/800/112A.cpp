#include <iostream>
#include <string>
#include <algorithm> // <-- required for std::transform

using namespace std;

int main(){

    string input1;
    string input2;

    cin>>input1>>input2;

    transform(input1.begin(),input1.end(), input1.begin(),[] (unsigned char c) { return tolower(c);});
    transform(input2.begin(),input2.end(),input2.begin(), [] (unsigned char c){ return tolower(c);});

    if (input1==input2) cout<<0;
    else if(input1>input2)    cout<<1;
    else cout<<-1; 

    return 0;
}

/*

#include <iostream>
#include <string>

using namespace std;

int main(void){

    string input1;
    string input2;

    cin>>input1>>input2;

    int len,con=0;
    len = input1.length();

    for (int i = 0; i < len; i++)
    {
        if(tolower(input1[i])>tolower(input2[i])){
            con = 1;
            break;
        }
        else if(tolower(input1[i])<tolower(input2[i])){
            con = -1;
            break;
        }
    }
    cout<<con;

    return 0;
}


*/