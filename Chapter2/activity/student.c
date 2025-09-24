#include<stdio.h>
#include<string.h>
int main()
{
    char name[30], subject[30], gender;
    printf("Enter name: ");
    fgets(name, sizeof(name), stdin); // ตัด \n ออก
    printf("Enter Gender (M/F): ");
    scanf(" %c", &gender);
    getchar(); //กิน \n ที่เหลือจาก scanf
    printf("Enter Favortie subject: ");
    gets(subject);
    printf("Show data\n");
    printf("Name: %s", name);
    printf("Gender: %c\n", gender);
    printf("Favortie subject: %s\n", subject);
    printf("Favorite subjects of %s is %s\n", name, subject);
    return 0;
}