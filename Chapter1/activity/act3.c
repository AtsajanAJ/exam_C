#include<stdio.h>
int main()
{   
    char D[30], E[30];
    printf("Enter your name:");
    scanf("%s", D);
    printf("Enter your surname:");
    scanf("%s", E);
    printf("My name is \"%s\" and my surname is \"%s\". \n", D, E);
    return 0;
}