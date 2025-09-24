#include<stdio.h>
int main()
{
    int x;
    printf("Enter x: ");
    scanf("%d", &x);
    if( (x>0) && (x%2==0)){ 
        printf("%d is a positive even number\n", x); 
    }
    else if((x>0) && (x%2==1)){
        printf("%d is a positive odd number\n",x);
    } 
    else if((x<0) && (x%2==0)){
        printf("%d is a negative even number\n",x);
    } 
    else if((x<0) && (x%2!=0)){
        printf("%d is a negative odd number\n",x);
    } 
    else if(x == 0){
        printf("%d is a zero number\n",x);
    }
    printf("End"); 
    return 0;
}