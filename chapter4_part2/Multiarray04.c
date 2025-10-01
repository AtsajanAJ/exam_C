#include<stdio.h>
#include<string.h>
int main(){
    char name[5][20] , x[20], tempname[20];
    int i, len, max=0, cmp, j, temp, min=0;
    for(i=0; i<5; i++){
        printf("Enter name of student %d: ", i+1);
        scanf(" %s", name[i]);  // ไม่ต้องใส่ & เพราะ name[i] เป็น array
        len = strlen(name[i]);

        if(i == 0){ 
            // กำหนดค่าเริ่มต้นของ max และ min เป็นชื่อแรก
            max = min = len;
        } else {
            if(len > max){
                max = len;
            }
            if(len < min){
                min = len;
            }
        }
    }
    printf("\n Longest name has %d characters \n", max);
    for(i=0; i<5; i++){
        len = strlen(name[i]);
        if(len == max){
            printf("%s\n",name[i]);
        }
    }
    printf("\n Shortest name has %d characters \n",min);
    for(i=0; i<5; i++){
        len = strlen(name[i]);
        if(len == min){
            printf("%s\n",name[i]);
        }
    }

    printf("\n Arrange name\n");
    strcpy(x, name[0]);
    for(i=0; i<5; i++){
        for(j=i; j<5; j++){
            cmp = strcmp(x,name[j]);
            if(cmp>=0) // x is x or x comes after name[i]
            {
                strcpy(x,name[j]);
                temp=j;
            }
        }
        printf("%s \n",x);
        strcpy(tempname,name[i]);
        strcpy(name[i], x);
        strcpy(name[temp], tempname);
        strcpy(x, name[i+1]);
    }

    return 0;
}