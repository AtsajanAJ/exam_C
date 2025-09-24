#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter A: ");
    scanf("%d", &a);
    printf("Enter B: ");
    scanf("%d", &b);
    if( a > b){
        printf("%d is more than %d\n", a, b);
    }
    else if(a < b){
        printf("%d is less than %d\n", a,b);
    }
    else if(a == b){
        printf("%d is equal to %d\n", a,b);
    }
    printf("end");
}