#include <stdio.h>
int main() {
    int i, j, k, l, m, n;
    printf("Enter n: ");
    scanf("%d", &n);
    
    for(i = n; i >= 1; i--) {
        // สามเหลี่ยมซ้าย - ดาว
        for(j = 1; j <= i; j++) {
            printf("*");
        }
        // ช่องว่างตรงกลาง
        for(k = 1; k <= 2*(n-i); k++) {
            printf(" ");
        }
        // สามเหลี่ยมขวา - ดาว
        for(l = 1; l <= i; l++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}