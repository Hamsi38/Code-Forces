#include <stdio.h>
#include <stdlib.h>

int main(void){

    FILE*input;
    FILE*output;

    input = fopen("hidden_number.in","r");
    output = fopen("hidden_number.out","w");

    int n1,count=0,sum=0;

    while (fscanf(input,"%d",&n1)==1)
    {
        count++;
        sum += n1;
    }
    if (sum%count == 0)
    {
        sum/=count;
        fprintf(output,"%d",sum);
    }
    else
    {
        fprintf(output,"%d",-1);
    }
    
    return 0;
}