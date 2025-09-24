#include<stdio.h>
int main()
{
    int num;
    printf("Enter num: ");
    scanf("%d",&num);

    if(num > 0 && num %5 ==0){
        printf("Ok");
    }
    else{
        printf("Not ok");
    }
}