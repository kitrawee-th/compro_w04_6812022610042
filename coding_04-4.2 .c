#include <stdio.h>

int main() {
    int score = 90.5;  // จะเกิดการตัดทศนิยม
    printf("กรณีที่ 1 - int Score (int) = %d\n", score);
   
   //กรณีที่ 2 ใช้ float
   float score2 = 90.5;
   printf("กรณีที่ 2 - float score: %.1f\n",score2)
    return 0;
}
//กรณีที่ _1: เมื่อใช้ int จะเกิดการตัดทศนิยม ทำให้ค่าที่ได้เป็น 90
//กรณีที่ _2: float จะเก็บค่าทศนิยม ทำให้ค่าที่ได้เป๋น 90.5 
//ถ้าใช้ int score1 = 90.5; จะเกิด error เพราะ int เก็บแต่จำนวนเต็มไม่ๆด้ ต้องใช้ float หรือ double แทนถ้าต้องการเก็บค่าทศนิยม