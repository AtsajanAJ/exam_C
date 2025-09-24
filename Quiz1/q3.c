#include<stdio.h>
int main()
{
    int A,B,C, num;
    printf("Enter a number: ");
    scanf("%d", &num);
    A = num /100;
    B = (num /10) % 10;
    C = num % 10;
    printf("A = %d\n", A);
    printf("B = %d\n", B);
    printf("C = %d\n", C);
}