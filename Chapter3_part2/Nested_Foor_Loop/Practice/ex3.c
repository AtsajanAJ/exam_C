#include<stdio.h>
int main()
{
    int i, j , n;
    printf("Enter n: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        for(j = 1; j  <=n; j++){
            if(i == 1 || i == n){
                printf("*"); // บนสุด ล่างสุด ทั้งแถว
                // printf("%d,%d", i, j);

            }
            else if(j == 1 || j == n){
                printf("*"); // ซ้ายสุด ขวาสุด ทั้งแถว
                // printf("%d,%d", i, j);

            }
            else{
                printf(" "); // ที่เหลือ ช่่องว่าง
                // printf("%d,%d", i, j);

            }
        }
        printf("\n");
    }
}