#include<stdio.h>
int main()
{
    char name[30];
    printf("Enter name: ");
    // scanf("%s",&name);
    gets(name);
    printf("%c %c %c",name[0], name[2], name[4]);
}