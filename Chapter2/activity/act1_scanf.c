#include<stdio.h>
int main()
{
    float h1, h2, h3, avg;
    printf("Please enter height1: ");
    scanf("%f", &h1);
    printf("Please enter height2: ");
    scanf("%f", &h2);
    printf("Please enter height3: ");
    scanf("%f", &h3);
    avg = (h1 + h2 + h3)/3;
    printf("Avg height: %.2f m. \n", avg);
    return 0;
}