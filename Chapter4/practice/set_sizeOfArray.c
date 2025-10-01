#include <stdio.h>

int main() {
    int num, i;
    printf("How many students in your class: ");
    scanf("%d", &num);

    float score, max, min;

    for (i = 0; i < num; i++) {
        printf("Enter score of student %d: ", i + 1);
        scanf("%f", &score);

        if (i == 0) {
            // กำหนดคะแนนคนแรกเป็นค่าเริ่มต้นของ max และ min
            max = min = score;
        } else {
            if (score > max) max = score;
            if (score < min) min = score;
        }
    }

    printf("Max score = %.2f\n", max);
    printf("Min score = %.2f\n", min);

    return 0;
}
