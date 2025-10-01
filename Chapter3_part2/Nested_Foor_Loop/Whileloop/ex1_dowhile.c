#include<stdio.h>
int main()
{
    int x;
    char check;
    do{
        printf("Enter x: ");
        scanf("%d", &x);
        if(x % 2 == 0){
            printf("%d is an even number\n", x);
        }
        else{
            printf("%d is an odd number\n", x);
        }
        printf("Do you want to continue? (Y/N): ");
        scanf(" %c", &check);
    }
    while (check == 'Y'|| check == 'y');
    printf("End of the program.\n");
    return 0;
}  