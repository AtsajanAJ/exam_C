#include<stdio.h>
#include<string.h>
int main()
{
    char name1[50]="Atsajan", name2[50];
    printf("In array name1, we have %s inside\n",name1);
    strcpy(name1, "John");
    printf("After strcpy, in name1, we have %s inside\n",name1);

    printf("===================================\n");

    printf("Please enter your name2: ");
    scanf("%s",name2);
    printf("In array name2, we have %s inside\n",name2);
    printf("===================================\n");
    strcpy(name1, name2);
    printf("After strcpy from name2, now in name1, we have %s inside\n",name1);
    return 0;

}