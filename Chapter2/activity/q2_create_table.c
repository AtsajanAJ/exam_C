#include<stdio.h>
int main()
{
    int num , table[10];
    printf("Enter a number:");
    scanf("%d", &num);
    for(int i=0; i<10; i++){ // i=0,1,2,3,4,5,6,7,8,9 // 10 รอบ
        table[i] = num * (i+1);
        printf("%d x %d = %d\n", num, i+1 , table[i]);
    }
}