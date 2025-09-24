#include<stdio.h>
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(i == 1 || i == n || j == 1 || j == n) {
                // First row, last row, first column, or last column
                printf("*");
            } else {
                // Middle area - print space
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}
/*

*****
*   *
*   *
*   *
*****

*/
