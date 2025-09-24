#include<stdio.h>
int main()
{
    char size ;
    printf("Enter the short' size: ");
    scanf(" %c",&size);
    switch(size){
        case 'S':
        case 's':
            printf("S or s = Small\n");
            break;
        case 'M':
        case 'm':
            printf("M or m = Medium\n");
            break;
        case 'L':
        case 'l':
            printf("L or l = Large\n");
            break;
        default:
            printf("Error");
    }
}
