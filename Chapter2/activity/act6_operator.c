#include<stdio.h>
int main()
{
    int total = 377, year, month, week, day;
    year = total/365;
    month = (total%365)/30;
    week = ((total%365)%30)/7;
    day = ((total%365)%30)%7;
    printf("%d/%d/%d/%d means %d Years %d Months %d Weeks and %d Days\n", year, day, week, month, year, month, week, day);
    return 0;
}