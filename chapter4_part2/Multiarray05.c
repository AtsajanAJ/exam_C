#include <stdio.h>
#include <string.h>

int main() {
    // ประกาศและกำหนดค่าเริ่มต้น
    char name[2][5][20] = {
        {"Peter", "Simon", "John", "Jim", "Kyle"},
        {"Tyla", "Amanda", "Nicky", "Leon", "Paul"}
    };

    int i, j;
    int maxLen;
    
    // วนลูปแต่ละ section
    for(i = 0; i < 2; i++) {
        maxLen = 0;  // เริ่มต้นความยาวสูงสุดของ section
        // หาความยาวสูงสุด
        for(j = 0; j < 5; j++) {
            int len = strlen(name[i][j]);
            if(len > maxLen) {
                maxLen = len;
            }
        }

        printf("Longest name in section %d:\n", i + 1);
        // แสดงชื่อที่มีความยาวเท่ากับ maxLen
        for(j = 0; j < 5; j++) {
            if(strlen(name[i][j]) == maxLen) {
                printf("%s\n", name[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}
