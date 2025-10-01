#include<stdio.h>
int main()
{
    int i, x, max;
    for(i = 1; i <= 5; i++){
        printf("Round %d: Enter x:", i);
        scanf("%d", &x);
        if(i == 1 ){
            max = x;
        }
        else
        {
            if(x > max){
                max = x;
            }
        }
    }
    printf(" Max value is %d\n", max);
    return 0;
}