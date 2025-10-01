#include<stdio.h>
int main()
{
    int i, x, max =0;
    for(i =1; i<=5; i++){
        printf("Round %d: Enter x:", i);
        scanf("%d", &x);
        if(x > max){
            max = x;
        }
    }
    printf(" Max value is %d\n", max);
    // getchar();
    return 0;
}