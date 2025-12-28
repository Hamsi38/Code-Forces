#include <stdio.h>
// Să se scrie un program care citește numărul natural n și determină suma S=1+1*2+1*2*3+...+1*2*...*n.



int main(void){

    int n;
    long long int sum = 0,a=1;// don't forget use long long int with factorial always
    scanf("%d",&n);

    for (int i = 1; i <= n; i++){
        a *=i;//* we dont need to extra loop Instead of recalculating, you store the last factorial and multiply just one more term
        sum+=a;
    }
    printf("Rezultatul este %lld",sum);

    return 0;
}

