#include<stdio.h>
int main()
{
    float width, length;
    
    printf("Enter width: ");
    scanf("%f", &width);
    printf("Enter length: ");
    scanf("%f", &length);
    
    // Check if inputs are valid (positive numbers)
    if(width <= 0 || length <= 0) {
        printf("Error: Width and length must be positive numbers.\n");
    }
    else {
        // Check if it's a square or rectangle
        if(width == length) {
            printf("It is a square (สี่เหลี่ยมจัตุรัส)\n");
        }
        else {
            printf("It is a rectangle (สี่เหลี่ยมผืนผ้า)\n");
        }
        
        // Display area for additional information
        printf("Area = %.2f square units\n", width * length);
    }
    
    return 0;
}