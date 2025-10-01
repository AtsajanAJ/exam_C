#include <stdio.h>
int main() {
    int i, j, k, l, n;
    printf("Enter n: ");
    scanf("%d", &n);
    
    for(i = 1; i <= n; i += 2) {  // ✅ เพิ่มครั้งละ 2 (1, 3, 5, 7, ...)
        // ช่องว่างด้านซ้าย
        for(j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // สามเหลี่ยมซ้าย
        for(k = 1; k <= i; k++) {
            printf("*");
        }
        // สามเหลี่ยมขวา
        for(l = 1; l <= i; l++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}