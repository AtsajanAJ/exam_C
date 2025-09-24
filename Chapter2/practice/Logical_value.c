#include<stdio.h>
int main()
{ 
    int num1 = 0, num2 = 5;
    printf("Value in num1 is %d\n", num1);
    printf("Value in num2 is %d\n", num2);
    printf("%d > %d is %d\n", num1, num2, num1>num2);
    printf("%d < %d is %d\n", num1, num2, num1<num2);
    printf("%d == %d is %d\n", num1, num2, num1==num2);
    printf("%d != %d is %d\n", num1, num2, num1!=num2);
    printf("For num1 !%d is %d\n", num1, !num1);
    printf("For num2 !%d is %d\n", num2, !num2);
    return 0;
}