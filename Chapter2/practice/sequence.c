#include<stdio.h>
int main()
{
    float a=5, b=2, answer1, answer2;
    answer1 = (a*3)+b/2.0;
    printf("%.2f\n",answer1);
    answer2 = (a*3)+b/2.0 - (3+5/2);
    printf("%.2f",answer2);
    return 0;
}