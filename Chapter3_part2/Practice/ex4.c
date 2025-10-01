#include<stdio.h>
int main()
{
    int i, n , sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    for(i = 1; i <=n; i++){
        sum = sum + i;
        printf("%d\n",i);
    }
    printf("Sum of 1 to %d is %d\n", n, sum);
    return 0;
}