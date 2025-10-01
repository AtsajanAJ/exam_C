#include <stdio.h>
int main() {
    int adults, kids, total;
    char check;
    
    do {
        printf("Enter number of adults: ");
        scanf("%d", &adults);
        
        printf("Enter number of kids: ");
        scanf("%d", &kids);
        
        // เช็คความถูกต้อง
        if(adults < 0 || kids < 0) {
            printf("Invalid input! (negative numbers)\n");
        } 
        else {
            total = (adults * 300) + (kids * 200);
            printf("Total ticket price: %d Baht\n", total);
        }
        
        printf("Do you want to continue? (Y/N): ");
        scanf(" %c", &check);
        
    } while (check == 'Y' || check == 'y');
    
    printf("End of the program.\n");
    return 0;
}