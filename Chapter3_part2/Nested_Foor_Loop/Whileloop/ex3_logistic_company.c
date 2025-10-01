#include<stdio.h>
int main()
{
    int num = 1, total = 0;
    while(num > 0){
        printf("Enter number of packages: ");
        scanf("%d", &num);
        total = total + num;
        
    }
    printf("Total number of packages: %d\n", total);
    return 0;
}