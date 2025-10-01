#include<stdio.h>
int main()
{
    char name[50] = "WasimonAEIOU";
    printf(" In array name , we have %s\n", name);
    printf("Enter name: ");
    scanf("%s", &name);
    printf(" In array name , we have %s\n", name);
    return 0;
}