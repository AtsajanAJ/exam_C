#include <stdio.h>

int main() {
    int i, j, k, l, m, n;
    
    printf("Enter n: ");
    scanf("%d", &n);

    // Upper part of the pattern
    for (i = 1; i < n; i++) {
        // Print spaces
        for (j = 1; j <= n-i; j++) {
            printf(" ");
        }
        // Print first square
        for (k = 1; k <= n; k++) {
            if (i == 1 || k == 1 || k == n)
                printf("*");
            else
                printf(" ");
        }
        // Print diagonal
        for (l = 1; l <= i; l++) {
            if (l == i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    // Lower part of the pattern
    for (i = 1; i <= n; i++) {
        // Print square
        for (j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n)
                printf("*");
            else
                printf(" ");
        }
        // Print diagonal
        for (k = 1; k <= n; k++) {
            if (k == n-i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}