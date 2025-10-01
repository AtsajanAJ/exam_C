#include <stdio.h>
int main() {
    int i, j, n, count;
    printf("Enter n: ");
    scanf("%d", &n);
    
    // วนลูปทุกตัวเลขจาก 1 ถึง n
    for(i = 1; i <= n; i++) {
        count = 0;  // นับตัวหารของ i
        
        // หาตัวหารทั้งหมดของ i
        for(j = 1; j <= i; j++) {
            if(i % j == 0) {
                count++;  // เจอตัวหาร
            }
        }
        
        // ถ้ามีตัวหารแค่ 2 ตัว หรือ i = 1
        if(count == 2 || i == 1) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}