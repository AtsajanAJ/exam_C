#include <stdio.h>
int main()
{
    float std[5];  // ✅ เปลี่ยนเป็น float ตามโจทย์
    float max, min, sum = 0, ave;
    int maxindex = 0, minindex = 0;
    int i;
    
    printf("Input your data\n");
    for(i = 0; i < 5; i++) {
        printf("Enter score of student %d: ", i+1);
        scanf("%f", &std[i]);  // ✅ ใช้ %f
        sum += std[i];
    }
    
    // ตั้งค่าเริ่มต้น
    max = min = std[0];
    maxindex = minindex = 0;
    
    // หา max และ min แยกกัน
    for(i = 1; i < 5; i++) {
        // เช็ค max
        if(std[i] > max) {  // ✅ เปลี่ยนเป็น >
            max = std[i];
            maxindex = i;
        }
        
        // เช็ค min (แยกออกจาก else)
        if(std[i] < min) {  // ✅ เปลี่ยนเป็น 
            min = std[i];
            minindex = i;
        }
    }
    
    ave = sum / 5.0;
    
    printf("The highest score is %.2f\n", max);
    printf("Student %d has the highest score\n", maxindex+1);
    
    printf("The lowest score is %.2f\n", min);
    printf("Student %d has the lowest score\n", minindex+1);
    
    printf("Average score is %.2f\n", ave);
    
    return 0;
}