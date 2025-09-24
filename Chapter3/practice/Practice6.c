#include <stdio.h>
int main()
{
    float a, b, big_num;
    
    printf("Enter a: ");
    scanf("%f", &a);
    printf("Enter b: ");
    scanf("%f", &b);
    
    // Use conditional operator ? : to find the greater number
    big_num = (a >= b) ? a : b;
    
    printf("The greater number is %.2f\n", big_num);
    
    return 0;
}