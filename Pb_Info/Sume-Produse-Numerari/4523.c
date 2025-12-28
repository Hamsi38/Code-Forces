#include <stdio.h>
#include <stdlib.h>

int main(void){

    long long int n,x=1;
    scanf("%lld",&n);
    
    if (n>0)
    {
            for (int i = 1; i <= n; i++)
        {
            for (int j = 2; j <=i ; j++)
            {
                x *=j;
            }
            printf("%lld ",x);
            x=1;
        }
    }
    
    return 0;
}