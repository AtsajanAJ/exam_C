
integer = int -- > %d

- Decimal(base 10) 0-9
- Octal (base 8) 0 to 7
- Hexadecimal (base 16) 0-F
- %d ซ้ายสุด
- %9d สำรอง 9 ช่อง และเริ่มจากขวาสุด
- %-9d สำรอง 9 ช่อง และเริ่มจากซ้ายสุด


Float number = float --> %f or %.2f(%nf)

Char --> %c -->single quotation marks.
- 'a' 'b' 'D '#' '3'
- can use %d to decimal 
 example --> from A --> 65 (%c --> %d)

 Strings --> %s --> " " double quote
- For beginning step, strings must be defined at the declaration step.
  char word[20] = “Hello C”;

  Operator and Description
- + adds two operands
- - subtract second operands from first
- * multiply two operand
- / divide numerator by denominator
- % modular is used to find the remainder of division
- ++ Increment operator - increases integer value by one
- -- Decrement operator - decreases integer value by one

In C language, types of data and operators are very important
- int +-*/% int result is int
- float +-*/% float result is float
- float +-*/% int result is float
- Int +-*/% float result is float

High priority     
                  Operator Associativity
                  ( ) [ ] Left to right
                  * / % Left to right
                  + - Left to right
Low priority


Formula to calculate
    year = total/365;
    month = (total%365)/30;
    week = ((total%365)%30)/7;
    day = ((total%365)%30)%7;

    h = total/60;
    m = total%60;


Increase Operator --> ++
Descrement Operator --> --


Convert datatype in C
There are 3 ways to convert datatypes in C
• Arithmetic Conversion
• Implicit Type Conversion
• Explicit Type Conversion

• For example,
int x = 5, y =2;
printf(" x / y = %.2f \n", (float)x/y);
printf(" x / y = %.2f \n", x/(float)y);
printf(" x / y = %.2f \n", (float)x/(float)y);
printf(" x / y = %.2f \n", (float)(x/y));

Examples...
expression1 = expression1 + expression2
can be shorten as
expression1 += expression2

x = x + 1; changed to x += 1;
a = a - b; changed to a -= b;
x = x * 2; changed to x *= 2;
y = y / 5; changed to y /= 5;