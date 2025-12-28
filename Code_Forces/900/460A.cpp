#include <iostream> 

using namespace std;

int main(){

    int a,b,result=0;
    cin>>a>>b;

    result += a;
    while (a>=b)
    {
        int temp;
        result += a/b;
        temp =  a;
        a /=b;
        if(temp%b!=0) a += temp%b;
    }
    cout<<result;


    return 0;
}