#include<stdio.h>
#include<string.h>
int main()
{
    char name[50] = "Atsajan", name2[50] = "Love Kannika" ;
    strcat(name, name2);
    printf("After strcat, in name, we have  \"%s\" inside\n", name);
    strcat(name2, "Lovesomush");
    printf("After strcat, in name2, we have  \"%s\" inside\n", name2);
    strcpy(name, "John");
    printf("After strcpy, in name, we have  \"%s\" inside\n", name);
    strcat(name, " and Mary");
    printf("After strcat, in name, we have  \"%s\" inside\n", name);
    strlen(name);
    strlen(name2);
    printf("In array name , we have %s inside %d\n", name, strlen(name));
    printf("In array name2 , we have %s inside %d\n", name2, strlen(name2));
    strcmp(name, name2);
    printf("strcmp(name, name2) = %d\n", strcmp(name, name2));  

    return 0;
}