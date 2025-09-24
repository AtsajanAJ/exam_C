#include<stdio.h>
int main()
{
    float age1, age2, age3 ,avg;
    printf("enter age1: ");
    scanf("%f", &age1);
    printf("Enter age2: ");
    scanf("%f", &age2);
    printf("Enter age3: ");
    scanf("%f", &age3);
    avg = (age1 + age2 + age3)/3;
    printf("AVG: %.2f year old", avg);
    return 0;
}