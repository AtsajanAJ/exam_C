#include<stdio.h>
int main()
{
    char consonant;
    printf("Enter c: ");
    scanf(" %c", &consonant);
    if(consonant == 'A' || consonant == 'E' || consonant == 'I' || consonant == 'O' || consonant == 'U' ){
        printf("%c is a vowel",consonant);
    }
    else{
        printf("%c is a consonant", consonant);
    }
}