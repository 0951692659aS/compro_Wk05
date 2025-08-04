#include <stdio.h>

int main() {
// ประกาศตัวแปรชื่อ เป็นข้อความ (string)
char name[] = "Rapeepat";

// ประกาศตัวแปรอายุ เป็นจำนวนเต็ม
int age = 19;

// ประกาศตัวแปรน้ำหนัก เป็นเลขทศนิยม
float weight = 68.8;

// แสดงผลบรรทัดที่ 1
printf("Student %s is %d years old.\n", name, age);

// แสดงผลบรรทัดที่ 2
printf("His weighs is %.1f kg.\n", weight);

return 0;
}
