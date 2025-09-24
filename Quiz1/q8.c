#include<stdio.h>
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    
    for(int i = 5; i <= n; i += 5) {
        printf("%d ", i);
    }
    printf("\n");
    
    return 0;
}