#include <stdio.h>

int main(){

    long long int c,p,total=0,remaining=0,k=0;

    scanf("%lld%lld",&c,&p);

    while (1)
    {
        total = p*(2*k+p-1)/2;
        if(total > c) break;
        remaining = c - total;
        k++;
    }
    printf("%lld",remaining);

    return 0;
}