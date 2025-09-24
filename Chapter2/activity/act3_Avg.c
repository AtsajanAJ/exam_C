#include<stdio.h>
int main()
{
    int age1 = 18, age2 = 19, age3 = 19, avg;
    printf("Avg: %.2f year old", (age1 + age2 + age3)/3);
    printf("Avg: %.2f year old", (age1 + age2 + age3)/3.0);
    return 0;
}