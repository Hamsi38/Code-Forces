#include <stdio.h>

//! sliding window 

int main(){

    int n,prev,curr,next,sum=0;
    scanf("%d",&n);
    scanf("%d",&prev);
    scanf("%d",&curr);

    for (int i = 3; i <= n; i++)
    {
        scanf("%d",&next);
        if (curr > next && curr>prev)
        {
            sum += curr;
        }
            prev = curr;
            curr = next;
    }
    printf("%d",sum);

    return 0;
}