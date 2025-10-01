#include<stdio.h>
int main(){
    int i, n;
    printf("Enter n: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        if(i % 2 == 0){ // even
            printf("%d ", i);
        }
        if(i % 2 == 1){ // odd
            printf("%d ", i);
        }
    }
    printf("End\n");
    return 0;
}