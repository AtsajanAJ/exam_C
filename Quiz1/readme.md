# สูตรและการคำนวณต่างๆ ในภาษา C

## 📅 การคำนวณวันเดือนปี

### หาวันในสัปดาห์ (Zeller's Congruence)
```c
int dayOfWeek(int day, int month, int year) {
    if (month < 3) {
        month += 12;
        year--;
    }
    int k = year % 100;
    int j = year / 100;
    int h = (day + (13 * (month + 1)) / 5 + k + k/4 + j/4 - 2*j) % 7;
    return (h + 5) % 7; // 0=อาทิตย์, 1=จันทร์, ..., 6=เสาร์
}
```

### หาจำนวนวันในเดือน
```c
int daysInMonth(int month, int year) {
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month == 2 && isLeapYear(year)) return 29;
    return days[month - 1];
}

int isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}
```

## ⏰ การคำนวณเวลา

### แปลงวินาทีเป็นชั่วโมง:นาที:วินาที
```c
void convertSeconds(int totalSeconds) {
    int hours = totalSeconds / 3600;
    int minutes = (totalSeconds % 3600) / 60;
    int seconds = totalSeconds % 60;
    printf("%d:%02d:%02d\n", hours, minutes, seconds);
}
```

### หาผลต่างของเวลา
```c
int timeDifference(int h1, int m1, int s1, int h2, int m2, int s2) {
    int time1 = h1 * 3600 + m1 * 60 + s1;
    int time2 = h2 * 3600 + m2 * 60 + s2;
    return abs(time2 - time1); // ผลต่างเป็นวินาที
}
```

## 🔢 เลขคี่เลขคู่

### ตรวจสอบเลขคี่คู่
```c
int isEven(int n) { return n % 2 == 0; }
int isOdd(int n) { return n % 2 != 0; }

// หรือใช้ bitwise (เร็วกว่า)
int isEvenBit(int n) { return (n & 1) == 0; }
int isOddBit(int n) { return (n & 1) == 1; }
```

### หาเลขคี่คู่ในช่วง
```c
void printEvenOdd(int start, int end) {
    printf("เลขคู่: ");
    for(int i = start; i <= end; i++) {
        if(i % 2 == 0) printf("%d ", i);
    }
    printf("\nเลขคี่: ");
    for(int i = start; i <= end; i++) {
        if(i % 2 != 0) printf("%d ", i);
    }
}
```

## 📆 ปีคริสต์ศักราช (คศ) และพุทธศักราช (พศ)

### แปลง คศ เป็น พศ และกลับกัน
```c
int adToBe(int ad) { return ad + 543; }  // คศ -> พศ
int beToAd(int be) { return be - 543; }  // พศ -> คศ

// ตรวจสอบปีพุทธศักราช
int isBuddhistYear(int year) {
    return year > 543; // พศ มักเริ่มจาก 544 ขึ้นไป
}
```

## 📐 การคำนวณรูปทรงเรขาคณิต

### สี่เหลี่ยมจัตุรัส
```c
int squareArea(int side) { return side * side; }
int squarePerimeter(int side) { return 4 * side; }
int squareDiagonal(int side) { return side * sqrt(2); }
```

### สี่เหลี่ยมผืนผ้า
```c
int rectangleArea(int width, int height) { return width * height; }
int rectanglePerimeter(int width, int height) { return 2 * (width + height); }
double rectangleDiagonal(int width, int height) { 
    return sqrt(width*width + height*height); 
}
```

### วงกลม
```c
#define PI 3.14159265359
double circleArea(double radius) { return PI * radius * radius; }
double circleCircumference(double radius) { return 2 * PI * radius; }
```

### สามเหลี่ยม
```c
double triangleArea(double base, double height) { return 0.5 * base * height; }
double trianglePerimeter(double a, double b, double c) { return a + b + c; }

// สูตรเฮรอน (หาพื้นที่จาก 3 ด้าน)
double triangleAreaHeron(double a, double b, double c) {
    double s = (a + b + c) / 2;
    return sqrt(s * (s-a) * (s-b) * (s-c));
}
```

## 🎓 การคำนวณเกรด

### แปลงคะแนนเป็นเกรด (ระบบ 4.0)
```c
char* scoreToGrade(double score) {
    if (score >= 80) return "A";
    else if (score >= 75) return "B+";
    else if (score >= 70) return "B";
    else if (score >= 65) return "C+";
    else if (score >= 60) return "C";
    else if (score >= 55) return "D+";
    else if (score >= 50) return "D";
    else return "F";
}

double gradeToGPA(char* grade) {
    if (strcmp(grade, "A") == 0) return 4.0;
    else if (strcmp(grade, "B+") == 0) return 3.5;
    else if (strcmp(grade, "B") == 0) return 3.0;
    else if (strcmp(grade, "C+") == 0) return 2.5;
    else if (strcmp(grade, "C") == 0) return 2.0;
    else if (strcmp(grade, "D+") == 0) return 1.5;
    else if (strcmp(grade, "D") == 0) return 1.0;
    else return 0.0;
}
```

### คำนวณเกรดเฉลี่ย (GPA)
```c
double calculateGPA(double scores[], int credits[], int subjects) {
    double totalGradePoints = 0;
    int totalCredits = 0;
    
    for(int i = 0; i < subjects; i++) {
        char* grade = scoreToGrade(scores[i]);
        double gpa = gradeToGPA(grade);
        totalGradePoints += gpa * credits[i];
        totalCredits += credits[i];
    }
    
    return totalGradePoints / totalCredits;
}
```

## 🔢 การคำนวณเลขยกกำลังและราก

### กำลังสอง กำลังสาม และรากที่สอง
```c
#include <math.h>
int square(int n) { return n * n; }
int cube(int n) { return n * n * n; }
double squareRoot(double n) { return sqrt(n); }
double power(double base, double exp) { return pow(base, exp); }
```

## 🎯 การคำนวณทางสถิติ

### หาค่าเฉลี่ย มัธยฐาน และฐานนิยม
```c
double mean(int arr[], int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) sum += arr[i];
    return (double)sum / n;
}

double median(int arr[], int n) {
    // เรียงข้อมูลก่อน (bubble sort)
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    if(n % 2 == 0) {
        return (arr[n/2-1] + arr[n/2]) / 2.0;
    } else {
        return arr[n/2];
    }
}
```

## 💰 การคำนวณทางการเงิน

### ดอกเบี้ยทบต้น
```c
double compoundInterest(double principal, double rate, int time) {
    return principal * pow(1 + rate/100, time);
}

// ดอกเบี้ยธรรมดา
double simpleInterest(double principal, double rate, int time) {
    return principal * (1 + (rate * time) / 100);
}
```

### คำนวณส่วนลดและภาษี
```c
double discount(double price, double percent) {
    return price * (1 - percent/100);
}

double addTax(double price, double taxRate) {
    return price * (1 + taxRate/100);
}
```

---

## 💡 เคล็ดลับการใช้งาน:

1. **ใช้ `#include <math.h>`** สำหรับฟังก์ชันคณิตศาสตร์
2. **ใช้ `const`** สำหรับค่าคงที่ เช่น `const double PI = 3.14159;`
3. **ตรวจสอบการหารด้วย 0** เสมอ
4. **ใช้ `double`** สำหรับทศนิยม แทน `float`
5. **Round ผลลัพท์** ด้วย `round()` หรือ `printf("%.2f", result)`