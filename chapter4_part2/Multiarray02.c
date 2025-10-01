
#include<stdio.h> //multiarray01.c
int main() 
{ 
    int age[3][5],sum[3]={}; 
    int i,j;
    float ave[3]; //set every element in sum array to be zero
    for(i=0; i<3; i++) { 
        printf("======= Section%d =======\n", i+1);
        for(j=0; j<5; j++) { 
            printf("Enter age of section%d student%d: ", i+1, j+1);
            scanf("%d",&age[i][j]);
            sum[i] = sum[i] + age[i][j];
        }
        printf("======= END of section%d =======\n\n", i+1);
    }
    for(i=0; i<3; i++) { 
        ave[i] = sum[i]/5;
        printf("Average age of section %d is %.2f \n", i+1, ave[i]);
        printf("Sum age of section %d is %d \n", i+1, sum[i]);
    }
    getchar();
    return 0;
}
