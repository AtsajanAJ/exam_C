#include<stdio.h>
#include<string.h>
int main()
{
    char name[50] = "Atsajan", name2[50] ;
    int x;
    x = strcmp(name, name2);
    printf("x = %d\n", x);
    strcpy(name2, name);
    x = strcmp(name, name2);
    printf("x = %d\n", x);
    getchar();
    return 0;
}