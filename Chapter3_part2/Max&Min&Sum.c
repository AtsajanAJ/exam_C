#include<stdio.h>
int main()
{
    int i, x , sum =0, max , min, ave;
    for(i = 1; i<=5; i++){
        printf("Round %d: Enter x:", i);
        scanf("%d", &x);
        sum = sum + x;
        ave = sum /5;
        if(i == 1){
            max = x;
            min = x;
        }
        else{
            if(x > max){
                max = x;
            }
            if(x < min){
                min = x;
            }
        }
    }
    printf(" Average value is %d\n", ave);
    printf(" Sum value is %d\n", sum);
    printf(" Max value is %d\n", max);
    printf(" Max value is %d\n", max);
}