#include<stdio.h>
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(i == 1 || i == n) {
                // First and last rows: all #
                printf("#");
            } else {
                // Middle rows: alternate between # and &
                if(i % 2 == 0) {
                    // Even rows: &
                    printf("&");
                } else {
                    // Odd rows: #
                    printf("#");
                }
            }
        }
        printf("\n");
    }
    
    return 0;
}