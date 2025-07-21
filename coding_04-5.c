#include <stdio.h>

// การใช้ตัวแปร static variable
void countCallStatic() {
    static int counter = 0; // ตัวแปร static ถูกเก็บค่าระหว่างการเรียกฟังก์ชัน
    counter++;
    printf("[Static] Call Function: Counter = %d\n", counter);
}

// การใช้ตัวแปร non-static variable
void countCallNonStatic() {
    int counter = 0; // ตัวแปร non-static จะเริ่มต้นค่าใหม่ทุกครั้งที่มีการเรียกใช้ฟังก์ชัน
    counter++;
    printf("[Non-Static] Call Function: Counter = %d\n", counter);
}

int main() {
    printf("ทดสอบการเรียกใช้งานฟังก์ชัน\n\n");

    printf("ทดสอบ Non-Static Variable\n");
    countCallNonStatic();
    countCallNonStatic();
    countCallNonStatic();
    countCallNonStatic();

    printf("\nทดสอบ Static Variable\n");
    countCallStatic();
    countCallStatic();
    countCallStatic();
    countCallStatic();

    return 0;
}

/*
ผลลัพธ์ที่ได้จากโปรแกรมมีดังนี้
- กรณี static ค่าในตัวแปร counter จะเพิ่มขึ้นเรื่อย ๆ เพราะเก็บค่าเดิมไว้
- กรณี non-static counter จะเริ่มที่ 0 ทุกครั้ง ทำให้แสดงผลเป็น 1 เสมอ

- ความแตกต่างของ Non-Static Variable
  - ตัวแปร non-static จะถูกกำหนดค่าภายในฟังก์ชันนั้น ๆ เท่านั้น

- ตัวแปรแบบ static ใช้งานการทำงานต่อเนื่อง
  - ใช้ static จะมีการเก็บค่าครั้งล่าสุดของการเรียกใช้ฟังก์ชัน
  - ใช้ non-static เมื่อจบการทำงานค่าตัวแปรจะหาย
*/