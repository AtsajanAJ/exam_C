#include<stdio.h>
int main()
{
    int age[3] [5];
    int i, j;
    for(i=0; i<3; i++){
        for(j=0; j<5; j++){
            printf("Enter age of section %d, student %d:", i+1, j+1);
            scanf("%d", &age[i][j]);
        }
    }
}