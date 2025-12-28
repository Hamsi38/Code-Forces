#include <stdio.h>

int main(){

    long long l,r,result=0,even_r=0,even_l=0,diff=0;
    scanf("%lld%lld",&l,&r);

    even_r = (r)/2;
    even_l = (l-1)/2;

    diff = even_r - even_l;

    result = diff*diff;

    printf("%lld",result);

    return 0;
}