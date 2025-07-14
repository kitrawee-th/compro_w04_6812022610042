#include <stdio.h>
int score = 0 ;

void updateScore() {
    score = 100;

       printf("Score updated to: %d\n", score);
}

void showScore() {
    printf("ใน showScore, score = %d\n", score);
}

int main() {
    printf("ก่อนเเรียกฟังชัน score= %d\n", score);
    updateScore();
    showScore();
    return 0 ;
}
   