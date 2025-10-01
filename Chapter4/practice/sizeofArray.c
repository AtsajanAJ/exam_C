#include<stdio.h>
int main()
{
    int a=10;
    float b=10.50;
    char c='A';
    double d=10.50;
    printf("a is %d\n",a);
    printf("Size of a is %d Byte\n",sizeof(a));
    printf("b is %f\n",b);
    printf("Size of b is %d Byte\n",sizeof(b));
    printf("c is %c\n",c);
    printf("Size of c is %d Byte\n",sizeof(c));
    printf("d is %.2f\n",d);
    printf("Size of d is %d Byte\n",sizeof(d));
    printf("END\n");
    return 0;
    
}