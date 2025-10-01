#include<stdio.h>
int main()
{
    int x;
    char check = 'Y' ;
    while (check == 'Y' )
    {
        printf("Enter x: ");
        scanf("%d", &x);
        if(x % 2 == 0){
            printf("%d is an even number\n", x);
        }
        else{
            printf("%d is an odd number\n", x);
        }
        while (1)
        {
            printf("Do you want to continue? (Y/N): ");
            scanf(" %c", &check);
            if(check == 'Y' || check == 'N'){
                break;
            }
            else{
                printf("Invalid input. Please enter Y or N.\n");
            }
        }
    }
    printf("End of the program.\n");
    return 0;
}