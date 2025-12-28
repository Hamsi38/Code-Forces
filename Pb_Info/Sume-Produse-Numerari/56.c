#include <stdio.h>
#include <stdlib.h>

int main(){

    int n,last_digit = -1,current_digit,pair=0;
    /*
    Problem:
    You’re checking while (n != 0) before you ever gave n a value!
    This means you’re using an uninitialized variable — which leads to undefined behavior (random behavior).
    */

    while (1)
    {
        scanf("%d",&n);
        if(n==0) break;
        current_digit =abs(n%10);
        if (last_digit == -1) last_digit = current_digit;
        else if(current_digit == last_digit) pair ++;
        else if(current_digit != last_digit) last_digit = current_digit;
    }
    printf("%d",pair);
    return 0;
}