#include<stdio.h>
int main()
{
    int total = 15, week, day;
    week = total/7;
    day = total%7;
    printf("%d dats = %d week and %d days\n", total ,week, day);
    return 0;
}