#include <stdio.h>

int main(void){

    long long int n,result=0,x,s1=0,s2=0,a,y;
    scanf("%lld",&n);
    a = n/2;
    for (int i = 0; i < a; i++)
    {
        scanf("%lld",&x);
        s1 +=x;
    }
    for (int j = 0; j < a; j++)
    {
        scanf("%lld",&y);
        s2+=y;
    }
    
    result = s1*s2;

    printf("%lld",result);
    return 0;
}