#include<stdio.h>
#include<string.h>
int main()
{
    char name[50] = "John" , name2[50] = "Peter parkera";
    int count1, count2;
    count1 = strlen(name);
    count2 = strlen(name2);
    printf("In array name , we have %s inside %d\n", name, count1);
    printf("In array name2 , we have %s inside %d\n", name2, count2);
    return 0;
}