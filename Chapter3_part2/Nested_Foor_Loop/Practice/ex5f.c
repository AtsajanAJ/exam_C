#include <stdio.h>
int main() {
    int i, j, k, l, n;
    printf("Enter n: ");
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++) {
        // ช่องว่างด้านซ้าย (ลดลงเรื่อยๆ)
        for(j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // สามเหลี่ยมซ้าย (เพิ่มขึ้นเรื่อยๆ)
        for(k = 1; k <= i; k++) {
            printf("*");
        }
        // สามเหลี่ยมขวา (เพิ่มขึ้นเรื่อยๆ)
        for(l = 1; l <= i; l++) {  
            printf("*");
        }
        printf("\n");
    }
    return 0;
}