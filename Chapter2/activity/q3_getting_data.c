#include<stdio.h>
int main()
{
    char name[30], gender;
    int age;
    float height;
    printf("Get Data\n");
    printf("Enter your name and surname:");
    gets(name);
    printf("Enter your gender (M/F): ");
    scanf(" %c", &gender);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your height (m): ");
    scanf("%f", &height);
    printf("=======================================");
    printf("\nShow Data\n");
    printf(" My name is %s\n", name);
    printf("I am %c\n", gender);
    printf("I am %d year old\n", age);
    printf("I am %.2f m tall\n", height);
    return 0;
}
