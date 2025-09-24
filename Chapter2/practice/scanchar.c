#include<stdio.h>
int main()
{   
    char grade_Eng, grade_Thai, grade_Maths;
    printf("Enter grade of English: ");
    scanf(" %c", &grade_Eng);
    // fflush(stdin);
    printf("Enter grade of Thai: ");
    scanf(" %c", &grade_Thai);
    // fflush(stdin);
    printf("Enter grade of Maths: ");
    scanf(" %c", &grade_Maths);
    // fflush(stdin);
    printf("Grade of English is %c\n", grade_Eng);
    printf("Grade of Thai is %c\n", grade_Thai);
    printf("Grade of Maths is %c\n", grade_Maths);
    return 0;
}