#include<stdio.h>
int main()
{
    int x[5], i;
    printf("Input your data\n");
    for( i=0; i<5; i++){
        printf("Enter x[%d]:", i);
        scanf(" %d", &x[i]);
    }
    printf( "Your data are: \n");
    for (i = 0; i < 5; i++)
    {
        printf("x[%d] = %d\n", i, x[i]);
    }
    printf("end of the program.\n");
    return 0;
    
}