#include<stdio.h>
int main()
{
    int i, j, n;
    printf("Enter n: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        for(j = 1; j <= n; j++){
            if(j == (n - i + 1)){
                printf("*"); // แนวทแยงมุม
            }
            else{
                printf(" "); // ที่เหลือ ช่่องว่าง
            }
        }
        printf("\n");
    }
}