#include<stdio.h>
int main()
{
    int age;
    printf("Enter age: ");
    scanf("%d", &age);
    if((age <= 150) && (age > 0)){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
}