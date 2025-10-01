#include<stdio.h>
int main()
{
    int i;
    for(i = 1; i <= 10; i++){
        if(i <= 1){
            printf(" %d\n 1",i);
        }
        if(i > 10){
            printf(" %d\n 2 ",i);
        }
    } 
    return 0;
}