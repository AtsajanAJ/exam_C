#include <stdio.h>
#include <string.h>

int main() {
    char str1[50], str2[50];
    int result;

    // Case 1: string1 < string2
    strcpy(str1, "Apple");
    strcpy(str2, "Banana");
    result = strcmp(str1, str2);
    printf("strcmp(\"%s\", \"%s\") = %d (str1 comes before str2)\n", str1, str2, result);

    // Case 2: string1 == string2
    strcpy(str1, "Orange");
    strcpy(str2, "Orange");
    result = strcmp(str1, str2);
    printf("strcmp(\"%s\", \"%s\") = %d (strings are equal)\n", str1, str2, result);

    // Case 3: string1 > string2
    strcpy(str1, "Pear");
    strcpy(str2, "Mango");
    result = strcmp(str1, str2);
    printf("strcmp(\"%s\", \"%s\") = %d (str1 comes after str2)\n", str1, str2, result);

    return 0;
}
