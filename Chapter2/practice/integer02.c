#include<stdio.h>
int main()
{
    int price = 12345;
    printf(" %dBaht\n", price);
    printf(" %9dBaht\n", price);
    printf(" %-9dBaht\n", price);
    return 0;
}