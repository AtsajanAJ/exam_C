#include<stdio.h>
int main()
{
    char c;
    
    printf("Enter c: ");
    scanf("%c", &c);
    
    switch(c) {
        case 'A': case 'E': case 'I': case 'O': case 'U':
        case 'a': case 'e': case 'i': case 'o': case 'u':
            printf("%c is a vowel\n", c);
            break;
        default:
            // Check if it's a valid letter (A-Z or a-z)
            if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
                printf("%c is a consonant\n", c);
            }
            else {
                printf("Error input\n");
            }
    }
    
    return 0;
}