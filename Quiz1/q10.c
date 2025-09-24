#include<stdio.h>
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++) {
        // Print spaces
        for(int j = 1; j < i; j++) {
            printf(" ");
        }
        
        // Print asterisks
        for(int k = 1; k <= (n - i + 1); k++) {
            printf("*");
        }
        
        printf("\n");
    }
    
    printf("STOP\n");
    
    return 0;
}
/*

*****
 ****
  ***
   **
    *

*/