#include <stdio.h>

const int GLOBAL_RATE = 10; // ประกาศค่า global constant

void calculate() {
    const int LOCAL_BONUS = 50; // ประกาศค่า local constant

    printf("GLOBAL_RATE = %d\n", GLOBAL_RATE);
    printf("LOCAL_BONUS = %d\n", LOCAL_BONUS);
}

int main() {
    calculate();

    printf("GLOBAL_RATE = %d\n", GLOBAL_RATE);

    // ไม่สามารถใช้ LOCAL_BONUS ได้ที่นี่ เพราะมันถูกประกาศไว้เฉพาะในฟังก์ชัน calculate()
    // printf("LOCAL_BONUS = %d\n", LOCAL_BONUS); // ถ้าเอาบรรทัดนี้ออกคอมเมนต์จะ error

    return 0;
}
