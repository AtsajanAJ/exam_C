#include<stdio.h>
int main()
{
    int i,x, secret = 9;
    for(i = 1; i <=5; i++){
        printf("Round %d: Enter x: ", i);
        scanf("%d", &x);
        if(x > secret){
            printf("Too high\n");
        }
        else if(x < secret)
        {
            printf("Too low\n");
        }
        
        else{
            printf("Correct\n");
            break;
        }
    }
    if(x == secret){
        printf("You Win\n");
    }
    else{
        printf("You lost\n");
    }
    return 0;
}