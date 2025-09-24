#include<stdio.h>
int main()
{
    int adults, kids, total;
    printf("number of adults: ");
    scanf("%d", &adults);
    printf("number of Kids: ");
    scanf("%d", &kids);
    total = (adults * 300) + (kids * 200);
    printf("Total fee is %d", total);
    return 0;
}