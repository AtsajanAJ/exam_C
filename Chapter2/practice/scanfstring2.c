#include<stdio.h>
int main()
{
    char word[20];
    printf("Enter a word: ");
    scanf(" %s", &word);
    printf(" %s\n", word);
    printf(" %c\n", word[2]);
    printf("Enter a word Again:");
    scanf(" %s", word);
    printf(" %s\n", word);
    printf(" %c\n", word[1]);
    return 0;
}