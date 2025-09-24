#include<stdio.h>
int main()
{
    int num1, num2;
    printf("Enter number1: ");
    scanf("%d", &num1);
    printf("Enter number2: ");
    scanf("%d", &num2);
    printf("Value in  num1 is %d\n", num1);
    printf("Value in  num2 is %d\n", num2);
    printf("%d > %d is %d\n", num1, num2, num1 > num2);
    printf("%d < %d is %d\n", num1, num2, num1 < num2);
    printf("%d == %d is %d\n", num1, num2, num1 == num2);
    printf("%d != %d is %d\n", num1, num2, num1 != num2);
    printf("FOr num1 !%d is %d\n", num1, !num1);
    printf("FOr num2 !%d is %d\n", num2, !num2);
}