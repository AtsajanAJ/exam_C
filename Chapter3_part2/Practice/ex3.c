#include<stdio.h>
int main()
{
    int i, x;
    printf("Enter x: ");
    scanf("%d", &x);
    for(i = 1; i<=12; i++){
        printf("%d x %d = %d\n", x, i, x*i);
    }
    return 0;
}