#include<stdio.h>
int main()
{
    int day, month;
    
    printf("Enter Day: ");
    scanf("%d", &day);
    printf("Enter Month: ");
    scanf("%d", &month);
    
    // Check if month is valid (1-12)
    if(month < 1 || month > 12) {
        printf("Invalid month! Month must be between 1-12.\n");
    }
    else {
        // Check day based on month
        if(month == 2) {
            // February has 28 days
            if(day >= 1 && day <= 28) {
                printf("Valid date: %d/%d\n", day, month);
            }
            else {
                printf("Invalid day! February has only 28 days.\n");
            }
        }
        else if(month == 4 || month == 6 || month == 9 || month == 11) {
            // April, June, September, November have 30 days
            if(day >= 1 && day <= 30) {
                printf("Valid date: %d/%d\n", day, month);
            }
            else {
                printf("Invalid day! This month has only 30 days.\n");
            }
        }
        else {
            // January, March, May, July, August, October, December have 31 days
            if(day >= 1 && day <= 31) {
                printf("Valid date: %d/%d\n", day, month);
            }
            else {
                printf("Invalid day! This month has only 31 days.\n");
            }
        }
    }
    
    return 0;
}