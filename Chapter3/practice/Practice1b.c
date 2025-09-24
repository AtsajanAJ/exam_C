#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character (A-Z): ");
    scanf("%c", &ch);
    
    // Check if input is a valid letter (A-Z or a-z)
    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        // Check if it's a vowel
        if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
           ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            printf("%c is a vowel\n", ch);
        }
        else {
            printf("%c is a consonant\n", ch);
        }
    }
    else {
        printf("Error input\n");
    }
    
    return 0;
}