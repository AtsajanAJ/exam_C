#include<stdio.h>
int main()
{
    char data = 'A' , secret_code;
    secret_code = data+4;
    printf("Data = %c \n", data);
    printf("Data = %d \n", data);
    printf("Secret code = %c \n", secret_code);
    printf("Secret code = %d \n", secret_code);
    return 0;
}