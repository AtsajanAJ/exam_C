#include<stdio.h>
int main()
{
    int i, j, k, n;
    printf("Enter n: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        for(j = 1; j <= n - i; j++){   // ช่องว่างจะค่อยๆ ลดลง
            printf(" ");
        }
        for(k = 1; k <= i; k++){       // ดาวจะค่อยๆ เพิ่มขึ้น
            printf("*");
        } 
        printf("\n");
    }
    return 0;    
}
