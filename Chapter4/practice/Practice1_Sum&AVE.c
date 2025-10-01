#include<stdio.h>
int main()
{
    int x[5], i ,sum, ave;
    sum = 0;
    printf("Input your data\n");
    for(i=0; i<5; i++){
        printf("Enter x[%d]: ",i);
        scanf(" %d", &x[i]);
        sum = sum + x[i];
        ave = sum / 5;
    }
    printf("Find sum and average\n");
    printf("Sum = %d\n", sum);
    printf("Average = %d\n", ave);
    return 0;
}