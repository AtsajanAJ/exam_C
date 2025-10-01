#include<stdio.h>
#include<string.h>
int main()
{
    char name[50] = "Atsajanaaaaaaa", name2[50] ;
    int i, count=0;
    int  len = strlen(name);
    for (i = 0; i < len; i++)
    {
        if(name[i]=='A' || name[i]=='E' || name[i]=='I' || name[i]=='O' || name[i]=='U' ||
           name[i]=='a' || name[i]=='e' || name[i]=='i' || name[i]=='o' || name[i]=='u'){
            count++;
        }
    }
    printf("%s has %d vowels\n",name, count);
    
    return 0;
}