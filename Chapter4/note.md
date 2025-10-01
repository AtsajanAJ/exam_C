

Array
Syntax: dataType arrayName[arraySize];

For example…
int age[20]; 
// An integer array with 20 elements of integer inside
float score[10]; 
// A float array with 10 elements of float numbers

sizeof() --> find size of array


SO very important

String command

- strcpy(name, “Wasimon”); --> strcpy copies string from the back to the front
- strcmp(name1, name2); 
--> strcmp() will compare two strings and return an integer value.
--> strcmp() will return 0 if two strings are identical. if two strinf now same is 1
• -1 if string1 comes before string2
• 0 if string1 is as same as string2
• 1 if string1 comes after string2

- strlen(name1);
--> strlen() is a function to calculate the length of a string (DO NOT count \0).
--> It returns string’ size with an unsigned integer
--> strlen() is defined in the <string.h> header file.
