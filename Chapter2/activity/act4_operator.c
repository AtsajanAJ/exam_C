#include<stdio.h>
int main()
{
    int total = 150;
    int h, m;
    h = total/60;
    m = total%60;
    printf("%d minutes = %d hour and %d minustes\n", total , h, m);
    return 0;
}
