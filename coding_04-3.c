#include <stdio.h>

int main() {
    // ประกาศตัวแปร
    char nameInitial = 'K';            //ตัวอักษรแรกของชื่อ
    int age = 20;                     //อายุ (จำนวนเต็ม)
    float weight = 48.50;           //น้ำหนัก(จำนวนทศนิยม 1 ตำแหน่ง)   
    char gender[] = "Female";          //เพศ (เป็นข้อความ)

    
    printf("nameInitial = %c\n", nameInitial);
    printf("age = %d\n", age);
    printf("weight = %.2f\n", weight);
    printf("gender = %s\n", gender);

    return 0;
}