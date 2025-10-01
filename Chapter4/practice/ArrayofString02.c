// #include<stdio.h>
// int main(){
//     int i, count=0;
//     char name[50] = "";
//     printf("Enter name: ");
//     scanf(" %s", &name);
//     for(i=0; name[i]!='\0'; i++){
//         if(name[i] == 'A' || name[i] == "E" || name[i] == 'I' || name[i] == 'O' || name[i] == 'U' ||
//            name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u'){
//             count++;
//         }
//     }
//     printf(" %s has %d vowels\n", name, count);
//     return 0;
// }

#include <stdio.h>
int main()
{
    char name[50] = "WasimonAEIOU";
    int i, count=0;
    printf("Enter name: ");
    scanf("%s", &name);

    for(i=0; name[i] !='\0'; i++){
        if(name[i]=='A' || name[i]=='E' || name[i]=='I' || name[i]=='O' || name[i]=='U' ||
           name[i]=='a' || name[i]=='e' || name[i]=='i' || name[i]=='o' || name[i]=='u'){
            count++;
        }
    }

    printf("i=%d\n",i);
    printf("%s has %d vowels\n",name, count);
    return 0;
}

