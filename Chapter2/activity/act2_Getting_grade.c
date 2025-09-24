#include<stdio.h>
int main()
{
    char grade_Eng[10], grade_Thai[10], grade_Maths[10];
    printf("Enter grade of English: ");
    scanf("%s", &grade_Eng);
    fflush(stdin);
    printf("Enter grade of Thai: ");
    scanf("%s", &grade_Thai);
    fflush(stdin);
    printf("Enter grade of Maths: ");
    scanf("%s", &grade_Maths);
    fflush(stdin);
    printf("Show grade\n");
    printf("Grade of English is %s\n", grade_Eng);
    printf("Grade of Thai is %s\n", grade_Thai);
    printf("Grade of Maths is %s\n", grade_Maths);
    return 0;
}