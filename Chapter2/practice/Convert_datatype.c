#include<stdio.h>
int main()
{
    int a = 20, d;
    float b = 5.0, c ,e = 7.8;
    c = a+1;
    d = e;
    printf("Arithmetic = %f\n", a+b);  //เปลี่ยน int เป็น float 
    printf("Implicit value of b is %f\n", c); // เปลี่ยน int เป็น float
    printf("Implicit value of a is %d\n", d); //เปลี่ยน float เป็น int
}