#include<stdio.h>
int main()
{
    int p = 0, f = 0;
    char c;
    do{
        printf("Enter results (P=pass, F=fail, Q=exit): ");
        scanf(" %c", &c);
        fflush(stdin);
        if( c == 'P' || c == 'p'){
            p++;
        } 
        if( c == 'F' || c == 'f'){
            f++;
        }
    } while (c != 'Q' && c != 'q');
    printf("Number of passes: %d\n", p);
    printf("Number of fails: %d\n", f);
    return 0;    
} 