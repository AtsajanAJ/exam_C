#include<stdio.h>
int main()
{
    int day, month, year, be_year;
    
    printf("Enter day: ");
    scanf("%d", &day);
    printf("Enter month: ");
    scanf("%d", &month);
    printf("Enter year: ");
    scanf("%d", &year);
    
    // Convert A.D. to B.E.
    be_year = year + 543;
    
    // Check if month is valid (1-12)
    if(month < 1 || month > 12) {
        printf("%02d / %02d / %d is Invalid\n", day, month, year);
    }
    else {
        int valid = 0; // Flag to track validity
        
        // Check day based on month
        if(month == 2) {
            // February - check for leap year
            if(be_year % 4 == 0) {
                // Leap year - February has 29 days
                if(day >= 1 && day <= 29) {
                    valid = 1;
                }
            }
            else {
                // Not leap year - February has 28 days
                if(day >= 1 && day <= 28) {
                    valid = 1;
                }
            }
        }
        else if(month == 4 || month == 6 || month == 9 || month == 11) {
            // April, June, September, November have 30 days
            if(day >= 1 && day <= 30) {
                valid = 1;
            }
        }
        else {
            // January, March, May, July, August, October, December have 31 days
            if(day >= 1 && day <= 31) {
                valid = 1;
            }
        }
        
        // Output result
        if(valid) {
            printf("%02d / %02d / %d is Valid\n", day, month, year);
        }
        else {
            printf("%02d / %02d / %d is Invalid\n", day, month, year);
        }
    }
    
    return 0;
}