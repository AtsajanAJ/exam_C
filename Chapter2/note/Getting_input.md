
Function prototype:
scanf(“variable_type”, &variable_name);

For example...
int age;
scanf(“%d”, &age);

float height;
scanf(“%f”, &height);

More examples...
int age;
scanf(“%d”, &age);

float height;
scanf(“%f”, &height);

char gender;
scanf(“%c”, &gender);

char name[20];
scanf(“%s”, &name);

ใช้ scanf(" %c", &grade_Thai);
เครื่องหมายเว้นวรรค " " หน้าคำสั่ง %c บอกให้ scanf ข้ามพวก whitespace (\n, space, tab) ก่อน → จะอ่านเฉพาะตัวอักษรจริงๆ

สรุปง่ายๆ:
ที่มันผิดเพราะ newline จากการกด Enter
วิธีแก้คือใส่ เว้นวรรคใน scanf → " %c"

put fflush(stdin) after scanf with char only

dont for get to use #include<string.h>
fgets(name, sizeof(name), stdin); // ตัด \n ออก or gets(variable_name)