#include<stdio.h>
int main()
{
    int i, x[5]={5,6,8}, size;
    printf(" Print out your recorded data \n");
    for(i=0; i<5; i++){
        printf("x[%d] = %d\n", i, x[i]);
    }
    size = sizeof (x[2]);
    printf("Size of x[2] = %d bytes\n", size);
    size = sizeof (x);
    printf("Size of x = %d bytes\n", size);
    printf("end");
    return 0;
}