#include<stdio.h>
int main()
{
    char name[30], product[30];
    float price, total;
    int num;

    printf("Enter your name:");
    scanf("%s", name);
    printf("Enter the product name: ");
    scanf("%s", product);
    printf("Enter the product's price: ");
    scanf("%f", &price);
    printf("Enter the number of product: ");
    scanf("%d", &num);
    total = price * num;
    printf("%s want to buy %d %s.\n", name, num, product);
    printf("It costs %.2f Baht\n", total);
    return 0;
}
