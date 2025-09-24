#include<stdio.h>
int main()
{
    float total_price, discount = 0, final_price;
    
    printf("Total price: ");
    scanf("%f", &total_price);
    
    // Determine discount based on spending amount
    if(total_price >= 5000) {
        discount = 500;
    }
    else if(total_price >= 3000) {
        discount = 300;
    }
    else if(total_price >= 2000) {
        discount = 200;
    }
    else {
        discount = 0;
    }
    
    // Calculate final price
    final_price = total_price - discount;
    
    // Display results
    printf("Discount = %.0f Baht\n", discount);
    printf("Final price = %.2f Baht\n", final_price);
    
    return 0;
}