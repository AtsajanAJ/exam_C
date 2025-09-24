#include<stdio.h>
int main()
{
    float score;
    printf("Enter score: ");
    scanf("%f", &score);
    if(score>=80 && score <=100){
        printf("A\n");
    }
    else if(score>=70 && score <=79.99){
        printf("B\n");
    }
    else if(score>=60 && score <=69.99){
        printf("C\n");
    }
    else if(score>=50 && score <=59.99){
        printf("D\n");
    }
    else if(score>=40 && score <=49.99){
        printf("E\n");
    }
    printf("end");
    return 0;
}