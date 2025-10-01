#include<stdio.h>
int main(){
    int age[3][2][5]; // 3 section / 2 student / 5 subject
    float score[3][2][5];
    int i, j, k;
    for(i=0; i<3; i++){
        printf("============Section %d===========\n\n", i+1);
        for(j=0; j<2; j++){
            for (k = 0; k < 5; k++){
                printf("Enter score section %d student %d subject %d :", i+1, j+1, k+1);
                scanf(" %d", &score[i][j][k]);
            }
            printf("Enter age of section %d student %d : ",i+1, j+1);
            scanf(" %d",&age[i][j]);
        }
        printf("===========End of section %d ============\n\n",i+1);
    }
    getchar();
    return 0;
}