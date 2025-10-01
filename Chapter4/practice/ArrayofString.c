#include<stdio.h>
int main(){
    int i;
    char name[50] = "Atsajan";
    printf("Size of name[0] is %d Bytes\n",sizeof(name[0]));
    printf("Size of name[1] is %d Bytes\n",sizeof(name[1]));
    printf("Size of array name is %d Bytes\n",sizeof(name));
    printf("%s is a string inside the array name\n",name);
    printf("%c is the first character inside the array name\n",name[0]);printf("%c is the first character inside the array name\n",name[6]);
    return 0;
}