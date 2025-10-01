#include<stdio.h>
int main()
{
    int x[10];
    char name[50];
    float weight[20];
    double score[20];
    printf("Size of int array x = %d bytes\n", sizeof(x));
    printf("Size of name array name = %d bytes\n", sizeof(name));
    printf("Size of float array weight = %d bytes\n", sizeof(weight));
    printf("Size of double array scroe = %d bytes\n", sizeof(score));
    printf("End of the program.\n");
    return 0;
}