#include <stdio.h>
#include <stdlib.h>
//! If n means number of integers to sum, use it to control the loop instead of reading until EOF.
int main(){

    FILE*input;
    FILE*output;

    input= fopen("n_suma.in","r");
    output = fopen("n_suma.out","w");

    int sum = 0;
    int n,a;

    fscanf(input,"%d",&n);
    for (int i = 0; i < n; i++)
    {
        fscanf(input,"%d",&a);
        sum += a;
    }
    fprintf(output,"%d",sum);

    return 0;
}