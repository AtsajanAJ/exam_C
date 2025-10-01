#include<stdio.h>
int main()
{
    int i, x, min;
    for(i =1; i<=5; i++){
        printf("Round %d: Enter x:", i);
        scanf("%d", &x);
        if( i == 1){
            min = x;
        }
        else{
            if( x< min){
                min = x;
            }
        }
    }
    printf(" Min value is %d\n", min);
    return 0;
}